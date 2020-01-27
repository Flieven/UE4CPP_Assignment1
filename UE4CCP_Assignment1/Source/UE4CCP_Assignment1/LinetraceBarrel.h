// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barrel.h"
#include "LinetraceAmmo.h"
#include "UE4CCP_Assignment1GameMode.h"
#include "LinetraceBarrel.generated.h"

/**
 * Structure that handles data regarding ammo for this barrel type
 */
USTRUCT(BlueprintType)
struct FLinetraceAmmoStruct
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	ULinetraceAmmo* AmmoType; /** The type of ammo that's being used */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	int AmmoCapacity = 30; /** The amount of ammo we can carry in a single "magazine" */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	int CurrentAmmo = 30; /** The amount of ammo currently in our "magazine" */
};

/**
 * Derived class of UBarrel
 */
UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class UE4CCP_ASSIGNMENT1_API ULinetraceBarrel : public UBarrel
{
	GENERATED_BODY()

	
public:

	ULinetraceBarrel();

	void BeginPlay() override;

	/**
	 * Returns a point at "travelDist" away from the "controller" that fires it.
	 * controller is the controller of whatever fires it.
	 * travelDist is the distance a line will "travel" from origin.
	 * Both of these are passed through the fire function if all is done correctly.
	 */
	UFUNCTION()
	FVector GetEndPoint(AController* controller, float travelDist);

	/**
	 * Overrides Fire function in base barrel class
	 * controller = the controller of whatever pawn calls the function
	 */
	UBarrel* Fire(UPARAM(ref) AController* controller) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	TArray<ULinetraceAmmo*> AmmoTypes; /** An array of all ammo types usable by this weapon */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Data")
	FLinetraceAmmoStruct EquippedAmmo; /** The ammo currently "equipped" on this barrel */
};
