// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <UObject/Object.h>
#include "CoreMinimal.h"


/**
 Ammo Base and Derived classes
 */

class UE4CCP_ASSIGNMENT1_API AmmoBase
{
public:
	AmmoBase();
	~AmmoBase();

};

class UE4CCP_ASSIGNMENT1_API LineTraceAmmo : public AmmoBase
{
public:
	LineTraceAmmo();
	~LineTraceAmmo();

protected:
	float DamageValue = 0;
	float LineDistance = 0;
};


class UE4CCP_ASSIGNMENT1_API ProjectileAmmo : public AmmoBase
{
public:
	ProjectileAmmo();
	~ProjectileAmmo();

protected:
	float DamageValue = 0;
	class UObject* ProjectileObject; /**support for creating and using objects for projectile ammo */
};