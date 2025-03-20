// Iwpag Company All Rights Reserved


#include "Components/Combat/EnemyCombotComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "WarriorGameplayTags.h"

#include "WarriorDebugHelper.h"

void UEnemyCombotComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor))
	{
		return;
	}

	OverlappedActors.AddUnique(HitActor);

	// TODO:: Implement block check

	bool bIsValidBlock = false;

	const bool bIsPlayerBlocking = false;
	const bool bIsMyAttackUbblockable = false;

	if (bIsPlayerBlocking && !bIsMyAttackUbblockable)
	{
		//TODO:: check if the block is valid
	}

	FGameplayEventData EventData;
	EventData.Instigator = GetOwningPawn();
	EventData.Target = HitActor;

	if (bIsValidBlock)
	{
		//TODO:: Handle successful block
	}
	else
	{
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			GetOwningPawn(), 
			WarriorGameplayTags::Shared_Event_MeleeHit, 
			EventData
		);
	}


}
