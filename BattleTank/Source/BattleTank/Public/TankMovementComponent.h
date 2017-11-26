// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "Engine/World.h"
#include "TankMovementComponent.generated.h"
/**
 * 
 */

class UTankTrack;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:
	UTankMovementComponent();

	//void SetTrackReference(UTankTrack* TrackToSet);

	void IntendMoveForward(float Throw);
	
private:
	UTankTrack* Track = nullptr;
};
