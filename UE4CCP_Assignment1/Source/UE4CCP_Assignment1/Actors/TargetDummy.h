// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TargetPoint.h"
#include "TargetDummy.generated.h"

UCLASS()
class UE4CCP_ASSIGNMENT1_API ATargetDummy : public AActor
{
	GENERATED_BODY()
	
private:

	FVector StartPos = FVector::ZeroVector;
	FVector TargetPos = FVector::ZeroVector;

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
	ATargetPoint* EndPos = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dummy Movement")
		float MovementSpeed = 1.0f;
};
