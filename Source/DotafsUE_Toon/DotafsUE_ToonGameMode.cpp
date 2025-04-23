// Copyright Epic Games, Inc. All Rights Reserved.

#include "DotafsUE_ToonGameMode.h"
#include "DotafsUE_ToonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADotafsUE_ToonGameMode::ADotafsUE_ToonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
