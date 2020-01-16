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
	UPROPERTY(VisibleAnywhere, Category = "Inventory")
		TArray<class AActor*> Inventory;

public:	
	// Sets default values for this component's properties
	UUInventoryComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool bHasEmptySlot();
	void Add(class AActor* obj);
	void Remove(int slot);

	class AActor* GetFromSlot(int slot);

	int Size();
	int Find(AActor* obj);

	void DebugInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
