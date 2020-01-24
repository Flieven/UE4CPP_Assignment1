// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TargetPoint.h"
#include "TargetDummy.generated.h"

/**
 * Simple target dummy actor used for testing
 */
UCLASS()
class UE4CCP_ASSIGNMENT1_API ATargetDummy : public AActor
{
	GENERATED_BODY()
	
private:

	FVector StartPos = FVector::ZeroVector; /** Current position of target dummy on begin play */
	FVector TargetPos = FVector::ZeroVector; /** Target position used for movement interpolation (if used) */

	/**
	 * Moves the target dummy from its current location to a the currently set target location over dTime (delta Time)
	 */
	void MoveToTarget(float dTime);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	ATargetDummy();
	// Called every frame
	virtual void Tick(float DeltaTime) override;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dummy Movement")
	ATargetPoint* EndPos = nullptr; /** Target point used to give the other end position of a target dummy movement interpolation */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dummy Movement")
		float MovementSpeed = 1.0f; /** Spped at which the target dummy should move between target locations */
};
