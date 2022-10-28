// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeeleCombatGameMode.h"
#include "MeeleCombatCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMeeleCombatGameMode::AMeeleCombatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/CombatSystem/Blueprints/BP_CombatCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
