// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBarrel.h"

UProjectileBarrel::UProjectileBarrel()
{

}

void UProjectileBarrel::BeginPlay()
{
	Super::BeginPlay();
	BarrelAudioEmitter->SetSound(FiringAudio);
}

UBarrel* UProjectileBarrel::Fire(UPARAM(ref)AController* Controller)
{
	for (int i = 0; i <= AmmoTypes.Num(); i++) {
		if (i == AmmoTypes.Num()) {
			UE_LOG(LogTemp, Warning, TEXT("No Usable Ammo, Play Empty Clip Sound?"));
			return nullptr;
		}
		else if (AmmoTypes[i].CurrentAmmo > 0)
		{
			for (int j = 0; j < BulletsPerShot; j++)
			{
				GetWorld()->SpawnActor<AUE4CCP_Assignment1Projectile>(Cast<UProjectileAmmo>(AmmoTypes[i].AmmoType)->ProjectileObject, GetComponentTransform().GetLocation(), GetComponentRotation());

			}
			BarrelEmitter->Activate(true);
			BarrelAudioEmitter->Play();
			return this;
		}
	}

	return nullptr;
}
