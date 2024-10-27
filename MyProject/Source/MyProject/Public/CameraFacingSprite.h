// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h" // for static sprites
#include "CameraFacingSprite.generated.h"

UCLASS()
class YOURPROJECTNAME_API ACameraFacingSprite : public AActor
{
    GENERATED_BODY()

public:
    ACameraFacingSprite();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Sprite component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite")
    UPaperSpriteComponent* SpriteComponent;
};