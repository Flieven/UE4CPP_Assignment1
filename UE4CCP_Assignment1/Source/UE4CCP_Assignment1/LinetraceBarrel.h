// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barrel.h"
#include "AmmoBase.h"
#include "LinetraceAmmo.h"
#include "UE4CCP_Assignment1GameMode.h"
#include "LinetraceBarrel.generated.h"

USTRUCT(BlueprintType)
struct FLinetraceAmmoStruct
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	ULinetraceAmmo* AmmoType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	int AmmoCapacity = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	int CurrentAmmo = 30;
};

UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class UE4CCP_ASSIGNMENT1_API ULinetraceBarrel : public UBarrel
{
	GENERATED_BODY()

	
public:

	ULinetraceBarrel();
	~ULinetraceBarrel();

	void BeginPlay() override;

	UFUNCTION()
	FVector GetEndPoint(AController* controller, float travelDist);

	void Fire(UPARAM(ref) AController* controller, TArray<UBarrel*>& SuccesfulBarrels) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	TArray<ULinetraceAmmo*> AmmoTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	FLinetraceAmmoStruct EquippedAmmo;
};
