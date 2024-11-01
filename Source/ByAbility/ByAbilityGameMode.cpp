// Copyright Epic Games, Inc. All Rights Reserved.

#include "ByAbilityGameMode.h"
#include "ByAbilityCharacter.h"
#include "UObject/ConstructorHelpers.h"

AByAbilityGameMode::AByAbilityGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
