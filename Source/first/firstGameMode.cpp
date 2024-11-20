// Copyright Epic Games, Inc. All Rights Reserved.

#include "firstGameMode.h"
#include "firstCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfirstGameMode::AfirstGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
