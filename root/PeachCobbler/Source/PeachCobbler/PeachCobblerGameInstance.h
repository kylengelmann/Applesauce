// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PeachCobblerGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PEACHCOBBLER_API UPeachCobblerGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	/** Init AbilitySystemGlobals */
	virtual void Init() override;
protected:

	UFUNCTION(BlueprintCallable)
	void ClientTravel(APlayerController* PlayerController, FString URL);
	
	UFUNCTION(BlueprintCallable)
	void ServerTravel(FString URL);
};
