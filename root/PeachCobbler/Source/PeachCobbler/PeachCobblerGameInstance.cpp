// Fill out your copyright notice in the Description page of Project Settings.


#include "PeachCobblerGameInstance.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "AbilitySystemGlobals.h"

void UPeachCobblerGameInstance::Init()
{
	Super::Init();

	UAbilitySystemGlobals& AbilitySystemGlobals = UAbilitySystemGlobals::Get();
	if (!AbilitySystemGlobals.IsAbilitySystemGlobalsInitialized())
	{
		AbilitySystemGlobals.InitGlobalData();
	}
}

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