// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Barrel.generated.h"

class AController;

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

	virtual void Fire(AController* controller);

	void GetEndPoint(AController* controller, float travelDist);
		
};
