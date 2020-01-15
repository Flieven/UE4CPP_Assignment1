// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RecoilComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API URecoilComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URecoilComponent();

	UFUNCTION(BlueprintCallable)
		void DoRecoil(AController* controller, TArray<FRotator> BarrelRecoils);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interpolation")
		float interpolationSpeed = 0.1f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interpolation")
		float interpolationTime = 0.1f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UFUNCTION()
	void InterpolateRotation(float dTime);
	UFUNCTION()
	void StopInterpolation();

	UPROPERTY()
	AController* controllerRef = nullptr;
	UPROPERTY()
	FRotator TotalRecoil = FRotator::ZeroRotator;
	UPROPERTY()
	bool activeInterpolation = false;

	FTimerHandle RecoilHandle;
};
