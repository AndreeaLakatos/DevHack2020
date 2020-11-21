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

	UFUNCTION(BlueprintCallable)
	virtual void playerBonus() {}

	void incrementScore(int newScore) {
		score += newScore;
		playerBonus();
	}

	UFUNCTION(BlueprintCallable)
	int getScore() {
		return score;
	}

	UFUNCTION(BlueprintCallable)
	virtual int getGameModeValue() { return 0; };

private:
	int score = 0;
	
};
