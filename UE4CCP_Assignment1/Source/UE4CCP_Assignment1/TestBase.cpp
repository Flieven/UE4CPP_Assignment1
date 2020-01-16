// Fill out your copyright notice in the Description page of Project Settings.


#include "TestBase.h"
#include <Components/ActorComponent.h>
#include <DrawDebugHelpers.h>
#include <CollisionQueryParams.h>
#include <Logging/LogMacros.h>
#include <Engine/Engine.h>
#include "UE4CCP_Assignment1Character.h"
#include "ATEST_OBJ.h"

// Sets default values for this component's properties
UTestBase::UTestBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UTestBase::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	
}

// Called every frame
void UTestBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	LineTrace();
	// ...
}

void UTestBase::LineTrace_Implementation()
{
	
	FVector PlayerViewPointLoc;
	FRotator PlayerViewPointRot;
	FHitResult Hit;
	TraceDistance = 2000;
	FVector ForwardTrace = GetOwner()->GetActorForwardVector();
	//GetOwner()->GetActorEyesViewPoint(OUT PlayerViewPointLoc, OUT PlayerViewPointRot);
	//GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLoc, OUT PlayerViewPointRot);
	
	FVector LineEnd = PlayerViewPointLoc + PlayerViewPointRot.Vector() * TraceDistance;

	FCollisionQueryParams QueryParams;

	GetWorld()->LineTraceSingleByChannel(OUT Hit,ForwardTrace, LineEnd, ECC_Visibility, QueryParams);
	DrawDebugLine(GetWorld(), ForwardTrace, LineEnd, FColor::Blue, false, 1.f, 10, 10.f);

	AActor* Hitresult = Hit.GetActor();

	if (Hitresult)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s was hit"), *(Hitresult->GetName()));
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("%s was hit"), (*Hitresult->GetName())));
	}
}

