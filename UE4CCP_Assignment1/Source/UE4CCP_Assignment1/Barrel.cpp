// Fill out your copyright notice in the Description page of Project Settings.

#include "Barrel.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "UE4CCP_Assignment1Character.h"


// Sets default values for this component's properties
UBarrel::UBarrel()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UBarrel::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBarrel::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBarrel::Fire(AController* controller)
{
}

//void UBarrel::GetEndPoint(AController* controller, float travelDist)
//{
//	if (Cast<APlayerController>(controller))
//	{
//		APlayerController* PlayerController = Cast<APlayerController>(controller);
//
//		if (PlayerController->GetPawn()->HasActiveCameraComponent())
//		{
//			Cast<AUE4CCP_Assignment1Character>(PlayerController->GetPawn())->GetFirstPersonCameraComponent();
//		}
//	}
//}

