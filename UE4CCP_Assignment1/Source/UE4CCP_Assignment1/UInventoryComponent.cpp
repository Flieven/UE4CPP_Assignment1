// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/Actor.h"
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
	for (int i = 0; i < inventory.Max()-1; i++)
	{
		if (inventory[i] == nullptr)
		{
			return true;
		}
	}
	return false;
}

void UUInventoryComponent::add(AActor* obj)
{
	bool added = false;

	for (int i = 0; i < inventory.Max()-1; i++)
	{
		if (inventory[i] == nullptr && !added)
		{
			inventory[i] = obj;
			added = true;
		}
	}
}

void UUInventoryComponent::remove(int slot)
{
	inventory[slot] = nullptr;
}

AActor* UUInventoryComponent::getFromSlot(int slot)
{
	return inventory[slot];
}

int UUInventoryComponent::size()
{
	return inventory.Max()-1;
}

int UUInventoryComponent::find(AActor* obj)
{
	return inventory.Find(obj);
}

void UUInventoryComponent::debugInventory()
{
	for (int i = 0; i < inventory.Num()-1; i++)
	{
		if (inventory[i] != nullptr) { UE_LOG(LogTemp, Display, TEXT("[DEBUG] slot: %d contains: %s"), i, *getFromSlot(i)->GetFName().ToString()); }
		else { UE_LOG(LogTemp, Display, TEXT("[DEBUG] slot: %d is empty"), i); }
	}
}

