// Copyright Kat Code Labs SRL. All Rights Reserved.


#include "TimeGameModeBase.h"

void ATimeGameModeBase::Tick(float deltaTime) {
	Super::Tick(deltaTime);

	seconds -= deltaTime;

	if (seconds < 0) {
		//TODO
	}
}
