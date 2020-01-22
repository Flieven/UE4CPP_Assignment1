// Fill out your copyright notice in the Description page of Project Settings.


#include "LinetraceBarrel.h"
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"

#include "Math/UnrealMathUtility.h"

#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"

#include "Camera/CameraComponent.h"

#include "UE4CCP_Assignment1Character.h"

FVector ULinetraceBarrel::GetEndPoint(AController* controller, float travelDist)
{
	if (Cast<APlayerController>(controller))
	{
		APlayerController* PlayerController = Cast<APlayerController>(controller);

		if (PlayerController->GetPawn()->HasActiveCameraComponent())
		{
			FVector Start;
			FVector End;
			FRotator Rot;

			PlayerController->GetPlayerViewPoint(Start, Rot);

			End = Start + (Rot.Vector() * travelDist);
			return End;
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("No Controller Found, returning Zero!"));
	return FVector::ZeroVector;
}

void ULinetraceBarrel::Fire(UPARAM(ref) AController* controller, TArray<FHitResult>& Hits, bool& bHitResult)
{
	FCollisionQueryParams CollisionParams;

	FVector SourcePoint = GetComponentTransform().GetLocation();

	FVector TargetPoint = GetEndPoint(controller, 500.0f);

	DrawDebugLine(GetWorld(), SourcePoint, TargetPoint, FColor::Green, true);
	FHitResult Hit;

	if (GetWorld()->LineTraceSingleByChannel(Hit, SourcePoint, TargetPoint, ECC_Visibility, CollisionParams)) {
		
		Hits.Add(Hit);
		
		bHitResult = true;
	}
	else {
		bHitResult = false;
	}
}
