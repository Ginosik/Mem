// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Carta.generated.h"

UCLASS()
class MOBMEMO_API ACarta : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACarta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
