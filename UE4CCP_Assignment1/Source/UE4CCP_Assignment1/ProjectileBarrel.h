// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barrel.h"
#include "AmmoBase.h"
#include "ProjectileBarrel.generated.h"

USTRUCT(BlueprintType)
struct FAmmoStruct
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		TSubclassOf<UProjectileAmmo> AmmoTypes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		int AmmoCapacity = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		int CurrentAmmo = 30;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
UCLASS()
class UE4CCP_ASSIGNMENT1_API UProjectileBarrel : public UBarrel
{
	GENERATED_BODY()
	
public:
	void Fire(UPARAM(ref) AController* controller, TArray<FHitResult>& Hits, bool& bHitResult) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
		TArray<FAmmoStruct> AmmoTypes;

};
