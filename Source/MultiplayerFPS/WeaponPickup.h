// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "MultiplayerFPS.h"
#include "WeaponPickup.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERFPS_API AWeaponPickup : public APickup
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon Pickup")
	EWeaponType WeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon Pickup")
	int32 AmmoAmount;

	virtual void OnPickedUp(class AFPSCharacter* Character) override;
};
