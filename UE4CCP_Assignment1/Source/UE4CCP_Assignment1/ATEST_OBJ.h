// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interinterface.h"
#include "ATEST_OBJ.generated.h"

UCLASS()
class UE4CCP_ASSIGNMENT1_API AATEST_OBJ : public AActor, public IInterinterface
{
	GENERATED_BODY()

public:	

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* Mesh;
	
	// Sets default values for this actor's properties
	AATEST_OBJ();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void OnInteract(AActor* Caller);
	virtual void OnInteract_Implementation(AActor* Caller);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
