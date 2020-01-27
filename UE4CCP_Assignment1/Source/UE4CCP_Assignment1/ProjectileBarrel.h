// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barrel.h"
#include "ProjectileAmmo.h"
#include "UE4CCP_Assignment1GameMode.h"
#include "ProjectileBarrel.generated.h"

/**
 * Structure that handles data regarding ammo for this barrel type
 */
USTRUCT(Blueprintable, BlueprintType)
struct FProjectileAmmoStruct
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		UProjectileAmmo* AmmoType; /** The type of ammo that's being used */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		int AmmoCapacity = 30; /** The amount of ammo we can carry in a single "magazine" */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		int CurrentAmmo = 30; /** The amount of ammo currently in our "magazine" */
};

/**
 * Derived class of UBarrel
 */
UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class UE4CCP_ASSIGNMENT1_API UProjectileBarrel : public UBarrel
{
	GENERATED_BODY()

public:

	UProjectileBarrel();

	void BeginPlay() override;

	/**
	 * Overrides Fire function in base barrel class
	 * Passing a controller to it does nothing as the controller is mostly used in the linetrace barrel anyway
	 */
	UBarrel* Fire(UPARAM(ref) AController* Controller) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		TArray<FProjectileAmmoStruct> AmmoTypes; /** An array of all ammo types usable by this weapon */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		float ZeroingDistance; /** [UNUSED] Zeroing distance of a projectile */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		FProjectileAmmoStruct EquippedAmmo; /** The ammo currently "equipped" on this barrel */
	
};
