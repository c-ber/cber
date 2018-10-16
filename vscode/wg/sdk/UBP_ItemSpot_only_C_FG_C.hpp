#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_ItemSpot_only_C_FG_C // Size: 0x428
	: public UActor // Size: 0x410
{
private:
	typedef UBP_ItemSpot_only_C_FG_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(150543); // id32("BlueprintGeneratedClass BP_ItemSpot_only_C_FG.BP_ItemSpot_only_C_FG_C")
		return ptr;
	}
	ExternalPtr<struct UItemSpotComponent> ItemSpot; /* Ofs: 0x410 Size: 0x8 - ObjectProperty BP_ItemSpot_only_C_FG.BP_ItemSpot_only_C_FG_C.ItemSpot */
	ExternalPtr<struct UItemSpotGroupComponent> ItemSpotGroup; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_ItemSpot_only_C_FG.BP_ItemSpot_only_C_FG_C.ItemSpotGroup */
	ExternalPtr<struct USceneComponent> SharedRoot; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_ItemSpot_only_C_FG.BP_ItemSpot_only_C_FG_C.SharedRoot */


	inline bool SetItemSpot(t_structHelper inst, ExternalPtr<struct UItemSpotComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetItemSpotGroup(t_structHelper inst, ExternalPtr<struct UItemSpotGroupComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetSharedRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_ItemSpot_only_C_FG_C = sizeof(UBP_ItemSpot_only_C_FG_C); // 1064
    static_assert(sizeof(UBP_ItemSpot_only_C_FG_C) == 0x428, "Size of UBP_ItemSpot_only_C_FG_C is not correct.");
	auto constexpr UBP_ItemSpot_only_C_FG_C_ItemSpot_Offset = offsetof(UBP_ItemSpot_only_C_FG_C, ItemSpot);
	static_assert(UBP_ItemSpot_only_C_FG_C_ItemSpot_Offset == 0x410, "UBP_ItemSpot_only_C_FG_C::ItemSpot offset is not 410");
	auto constexpr UBP_ItemSpot_only_C_FG_C_ItemSpotGroup_Offset = offsetof(UBP_ItemSpot_only_C_FG_C, ItemSpotGroup);
	static_assert(UBP_ItemSpot_only_C_FG_C_ItemSpotGroup_Offset == 0x418, "UBP_ItemSpot_only_C_FG_C::ItemSpotGroup offset is not 418");
	auto constexpr UBP_ItemSpot_only_C_FG_C_SharedRoot_Offset = offsetof(UBP_ItemSpot_only_C_FG_C, SharedRoot);
	static_assert(UBP_ItemSpot_only_C_FG_C_SharedRoot_Offset == 0x420, "UBP_ItemSpot_only_C_FG_C::SharedRoot offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
