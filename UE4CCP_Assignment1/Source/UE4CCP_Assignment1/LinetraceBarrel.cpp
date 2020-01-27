// Fill out your copyright notice in the Description page of Project Settings.


#include "LinetraceBarrel.h"
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"

#include "Math/UnrealMathUtility.h"

#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "AmmoBase.h"
#include "LinetraceAmmo.h"
#include "DamageComponent.h"

#include "UE4CCP_Assignment1GameMode.h"

#include "Camera/CameraComponent.h"

#include "UE4CCP_Assignment1Character.h"

ULinetraceBarrel::ULinetraceBarrel()
{
	
}

ULinetraceBarrel::~ULinetraceBarrel()
{
}

void ULinetraceBarrel::BeginPlay()
{
	Super::BeginPlay();
}

FVector ULinetraceBarrel::GetEndPoint(AController* controller, float travelDist)
{
	if (Cast<APlayerController>(controller))
	{
		APlayerController* PlayerController = Cast<APlayerController>(controller);

		if (PlayerController->GetPawn()->HasActiveCameraComponent())
		{
			FVector Start;
			FVector End;
			FRotator Rot;
			FVector BulletSpread;

			PlayerController->GetPlayerViewPoint(Start, Rot);

			BulletSpread.X = FMath::RandRange(FMath::Abs(Spread.X) * -1, Spread.X);
			BulletSpread.Y = FMath::RandRange(FMath::Abs(Spread.Y) * -1, Spread.Y);
			BulletSpread.Z = FMath::RandRange(FMath::Abs(Spread.Z) * -1, Spread.Z);

			End = (Start + BulletSpread) + (Rot.Vector() * travelDist);
			return End;
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("No Controller Found, returning Zero!"));
	return FVector::ZeroVector;
}

UBarrel* ULinetraceBarrel::Fire(UPARAM(ref) AController* controller)
{
	if (!EquippedAmmo.AmmoType) {
		float tempdmg = EquippedAmmo.AmmoType->DamageValue;
		UE_LOG(LogTemp, Warning, TEXT("No Ammo Equipped, Play Empty Clip Sound?"));
		return nullptr;
	}

	if (EquippedAmmo.CurrentAmmo <= 0) {
		UE_LOG(LogTemp, Warning, TEXT("Empty Mag, Play Empty Clip Sound?"));
		return nullptr;
	}

	EquippedAmmo.CurrentAmmo--;

	//float Distance = Cast<ULineTraceAmmo>(EquippedAmmo.AmmoType)->LineDistance;

	for (int i = 0; i < BulletsPerShot; i++)
	{
		FCollisionQueryParams CollisionParams;

		FVector SourcePoint = GetComponentTransform().GetLocation();

		FVector TargetPoint = GetEndPoint(controller, EquippedAmmo.AmmoType->LineDistance);

		DrawDebugLine(GetWorld(), SourcePoint, TargetPoint, FColor::Green, true);
		FHitResult Hit;
		GetWorld()->LineTraceSingleByChannel(Hit, SourcePoint, TargetPoint, ECC_Visibility, CollisionParams);
		if (Hit.GetActor() && Hit.GetActor()->FindComponentByClass<UDamageComponent>()) {
			UE_LOG(LogTemp, Warning, TEXT("hit: %s"), *Hit.GetActor()->GetFName().ToString());
			if (Cast<ULinetraceAmmo>(EquippedAmmo.AmmoType)) {
				Hit.GetActor()->FindComponentByClass<UDamageComponent>()->TakeDamage(Cast<ULinetraceAmmo>(EquippedAmmo.AmmoType)->DamageValue);
			}
		}
		BarrelEmitter->Activate(true);
	}
	return this;
}
