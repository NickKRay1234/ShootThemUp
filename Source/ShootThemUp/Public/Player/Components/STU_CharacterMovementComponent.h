// Shoot Them Up Game, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "STU_CharacterMovementComponent.generated.h"

UCLASS()
class SHOOTTHEMUP_API USTU_CharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "1.5", ClampMax = "10"))
	float RunModifier = 2.0f;
	
	virtual float GetMaxSpeed() const override;
};