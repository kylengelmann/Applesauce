// Fill out your copyright notice in the Description page of Project Settings.


#include "PeachCobblerGameInstance.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

void UPeachCobblerGameInstance::ClientTravel(APlayerController* PlayerController, FString URL)
{
	PlayerController->ClientTravel(URL, ETravelType::TRAVEL_Absolute);
}

void UPeachCobblerGameInstance::ServerTravel(FString URL)
{
	if (UWorld* World = GetWorld())
	{
		World->ServerTravel(URL, false, false);
	}
}