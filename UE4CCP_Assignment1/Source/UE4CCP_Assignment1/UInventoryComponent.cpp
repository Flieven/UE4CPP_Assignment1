// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/Actor.h"
#include "UInventoryComponent.h"

// Sets default values for this component's properties
UUInventoryComponent::UUInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Inventory.SetNum(4);

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

bool UUInventoryComponent::bHasEmptySlot()
{
	for (int i = 0; i < Inventory.Max()-1; i++)
	{
		if (Inventory[i] == nullptr)
		{
			return true;
		}
	}
	return false;
}

void UUInventoryComponent::Add(AActor* obj)
{
	bool added = false;

	for (int i = 0; i < Inventory.Max()-1; i++)
	{
		if (Inventory[i] == nullptr && !added)
		{
			Inventory[i] = obj;
			added = true;
		}
	}
}

void UUInventoryComponent::Remove(int slot)
{
	Inventory[slot] = nullptr;
}

AActor* UUInventoryComponent::GetFromSlot(int slot)
{
	return Inventory[slot];
}

int UUInventoryComponent::Size()
{
	return Inventory.Max()-1;
}

int UUInventoryComponent::Find(AActor* obj)
{
	return Inventory.Find(obj);
}

void UUInventoryComponent::DebugInventory()
{
	for (int i = 0; i < Inventory.Num()-1; i++)
	{
		if (Inventory[i] != nullptr) { UE_LOG(LogTemp, Display, TEXT("[DEBUG] slot: %d contains: %s"), i, *GetFromSlot(i)->GetFName().ToString()); }
		else { UE_LOG(LogTemp, Display, TEXT("[DEBUG] slot: %d is empty"), i); }
	}
}

