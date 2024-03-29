#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_StandardHull_Art_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_StandardHull_Art.BP_SmallShip_StandardHull_Art_C
// 0x0098 (0x0540 - 0x04A8)
class ABP_SmallShip_StandardHull_Art_C : public AActor
{
public:
	class UStaticMeshComponent*                        cap_cage_03_c;                                            // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_item_shelf_01_a;                                      // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USurfaceWaterComponent*                      SurfaceWater;                                             // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_rain_occlusion;                                 // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_canopy_01_a1;                                   // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_hatch_01_a;                                     // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        cap_cabin_rug_02_a1;                                      // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess2;                                             // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Below_Deck;                                               // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess1;                                             // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Map_Deck_B;                                               // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Map_Deck;                                                 // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_hull_rope_01_a;                                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_curtain_01_a;                                   // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMergedStaticMeshComponent*                  MergedStaticMesh;                                         // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_SmallShip_StandardHull_Art_Interior_Lower_Deck;        // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_stairs_01_a;                                    // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_main_deck_01_a;                                 // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShip_StandardHull_Art.BP_SmallShip_StandardHull_Art_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
