// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <CoreMinimal.h>
#include <UObject/Object.h>
#include <UObject/ObjectMacros.h>
#include "AmmoBase.generated.h"



/**
 Ammo Base and Derived classes
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UE4CCP_ASSIGNMENT1_API UAmmoBase : public UObject
{
	GENERATED_BODY()

public:
	UAmmoBase();
	~UAmmoBase();

};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UE4CCP_ASSIGNMENT1_API ULineTraceAmmo : public UAmmoBase
{
	GENERATED_BODY()

public:
	ULineTraceAmmo();
	~ULineTraceAmmo();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
	float DamageValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
	float LineDistance = 0;
};

UCLASS(ClassGroup	 = (Custom), meta = (BlueprintSpawnableComponent))
class UE4CCP_ASSIGNMENT1_API UProjectileAmmo : public UAmmoBase
{
	GENERATED_BODY()

public:
	UProjectileAmmo();
	~UProjectileAmmo();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
	float DamageValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Details")
	class UObject* ProjectileObject; /**support for creating and using objects for projectile ammo */
};