// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <Components/ActorComponent.h>
#include "UInventoryComponent.generated.h"

/**
 * Inventory component
 * Allows the attached actor to save a number of objects when interacting with them
 * Currently only used by the player character
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API UUInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Category = "Inventory")
		TArray<class AActor*> Inventory; /** The array of inventory slots used to store object references */

public:	
	// Sets default values for this component's properties
	UUInventoryComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool bHasEmptySlot(); /** Called to see if the inventory has an empty slot */
	void Add(class AActor* obj); /** Adds the passed object to the inventory at first available slot */
	void Remove(int slot); /** Removes object from a given slot (if any) */

	class AActor* GetFromSlot(int slot); /** Gets pointer to object stored in given slot (if any) */

	int Size(); /** Returns the size of the inventory */
	int Find(AActor* obj); /** Finds the index of a given object (if existing in the inventory) */

	void DebugInventory(); /** Prints debug lines to console to check inventory stats */

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
