// Copyright Epic Games, Inc. All Rights Reserved.

#include "capstone_test_01GameMode.h"
#include "capstone_test_01Character.h"
#include "UObject/ConstructorHelpers.h"

Acapstone_test_01GameMode::Acapstone_test_01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
