#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_fod_GrubsFresh_00_a_ItemProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_fod_GrubsFresh_00_a_ItemProxy.BP_fod_GrubsFresh_00_a_ItemProxy_C
// 0x0000 (0x0830 - 0x0830)
class ABP_fod_GrubsFresh_00_a_ItemProxy_C : public ABP_Bait_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_fod_GrubsFresh_00_a_ItemProxy.BP_fod_GrubsFresh_00_a_ItemProxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
