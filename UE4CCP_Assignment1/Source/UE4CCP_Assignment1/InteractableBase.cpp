// Fill out your copyright notice in the Description page of Project Settings.
#include "InteractableBase.h"
#include "CoreMinimal.h"
#include "Engine.h"


// Sets default values
AInteractableBase::AInteractableBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractableBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractableBase::OnInteract_Implementation(AActor* Caller)
{
	Destroy();
}

void AInteractableBase::StartFocus_Implementation() //use to trigger a interactable event in blueprint
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, TEXT("Start Focus"));
}

void AInteractableBase::EndFocus_Implementation() 
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("End Focus"));
}



