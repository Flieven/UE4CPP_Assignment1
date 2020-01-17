// Fill out your copyright notice in the Description page of Project Settings.

#include "TargetDummy.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ATargetDummy::ATargetDummy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATargetDummy::MoveToTarget(float dTime)
{
	SetActorLocation(FMath::VInterpTo(GetActorLocation(), TargetPos, dTime, MovementSpeed));
}

// Called when the game starts or when spawned
void ATargetDummy::BeginPlay()
{
	Super::BeginPlay();
	
	StartPos = GetActorLocation();
	if (EndPos) { TargetPos = EndPos->GetActorLocation(); }
}

// Called every frame
void ATargetDummy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (EndPos)
	{
		if (GetActorLocation().Equals(TargetPos, 1.0f))
		{
			if (TargetPos == EndPos->GetActorLocation()) { TargetPos = StartPos; }
			else { TargetPos = EndPos->GetActorLocation(); }
		}
		else { MoveToTarget(DeltaTime); }
	}

}

