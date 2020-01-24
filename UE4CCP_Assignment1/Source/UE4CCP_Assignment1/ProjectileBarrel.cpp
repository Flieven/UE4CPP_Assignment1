// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBarrel.h"
#include "UE4CCP_Assignment1Projectile.h"
#include "ProjectileBase.h"

void UProjectileBarrel::Fire(AController* Controller, TArray<UBarrel*>& SuccesfulBarrels)
{
	//TODO: Make projectile spawn at component location.
	for (int i = 0; i <= AmmoTypes.Num(); i++) {
		if (i == AmmoTypes.Num()) {
			UE_LOG(LogTemp, Warning, TEXT("No Usable Ammo, Play Empty Clip Sound?"));
			return;
		}
		if (AmmoTypes[i].CurrentAmmo > 0) 
		{
			GetWorld()->SpawnActor<AUE4CCP_Assignment1Projectile>(Cast<UProjectileAmmo>(AmmoTypes[i].AmmoType)->ProjectileObject, GetComponentTransform().GetLocation(), GetComponentRotation());
			break;
			
		}
	}
}
