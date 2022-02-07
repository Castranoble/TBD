// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactions/Interactable.h"

// Sets default values
AInteractable::AInteractable()
{
	if (MovingObject == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,TEXT("Warning, Moving Object not set"));
	}
}
	
void AInteractable::OnInteract(AActor* Caller)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT("OnInteract Was called"));

	FVector NewLocation = Caller->GetActorLocation();

	NewLocation += FVector(0.f, 0.f, 5.f);
	Caller->SetActorLocation(NewLocation);
	Destroy();
}

void AInteractable::StartFocus()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, TEXT("Start Focus"));
}

void AInteractable::EndFocus()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, TEXT("Stop Focus"));
}

