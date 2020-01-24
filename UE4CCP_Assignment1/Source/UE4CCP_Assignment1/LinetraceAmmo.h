// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AmmoBase.h"
#include "LinetraceAmmo.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class UE4CCP_ASSIGNMENT1_API ULinetraceAmmo : public UAmmoBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
	float DamageValue = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
	float LineDistance = 1000.f;

};


