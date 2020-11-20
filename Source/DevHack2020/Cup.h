// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cup.generated.h"

class UStaticMeshComponent;

UCLASS()
class DEVHACK2020_API ACup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACup();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UStaticMeshComponent* cupMesh;


};
