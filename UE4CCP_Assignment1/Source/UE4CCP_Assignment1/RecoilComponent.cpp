// Fill out your copyright notice in the Description page of Project Settings.


#include "RecoilComponent.h"
#include "GameFramework/Controller.h"
#include "Math/UnrealMathUtility.h"
#include "Math/Rotator.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
URecoilComponent::URecoilComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void URecoilComponent::DoRecoil(AController* controller, TArray<FRotator> BarrelRecoils)
{
	TotalRecoil = FRotator::ZeroRotator;
	if (!controllerRef) { controllerRef = controller; }

	for (int i = 0; i < BarrelRecoils.Num(); i++)
	{
		TotalRecoil += BarrelRecoils[i];
	}

	TotalRecoil += controllerRef->GetControlRotation();
	GetOwner()->GetWorldTimerManager().SetTimer(RecoilHandle, this, &URecoilComponent::StopInterpolation, interpolationTime, false);
	activeInterpolation = true;
}

// Called when the game starts
void URecoilComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URecoilComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(activeInterpolation) { InterpolateRotation(DeltaTime); }
	// ...
}

void URecoilComponent::InterpolateRotation(float dTime)
{
	UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Running Interpolation: %f"), GetOwner()->GetWorldTimerManager().GetTimerRemaining(RecoilHandle));
	if(!controllerRef->GetControlRotation().Equals(TotalRecoil, 1.0f))
	{
		controllerRef->SetControlRotation(FMath::RInterpTo(controllerRef->GetControlRotation(), TotalRecoil, dTime, interpolationSpeed));
	}
	else { activeInterpolation = false; }
}

void URecoilComponent::StopInterpolation()
{
	UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Stopping interpolation!"));
	activeInterpolation = false;
	GetOwner()->GetWorldTimerManager().ClearTimer(RecoilHandle);
}

