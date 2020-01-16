// Fill out your copyright notice in the Description page of Project Settings.


#include "ATEST_OBJ.h"
#include "UE4CCP_Assignment1Character.h"
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

void AATEST_OBJ::OnInteract_Implementation(AActor* Caller)
{
	AUE4CCP_Assignment1Character* owner = Cast<AUE4CCP_Assignment1Character>(Caller);

	Mesh->SetAllBodiesSimulatePhysics(false);
	AttachToComponent(owner->Mesh1P, FAttachmentTransformRules::SnapToTargetIncludingScale, "GripPoint");
	SetActorLocation(owner->Mesh1P->GetSocketLocation("GripPoint"), false, 0, ETeleportType::TeleportPhysics);

	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);

	if (owner->EquippedObject == nullptr) { owner->UpdateEquippedWeapon(this); }
}

