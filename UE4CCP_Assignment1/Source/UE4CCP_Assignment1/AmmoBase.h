// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <CoreMinimal.h>
#include <UObject/Object.h>
#include <UObject/ObjectMacros.h>
#include "UE4CCP_Assignment1Projectile.h"
#include "Engine/DataAsset.h"
#include "AmmoBase.generated.h"


/**
 Ammo Base class
 */
UCLASS(Abstract)
class UE4CCP_ASSIGNMENT1_API UAmmoBase : public UDataAsset
{
	GENERATED_BODY()

public:
	UAmmoBase();
	~UAmmoBase();
};