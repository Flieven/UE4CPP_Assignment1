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
		virtual void Fire(UPARAM(ref) AController* controller, TArray<UBarrel*>& SuccesfulBarrels);

	UPROPERTY(BlueprintReadWrite, Category = "Barrel Data")
		FRotator BarrelRecoil = FRotator(150.f, 0.f, 0.f);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
};
