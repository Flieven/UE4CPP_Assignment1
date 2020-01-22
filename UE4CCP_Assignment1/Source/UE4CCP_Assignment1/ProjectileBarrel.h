// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barrel.h"
#include "AmmoBase.h"
#include "ProjectileBarrel.generated.h"

USTRUCT(BlueprintType)
struct FProjectileAmmoStruct
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		TSubclassOf<UProjectileAmmo> AmmoType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		int AmmoCapacity = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		int CurrentAmmo = 30;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UE4CCP_ASSIGNMENT1_API UProjectileBarrel : public UBarrel
{
	GENERATED_BODY()
	
public:
	void Fire(UPARAM(ref) AController* Controller, TArray<FHitResult>& Hits, bool& bHitResult) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		TArray<FProjectileAmmoStruct> AmmoTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		float ZeroingDistance;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		FProjectileAmmoStruct EquippedAmmo;*/

};
