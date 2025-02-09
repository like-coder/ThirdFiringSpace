#pragma once

#include "CoreMinimal.h"
#include "MyEnum.generated.h"

UENUM(BlueprintType)
enum class UsingGun : uint8
{
	None = 0,
	Pistol = 1,
	AK47,
};