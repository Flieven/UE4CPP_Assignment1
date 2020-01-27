// Fill out your copyright notice in the Description page of Project Settings.

#include "ZoomInComponent.h"
#include "UE4CCP_Assignment1Character.h"
#include <GameFramework/Actor.h>
#include <Components/ActorComponent.h>
#include <GameFramework/Controller.h>
#include <Camera/CameraComponent.h>
#include <Components/InputComponent.h>
#include <Engine/World.h>
#include <Math/UnrealMathUtility.h>

// Sets default values for this component's properties
UZoomInComponent::UZoomInComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UZoomInComponent::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = GetWorld()->GetFirstPlayerController();
}

// Called every frame

void UZoomInComponent::BeginZoom(AController* othercontroller)
{
	UE_LOG(LogTemp, Warning, TEXT("ZoomIn"));
	if(othercontroller->GetPawn() && Cast<AUE4CCP_Assignment1Character>(othercontroller->GetPawn()))
	{
		Player = Cast<AUE4CCP_Assignment1Character>(PlayerController->GetPawn());
		DefaultFOV = Player->GetFirstPersonCameraComponent()->FieldOfView;
		bIsZooming = true;
		
	}
}

void UZoomInComponent::EndZoom(AController* othercontroller)
{
	UE_LOG(LogTemp, Warning, TEXT("ZoomOut"));
	if (othercontroller->GetPawn() && Cast<AUE4CCP_Assignment1Character>(othercontroller->GetPawn()))
	{
		bIsZooming = false;
		Player = Cast<AUE4CCP_Assignment1Character>(PlayerController->GetPawn());
		Player->GetFirstPersonCameraComponent()->SetFieldOfView(DefaultFOV);
	}
}

void UZoomInComponent::MoveToZoom(float DeltaTime, float TargetFOV)
{
	UE_LOG(LogTemp, Warning, TEXT("Zooming"));
	Player->GetFirstPersonCameraComponent()->SetFieldOfView(FMath::FInterpTo(Player->GetFirstPersonCameraComponent()->FieldOfView, TargetFOV, DeltaTime, ZoomInterp));
}

void UZoomInComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsZooming && Player->GetFirstPersonCameraComponent()->FieldOfView != ZoomedFOV)
	{
		MoveToZoom(DeltaTime, ZoomedFOV);
	}
	
	
}
