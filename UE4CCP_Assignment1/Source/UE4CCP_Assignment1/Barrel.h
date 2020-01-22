// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AmmoBase.h"
#include "Barrel.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API UBarrel : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBarrel();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/*UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Weapon Asset")
	FAmmoDamage AmmoDamage; */
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	int AmmoCapacity = 30;
	int CurrentAmmo = 30;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Barrel Data")
	TArray<TSubclassOf<UAmmoBase>> AmmoTypes;
		
};
