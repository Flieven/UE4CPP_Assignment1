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

	// ... s
}


void URecoilComponent::DoRecoil(AController* controller, TArray<FRotator> BarrelRecoils)
{
	TotalRecoil = FRotator::ZeroRotator;

	if (!ControllerRef) { ControllerRef = controller; }

	for (int i = 0; i < BarrelRecoils.Num(); i++)
	{
		TotalRecoil.Roll += FMath::FRandRange((FMath::Abs(BarrelRecoils[i].Roll) * -1), BarrelRecoils[i].Roll);
		TotalRecoil.Pitch += FMath::FRandRange((FMath::Abs(BarrelRecoils[i].Pitch) * -1), BarrelRecoils[i].Pitch);
		TotalRecoil.Yaw += FMath::FRandRange((FMath::Abs(BarrelRecoils[i].Yaw) * -1), BarrelRecoils[i].Yaw);
	}
		//UE_LOG(LogTemp, Warning, TEXT("Random Rot: %f"), RandRot.Roll);

	TotalRecoil += ControllerRef->GetControlRotation();
	GetOwner()->GetWorldTimerManager().SetTimer(RecoilHandle, this, &URecoilComponent::StopInterpolation, InterpolationTime, false);
	bActiveInterpolation = true;
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
	if(bActiveInterpolation) { InterpolateRotation(DeltaTime); }
	// ...
}

void URecoilComponent::InterpolateRotation(float dTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Running Interpolation: %f"), GetOwner()->GetWorldTimerManager().GetTimerRemaining(RecoilHandle));
	if(!ControllerRef->GetControlRotation().Equals(TotalRecoil, 1.0f))
	{
		ControllerRef->SetControlRotation(FMath::RInterpTo(ControllerRef->GetControlRotation(), TotalRecoil, dTime, InterpolationSpeed));
	}
	else { bActiveInterpolation = false; }
}

void URecoilComponent::StopInterpolation()
{
	//UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Stopping interpolation!"));
	bActiveInterpolation = false;
	GetOwner()->GetWorldTimerManager().ClearTimer(RecoilHandle);
}

