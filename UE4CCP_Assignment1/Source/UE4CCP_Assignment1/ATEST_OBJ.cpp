// Fill out your copyright notice in the Description page of Project Settings.


#include "ATEST_OBJ.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AATEST_OBJ::AATEST_OBJ()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ObjectMesh"));
	Mesh->bCastDynamicShadow = false;
	Mesh->CastShadow = false;
	Mesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void AATEST_OBJ::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AATEST_OBJ::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

