// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RecoilComponent.generated.h"

/**
 * Component which handles recoil inside of an object (preferably a weapon object)
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API URecoilComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URecoilComponent();

	/** Use this to create recoil effect */
	UFUNCTION(BlueprintCallable)
		void DoRecoil(AController* controller, TArray<FRotator> BarrelRecoils);

	/** The speed at which the recoil moves the character*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interpolation")
		float InterpolationSpeed = 0.1f;

	/** The length of time the recoil will force a movement on the character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interpolation")
		float InterpolationTime = 0.1f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UFUNCTION()
	void InterpolateRotation(float dTime);	/** It interpolates the rotation over dTime (deltaTime) */


	UFUNCTION()
	void StopInterpolation();	/** It stops the interpolation process */


	UPROPERTY()
	AController* ControllerRef = nullptr; /** A reference variable to save the passed through controller */
	/**
	 * The total calculated recoil over multiple recoil values
	 * Also a definitively intended pun on a famous movie staring Arnold Schwarzenegger
	 */
	UPROPERTY()
	FRotator TotalRecoil = FRotator::ZeroRotator;


	UPROPERTY()
	bool bActiveInterpolation = false;	/** Is the interpolation process active? */

	
	FTimerHandle RecoilHandle; /** A saved handle for the timer that processes the automatic recoil shutdown */
};
