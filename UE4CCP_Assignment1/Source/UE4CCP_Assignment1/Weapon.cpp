// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "CollisionQueryParams.h"
#include "Math/UnrealMathUtility.h"
#include <string>

// Sets default values for this component's properties
UWeapon::UWeapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeapon::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWeapon::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWeapon::Fire_Implementation(UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, TArray<FHitResult>& Hits, bool& bHitResult)
{
	FCollisionQueryParams CollisionParams;

	for (UBarrel* Barrel : Barrels) {
		FVector SourcePoint = Barrel->GetComponentTransform().GetLocation();
		Barrel->GetRightVector();

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
}/*

void UWeapon::Fire_Burst_Implementation(ERepeat Repeat, UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, int BulletCount, float TimeBetweenBullets, float TimeBetweenBursts, FKey FireKey, TArray<FHitResult>& Hits, bool& bHitResult) {
	switch(Repeat) {
		case ERepeat::Start:
			BurstCount = 0;

			break;
		case ERepeat::Repeat:
			BurstCount += 1;
			break;
	}
}

void UWeapon::Fire_Burst_Hidden(UPARAM(ref)TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, TArray<FHitResult>& Hits, bool& bHitResult)
{
	Fire_Implementation(Barrels, EndPoint, Spread, Hits, bHitResult);
}*/


