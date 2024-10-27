// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cam_Player.generated.h"

UCLASS()
class MYPROJECT_API ACam_Player : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACam_Player();

	UFUNCTION(BlueprintPure, Category = "Pickup");
	bool IsPickupActive() const ; // test boolean

	UFUNCTION(BlueprintCallable, Category = "Pickup");
	void SetPickupActive(bool NewActiveState);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bIsActive;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
