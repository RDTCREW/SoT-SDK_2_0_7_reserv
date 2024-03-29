#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Seagull01_8POI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Seagull01_8POI.BP_Seagull01_8POI_C
// 0x0050 (0x04F8 - 0x04A8)
class ABP_Seagull01_8POI_C : public ASeagulls
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEmitterComponent*                      WwiseEmitter1;                                            // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wil_seagull_01_ProcAnim8;                                 // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          seagulls_MI;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    seagulls_MT;                                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          seagulls_MI_LOD;                                          // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    seagulls_MT_LOD;                                          // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Seagull01_8POI.BP_Seagull01_8POI_C"));
		return ptr;
	}


	void seagull_Fade(class UMaterialInstance* Seagull_Material, class UMaterialInstance* Seagull_MT_LOD);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FadeIn();
	void FadeOut();
	void ExecuteUbergraph_BP_Seagull01_8POI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
