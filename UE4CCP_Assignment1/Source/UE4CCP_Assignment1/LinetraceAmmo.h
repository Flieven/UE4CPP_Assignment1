// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AmmoBase.h"
#include "LinetraceAmmo.generated.h"

/**
 * Derived class of UAmmoBase
 */
UCLASS(BlueprintType, Blueprintable)
class UE4CCP_ASSIGNMENT1_API ULinetraceAmmo : public UAmmoBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
	float DamageValue = 0.f; /** The amount of damage a line will do to a hittable target */
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
	float LineDistance = 1000.f; /** The distance a line will travel in the world */

};


