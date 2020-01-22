// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "CollisionQueryParams.h"
#include "Math/UnrealMathUtility.h"
#include <string>
#include "UE4CCP_Assignment1Character.h"

// Sets default values for this component's properties
AWeapon::AWeapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryActorTick.bCanEverTick = true;

	// ...
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ObjectMesh"));
	WeaponMesh->bCastDynamicShadow = false;
	WeaponMesh->CastShadow = false;
	WeaponMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	WeaponMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}


// Called when the game starts
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::Fire_Implementation(UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, TArray<FHitResult>& Hits, bool& bHitResult)
{
	FCollisionQueryParams CollisionParams;

	for (UBarrel* Barrel : Barrels) {
		FVector SourcePoint = Barrel->GetComponentTransform().GetLocation();
		
		FVector TargetPoint = EndPoint + Barrel->GetRightVector() * Spread.X * FMath::RandRange(-1.f, 1.f) + Barrel->GetUpVector() * Spread.Y * FMath::RandRange(-1.f, 1.f);

		DrawDebugLine(GetWorld(), SourcePoint, TargetPoint, FColor::Green, true);
		FHitResult Hit;
		if (GetWorld()->LineTraceSingleByChannel(Hit, SourcePoint, TargetPoint, ECC_Visibility, CollisionParams)) {
			Hits.Add(Hit);
			bHitResult = true;
		}
		else {
			bHitResult = false;
		}
	}
}

void AWeapon::Reload_Implementation(UPARAM(ref)TArray<UBarrel*>& Barrels)
{
	for (UBarrel* Barrel : Barrels) {
		//if
	}
}

void AWeapon::OnInteract_Implementation(AActor* Caller)
{
	AUE4CCP_Assignment1Character* owner = Cast<AUE4CCP_Assignment1Character>(Caller);

	WeaponMesh->SetAllBodiesSimulatePhysics(false);
	AttachToComponent(owner->Mesh1P, FAttachmentTransformRules::SnapToTargetIncludingScale, "GripPoint");
	SetActorLocation(owner->Mesh1P->GetSocketLocation("GripPoint"), false, 0, ETeleportType::TeleportPhysics);

	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);

	if (owner->EquippedObject == nullptr) { owner->UpdateEquippedWeapon(this); }
}



