#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ClothingChestInteraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ClothingChestInteraction.BP_ClothingChestInteraction_C
// 0x0008 (0x0768 - 0x0760)
class ABP_ClothingChestInteraction_C : public AClothingChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ClothingChestInteraction.BP_ClothingChestInteraction_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
