// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ParticleHelper.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "Barrel.generated.h"

/**
 * Base barrel component
 */
UCLASS(Blueprintable, BlueprintType)
class UE4CCP_ASSIGNMENT1_API UBarrel : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBarrel();

	/**
	 * Virtual base Fire function
	 * Is overwritten by derived classes for use
	 */
	UFUNCTION()
		virtual UBarrel* Fire(UPARAM(ref) AController* controller);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barrel Data")
		FRotator BarrelRecoil = FRotator::ZeroRotator; /** Recoil to use for recoil calculations inside of recoil component */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barrel Data")
		FVector2D Spread = FVector2D::ZeroVector; /** Used to give random spread of bullets when fired */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emitter")
	UParticleSystemComponent* BarrelEmitter; /** Particle system used for firing effects */

	UPROPERTY()
	UAudioComponent* BarrelAudioEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Emitter")
	USoundBase* FiringAudio; /** audio cue when weapon is fired */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barrel Data")
		int BulletsPerShot = 1; /** Number of bullets per fired "round", think shotguns */

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
};
