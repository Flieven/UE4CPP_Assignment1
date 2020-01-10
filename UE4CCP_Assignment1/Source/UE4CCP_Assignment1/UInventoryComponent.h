// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UInventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API UUInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Category = Inventory)
		TArray<class AActor*> inventory;

public:	
	// Sets default values for this component's properties
	UUInventoryComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool hasEmptySlot();
	void add(class AActor* obj);
	void remove(int slot);

	class AActor* getFromSlot(int slot);

	int size();
	int find(AActor* obj);

	void debugInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
