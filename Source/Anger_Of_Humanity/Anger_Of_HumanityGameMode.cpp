// Copyright Epic Games, Inc. All Rights Reserved.

#include "Anger_Of_HumanityGameMode.h"
#include "Anger_Of_HumanityPlayerController.h"
#include "Anger_Of_HumanityCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnger_Of_HumanityGameMode::AAnger_Of_HumanityGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAnger_Of_HumanityPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}