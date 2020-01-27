// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//#include "UE4CCP_Assignment1Character.h"
#include <GameFramework/PlayerController.h>
#include "ZoomInComponent.generated.h"

class AUE4CCP_Assignment1Character;
class UInputComponent;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API UZoomInComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UZoomInComponent();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	AUE4CCP_Assignment1Character* Player;
	APlayerController* PlayerController;
	UFUNCTION(BlueprintCallable)
	void BeginZoom(AController* othercontroller);
	UFUNCTION(BlueprintCallable)
	void EndZoom(AController* othercontroller);

	UPROPERTY(EditAnywhere, Category = "Zoom")
	float ZoomedFOV;
	float DefaultFOV;
	

	/**Track time between zoomfov and defaultfov*/
	UPROPERTY(EditAnywhere, Category = "Zoom", meta = (ClampMin = 0.1, ClampMax = 100))
	float ZoomInterp = 1.0f;

	void MoveToZoom(float DeltaTime, float TargetFOV);
	bool bIsZooming = false;
};


