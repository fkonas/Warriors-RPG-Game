// Iwpag Company All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombotComponent.h"
#include "HeroCombotComponent.generated.h"

class AWarriorHeroWeapon;
/**
 * 
 */
UCLASS()
class WARRIOROFTHEWORLD_API UHeroCombotComponent : public UPawnCombotComponent
{
	GENERATED_BODY()

public:	
	UFUNCTION(BlueprintCallable, Category =	"Warrior|Combat")
	AWarriorHeroWeapon* GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const;

	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorHeroWeapon* GetHeroCurrentEquippedWeapon() const;

	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	float GetHeroCurrentEquippedWeaponDamageAtLevel(float InLevel) const;

	virtual void OnHitTargetActor(AActor* HitActor) override;
	virtual void OnWeaponPulledFromTargetActor(AActor* InteractedActor) override;

	
};
