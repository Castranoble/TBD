// Copyright Epic Games, Inc. All Rights Reserved.

#include "TBD_PilotGameMode.h"
#include "TBD_PilotCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATBD_PilotGameMode::ATBD_PilotGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
