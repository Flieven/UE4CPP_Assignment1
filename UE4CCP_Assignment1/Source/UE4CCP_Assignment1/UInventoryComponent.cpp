// Fill out your copyright notice in the Description page of Project Settings.


#include "UInventoryComponent.h"

// Sets default values for this component's properties
UUInventoryComponent::UUInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	inventory.SetNum(4);

	// ...
}


// Called when the game starts
void UUInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UUInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UUInventoryComponent::hasEmptySlot()
{
	for (int i = 0; i < inventory.Max(); i++)
	{
		if (inventory[i] == NULL)
		{
			UE_LOG(LogTemp, Display, TEXT("Empty Slot found!"));
			return true;
		}
	}
	return false;
}

void UUInventoryComponent::add(UObject* obj)
{
	for (int i = 0; i < inventory.Max(); i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = obj;
		}
	}
}

UObject* UUInventoryComponent::getFromSlot(int slot)
{
	return inventory[slot];
}

