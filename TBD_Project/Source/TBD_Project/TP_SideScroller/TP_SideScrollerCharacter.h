// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TP_SideScrollerCharacter.generated.h"

UCLASS(config=Game)
class ATP_SideScrollerCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:

	// --- Functions --- \\
	
	void MoveRight(float Val);
	void MoveUp(float Val);
	void InteractWithObject();

	UFUNCTION(BlueprintNativeEvent)
	void TraceForward();
	void TraceForward_Implementation();

	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);
	
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	// --- Fields --- \\

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interactions")
	float TraceDistance;

public:
	ATP_SideScrollerCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
