// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DevHack2020GameModeBase.h"
#include "LimitedGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DEVHACK2020_API ALimitedGameModeBase : public ADevHack2020GameModeBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void modifyNoBalls(int value) {
		availableBalls += value;
	}

	void playerBonus() override {
		modifyNoBalls(1);
	}

	int getGameModeValue() override{
		return availableBalls;
	}

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int availableBalls = 12;

};
