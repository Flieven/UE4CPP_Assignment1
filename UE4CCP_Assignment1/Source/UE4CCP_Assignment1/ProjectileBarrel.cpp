// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBarrel.h"
#include "ProjectileBase.h"

void UProjectileBarrel::Fire(AController* Controller, TArray<FHitResult>& Hits, bool& bHitResult)
{
	//TODO: Make projectile spawn at component location.
	FProjectileAmmoStruct AmmoToUse;
	for (int i = 0; i <= AmmoTypes.Num(); i++) {
		if (i == AmmoTypes.Num()) {
			UE_LOG(LogTemp, Warning, TEXT("No Usable Ammo, Play Empty Clip Sound?"));
			return;
		}
		if (AmmoTypes[i].CurrentAmmo > 0) {
			AmmoToUse = AmmoTypes[i];
			break;
		}
	}

	/*GetWorld()->SpawnActor<AActor>(Cast<UProjectileAmmo>(AmmoToUse.AmmoType)->ProjectileObject->GetClass(), &GetComponentTransform().GetLocation());
	GetWorld()->SpawnActor<AActor>(Cast<UProjectileAmmo>(AmmoToUse.AmmoType)->ProjectileObject->GetClass(), &GetComponentTransform().GetLocation(), &GetComponentTransform().GetRotation());
	*/
}
