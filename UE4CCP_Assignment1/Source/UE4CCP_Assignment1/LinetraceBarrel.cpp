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
	//Cast<ULineTraceAmmo>(EquippedAmmo.AmmoType).
		//Cast<ULineTraceAmmo>(EquippedAmmo.AmmoType);
	//EquippedAmmo.AmmoType = Cast< GetWorld()->GetAuthGameMode()
	//EquippedAmmo.AmmoType = Cast<ULineTraceAmmo>(Cast<AUE4CCP_Assignment1GameMode>(GetWorld()->GetAuthGameMode())->LinetraceAmmoType);
}

ULinetraceBarrel::~ULinetraceBarrel()
{
}

void ULinetraceBarrel::BeginPlay()
{
	//EquippedAmmo.AmmoType = Cast<ULineTraceAmmo>(Cast<AUE4CCP_Assignment1GameMode>(GetWorld()->GetAuthGameMode())->LinetraceAmmoType);

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
		UE_LOG(LogTemp, Warning, TEXT("Pointer: %d"), EquippedAmmo.AmmoType);
		UE_LOG(LogTemp, Warning, TEXT("Arraylength: %d"), AmmoTypes.Num());
		float tempdmg = EquippedAmmo.AmmoType->DamageValue;
		UE_LOG(LogTemp, Warning, TEXT("Damage?: %f"), tempdmg);
		/*UE_LOG(LogTemp, Warning, TEXT("Looking for ammo"));
		for (FLinetraceAmmoStruct Type : AmmoTypes) {
			UE_LOG(LogTemp, Warning, TEXT("Ammo iteration"));
			if (Type.CurrentAmmo > 0) {
				EquippedAmmo = Type;
				UE_LOG(LogTemp, Warning, TEXT("Found ammo"));
				break;
			}
		}
		UE_LOG(LogTemp, Warning, TEXT("Done looking for ammo"));*/
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
			UE_LOG(LogTemp, Warning, TEXT("ACTOR? MONKAS"));
			if (Cast<ULinetraceAmmo>(EquippedAmmo.AmmoType)) {
				UE_LOG(LogTemp, Warning, TEXT("TOOK DAMAGE KEKW"));
				//ULineTraceAmmo* TempAmmo = Cast<ULineTraceAmmo>(EquippedAmmo.AmmoType);
				//Cast<UDamageComponent>(Hit.GetActor())->TakeDamage(Cast<ULineTraceAmmo>(EquippedAmmo.AmmoType)->DamageValue);
				//Hit.GetActor()->FindComponentByClass<UDamageComponent>()->TakeDamage(Hit.GetActor(), 5.0f, nullptr, GetController(), this);
				Hit.GetActor()->FindComponentByClass<UDamageComponent>()->TakeDamage(Cast<ULinetraceAmmo>(EquippedAmmo.AmmoType)->DamageValue);
			}		
		}
	}
			
	return this;
}
