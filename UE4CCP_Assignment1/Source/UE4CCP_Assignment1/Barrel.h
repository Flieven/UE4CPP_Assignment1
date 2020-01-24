// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Barrel.generated.h"



UCLASS(Blueprintable, BlueprintType)
class UE4CCP_ASSIGNMENT1_API UBarrel : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBarrel();

	UFUNCTION()
		virtual UBarrel* Fire(UPARAM(ref) AController* controller);

	UPROPERTY(BlueprintReadWrite, Category = "Barrel Data")
		FRotator BarrelRecoil = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barrel Data")
		FVector Spread = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barrel Data")
		int BulletsPerShot = 1;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
};
