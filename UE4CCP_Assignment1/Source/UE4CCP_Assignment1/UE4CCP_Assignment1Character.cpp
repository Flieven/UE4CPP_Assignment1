#include "UE4CCP_Assignment1Character.h"
// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4CCP_Assignment1Character.h"
#include "UE4CCP_Assignment1Projectile.h"

#include "Animation/AnimInstance.h"

#include "Camera/CameraComponent.h"

#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"

#include "GameFramework/InputSettings.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

#include "HeadMountedDisplayFunctionLibrary.h"

#include "UInventoryComponent.h"
#include "DamageComponent.h"
#include "ATEST_OBJ.h"
#include "Weapon.h"
#include "Interinterface.h"

#include "DrawDebugHelpers.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AUE4CCP_Assignment1Character <--- Why Epic Games? What is this? Who hurt you?

AUE4CCP_Assignment1Character::AUE4CCP_Assignment1Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	Inventory = CreateDefaultSubobject<UUInventoryComponent>(TEXT("CharacterInventory"));

	
}

void AUE4CCP_Assignment1Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AUE4CCP_Assignment1Character::BeginOverlap);
	//GetCapsuleComponent()->
	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	Mesh1P->SetHiddenInGame(false, true);
}

//void AUE4CCP_Assignment1Character::OnOwnerBeginOverlap(AActor* owner, AActor* otherActor)
//{
//}

void AUE4CCP_Assignment1Character::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Display, TEXT("BeginOverlap Called"));
	if (Inventory && Inventory->bHasEmptySlot())
	{
		UE_LOG(LogTemp, Display, TEXT("Adding"));
		Inventory->Add(OtherActor);

		Inventory->DebugInventory();

		if (OtherActor->GetClass()->ImplementsInterface(UInterinterface::StaticClass()))
			IInterinterface::Execute_OnOverlap(OtherActor, this);
		else
			UE_LOG(LogTemp, Display, TEXT("Couldn't cast"));
	}
	else { UE_LOG(LogTemp, Display, TEXT("ERROR 404: Inventory Not Found")); }
	UE_LOG(LogTemp, Display, TEXT("Added?"));
}

#pragma region Interactions

void AUE4CCP_Assignment1Character::DropItem()
{
	if (EquippedObject)
	{
		UE_LOG(LogTemp, Display, TEXT("Dropping weapon"));
		Inventory->Remove(Inventory->Find(EquippedObject));
		YeetEquippedWeapon();
	}
}

void AUE4CCP_Assignment1Character::Interact()
{
	FVector loc;
	FRotator rot;
	FHitResult hit;

	GetController()->GetPlayerViewPoint(loc, rot);

	FVector start = loc;
	FVector end = start + (rot.Vector() * InteractionDist);

	FCollisionQueryParams traceParams;

	DrawDebugLine(GetWorld(), start, end, FColor::Green, false, 2.0f);

	if (GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, traceParams))
	{
		if (hit.GetActor())
		{
			if (hit.GetActor()->Tags.Contains("PickUp") && Cast<IInterinterface>(hit.Actor))
			{
				UE_LOG(LogTemp, Display, TEXT("Hit detected!"));
				AddToInventory(hit.GetActor());

				Cast<IInterinterface>(hit.GetActor())->OnInteract_Implementation(this);
			}
			else if (hit.GetActor()->FindComponentByClass<UDamageComponent>()) 
			{ 
				UE_LOG(LogTemp, Display, TEXT("Damage Component Found!"));
				hit.GetActor()->FindComponentByClass<UDamageComponent>()->TakeDamage(hit.GetActor(), 5.0f, nullptr, GetController(), this);
			}

			else {}
		}
	}
	else {}
}

void AUE4CCP_Assignment1Character::UpdateEquippedWeapon(AActor* obj)
{
	if (EquippedObject != nullptr)
	{
		EquippedObject->SetActorHiddenInGame(true);
		EquippedObject->SetActorTickEnabled(false);
	}

	EquippedObject = obj;

	EquippedObject->SetActorHiddenInGame(false);
	EquippedObject->SetActorTickEnabled(true);

	//UE_LOG(LogTemp, Display, TEXT("Equipped: %s"), *EquippedObject->GetFName().ToString());

}

void AUE4CCP_Assignment1Character::YeetEquippedWeapon()
{
	EquippedObject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	if (Cast<AWeapon>(EquippedObject)) 
	{
		Cast<AWeapon>(EquippedObject)->WeaponMesh->SetAllBodiesSimulatePhysics(true);
		Cast<AWeapon>(EquippedObject)->WeaponMesh->AddImpulse(FirstPersonCameraComponent->GetForwardVector() * YeetStrength, NAME_None, true);
	}
	else if (Cast<AATEST_OBJ>(EquippedObject)) 
	{
		Cast<AATEST_OBJ>(EquippedObject)->Mesh->SetAllBodiesSimulatePhysics(true);
		Cast<AATEST_OBJ>(EquippedObject)->Mesh->AddImpulse(FirstPersonCameraComponent->GetForwardVector() * YeetStrength, NAME_None, true);
	}

	EquippedObject = nullptr;
}

#pragma endregion

void AUE4CCP_Assignment1Character::AddToInventory(AActor* Object)
{
	if (Inventory && Inventory->bHasEmptySlot())
	{
		Inventory->Add(Object);

		Inventory->DebugInventory();
	}
	else { UE_LOG(LogTemp, Display, TEXT("ERROR 404: Inventory Not Found")); }
}

void AUE4CCP_Assignment1Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("PickUp", IE_Pressed, this, &AUE4CCP_Assignment1Character::Interact);

	PlayerInputComponent->BindAction("Drop", IE_Pressed, this, &AUE4CCP_Assignment1Character::DropItem);

	PlayerInputComponent->BindAxis("MouseWheel", this, &AUE4CCP_Assignment1Character::UpdateSlotNumber);
	
	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AUE4CCP_Assignment1Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AUE4CCP_Assignment1Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AUE4CCP_Assignment1Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AUE4CCP_Assignment1Character::LookUpAtRate);
}

#pragma region Movement Functions
void AUE4CCP_Assignment1Character::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AUE4CCP_Assignment1Character::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AUE4CCP_Assignment1Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AUE4CCP_Assignment1Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AUE4CCP_Assignment1Character::UpdateCurrentSlot()
{
	if (CurrentInventorySlot < 0) { CurrentInventorySlot = Inventory->Size(); }
	else if (CurrentInventorySlot > Inventory->Size()) { CurrentInventorySlot = 0; }

	/*UE_LOG(LogTemp, Display, TEXT("[DEBUG] CurrentSlot: %d"), currentInventorySlot);
	UE_LOG(LogTemp, Display, TEXT("[DEBUG] Contains: %d"), inventory->getFromSlot(currentInventorySlot));*/

	if (Inventory->GetFromSlot(CurrentInventorySlot))
	{
		UpdateEquippedWeapon(Inventory->GetFromSlot(CurrentInventorySlot));
	}
}
void AUE4CCP_Assignment1Character::UpdateSlotNumber(float value)
{
	CurrentInventorySlot += value;
	UpdateCurrentSlot();
}
#pragma endregion


