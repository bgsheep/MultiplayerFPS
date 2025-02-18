// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define ENUM_TO_INT32(Value) (int)Value
#define GET_CIRCULAR_ARRAY_INDEX(Index, Count) (Index % Count + Count) % Count


UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Pistol ,
	MachineGun ,
	Railgun ,
	MAX
};

UENUM(BlueprintType)
enum class EAmmoType : uint8
{
	PistolBullets,
	MachineGunBullets,
	Slugs,
	MAX
};

UENUM(BlueprintType)
enum class EWeaponFireMode : uint8
{
	Single,
	Automatic
};
