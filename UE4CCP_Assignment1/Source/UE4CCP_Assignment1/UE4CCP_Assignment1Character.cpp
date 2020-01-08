// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4CCP_Assignment1Character.h"
#include "UE4CCP_Assignment1Projectile.h"

#include "Animation/AnimInstance.h"

#include "Camera/CameraComponent.h"

#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"

#include "GameFramework/InputSettings.h"

#include "Kismet/GameplayStatics.h"

#include "HeadMountedDisplayFunctionLibrary.h"

#include "UInventoryComponent.h"

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

	inventory = CreateDefaultSubobject<UUInventoryComponent>(TEXT("CharacterInventory"));
}

void AUE4CCP_Assignment1Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	Mesh1P->SetHiddenInGame(false, true);
}

#pragma region Interactions

void AUE4CCP_Assignment1Character::dropItem()
{
	//if (currentWeapon != NULL)
	//{
	//	//Do the things needed to drop the weapon here.
	//}
}

void AUE4CCP_Assignment1Character::interact()
{
	FVector loc;
	FRotator rot;
	FHitResult hit;

	GetController()->GetPlayerViewPoint(loc, rot);

	FVector start = loc;
	FVector end = start + (rot.Vector() * interactionDist);

	FCollisionQueryParams traceParams;

	DrawDebugLine(GetWorld(), start, end, FColor::Green, false, 2.0f);

	if (GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, traceParams))
	{
		if (hit.GetActor() != NULL && hit.GetActor()->Tags.Contains("PickUp"))
		{
			UE_LOG(LogTemp, Display, TEXT("Hit detected!"));
			if (inventory && inventory->hasEmptySlot())
			{
				inventory->add(hit.GetActor());;

				hit.GetActor()->DisableComponentsSimulatePhysics();
				hit.GetActor()->AttachToComponent(Mesh1P, FAttachmentTransformRules::SnapToTargetIncludingScale, "GripPoint");
				hit.GetActor()->SetActorLocation(Mesh1P->GetSocketLocation("GripPoint"), false, 0 , ETeleportType::TeleportPhysics);

				if (EquipedWeapon == NULL) { updateEquipedWeapon(hit.GetActor()); }
			}
			else { UE_LOG(LogTemp, Display, TEXT("ERROR 404: Inventory Not Found")); }
		}
	}
}

void AUE4CCP_Assignment1Character::updateEquipedWeapon(AActor* obj)
{
	if (EquipedWeapon != NULL)
	{
		EquipedWeapon->SetActorHiddenInGame(true);
		EquipedWeapon->SetActorEnableCollision(false);
		EquipedWeapon->SetActorTickEnabled(false);
	}

	EquipedWeapon = obj;

	EquipedWeapon->SetActorHiddenInGame(false);
	EquipedWeapon->SetActorEnableCollision(false);
	EquipedWeapon->SetActorTickEnabled(true);
}

#pragma endregion

void AUE4CCP_Assignment1Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AUE4CCP_Assignment1Character::OnFire);

	PlayerInputComponent->BindAction("PickUp", IE_Pressed, this, &AUE4CCP_Assignment1Character::interact);

	PlayerInputComponent->BindAction("Drop", IE_Pressed, this, &AUE4CCP_Assignment1Character::dropItem);

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

void AUE4CCP_Assignment1Character::OnFire()
{
	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
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
#pragma endregion


