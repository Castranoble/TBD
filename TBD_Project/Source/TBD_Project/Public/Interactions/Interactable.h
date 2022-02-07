// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractionInterface.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class TBD_PROJECT_API AInteractable : public AActor
{
	GENERATED_BODY()
	
public:	
	AInteractable();

	UFUNCTION(BlueprintCallable, Category = "Interactions")
	void OnInteract(AActor* Caller);
	UFUNCTION(BlueprintCallable, Category = "Interactions")
	void StartFocus();
	UFUNCTION(BlueprintCallable, Category = "Interactions")
	void EndFocus();

	UPROPERTY(EditAnywhere)
	AActor* MovingObject;
};
