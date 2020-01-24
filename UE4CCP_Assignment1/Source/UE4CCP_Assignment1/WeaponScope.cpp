// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponScope.h"
#include <Camera/CameraComponent.h>
#include "Weapon.h"
#include <Components/InputComponent.h>
#include "UE4CCP_Assignment1Character.h"

// Sets default values for this component's properties
UWeaponScope::UWeaponScope()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UWeaponScope::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UWeaponScope::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
void UWeaponScope::ZoomInput(class UInputComponent* InputZoom )
{
	InputZoom->BindAction("ZoomAim", IE_Pressed, this, &UWeaponScope::ScopeZoomShot);
}

void UWeaponScope::ScopeZoomShot()
{
	AUE4CCP_Assignment1Character AC;
	
		AC.GetFirstPersonCameraComponent()->SetFieldOfView(45.f);	
}

