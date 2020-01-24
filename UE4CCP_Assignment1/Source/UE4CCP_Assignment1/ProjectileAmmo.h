// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AmmoBase.h"
#include "ProjectileAmmo.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class UE4CCP_ASSIGNMENT1_API UProjectileAmmo : public UAmmoBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
	TSubclassOf<AUE4CCP_Assignment1Projectile> ProjectileObject; /**support for creating and using objects for projectile ammo */

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
		float DamageValue = 0;
};
