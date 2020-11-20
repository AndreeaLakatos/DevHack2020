// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DevHack2020GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DEVHACK2020_API ADevHack2020GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		
public:

	virtual void playerBonus() {}

	void incrementScore(int newScore) {
		score += newScore;
		playerBonus();
	}

private:
	int score = 0;
	
};
