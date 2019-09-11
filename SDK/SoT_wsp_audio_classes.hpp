#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_audio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_audio.wsp_audio_C
// 0x0030 (0x04E0 - 0x04B0)
class Awsp_audio_C : public ALevelScriptActor
{
public:
	float                                              PreviousFrameTime;                                        // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FWwiseEmitter                               WSP_Audio_2D_Emitter;                                     // 0x04B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     TimeInterface;                                            // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_audio.wsp_audio_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
