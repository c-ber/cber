#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDeployedItem // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UDeployedItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1836); // id32("Class TslGame.DeployedItem")
		return ptr;
	}
//	ExternalPtr<struct UClass> ItemType; /* Ofs: 0x408 Size: 0x8 - ClassProperty TslGame.DeployedItem.ItemType */
	int32_t StackCount; /* Ofs: 0x410 Size: 0x4 - IntProperty TslGame.DeployedItem.StackCount */
	uint8_t UnknownData414[0x4];
	ExternalPtr<struct USceneComponent> SceneComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.DeployedItem.SceneComponent */


//	inline bool SetItemType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x408, value); }
	inline bool SetStackCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x410, value); }
	inline bool SetSceneComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDeployedItem = sizeof(UDeployedItem); // 1056
    static_assert(sizeof(UDeployedItem) == 0x420, "Size of UDeployedItem is not correct.");
//	auto constexpr UDeployedItem_ItemType_Offset = offsetof(UDeployedItem, ItemType);
//	static_assert(UDeployedItem_ItemType_Offset == 0x408, "UDeployedItem::ItemType offset is not 408");
	auto constexpr UDeployedItem_StackCount_Offset = offsetof(UDeployedItem, StackCount);
	static_assert(UDeployedItem_StackCount_Offset == 0x410, "UDeployedItem::StackCount offset is not 410");
	auto constexpr UDeployedItem_SceneComponent_Offset = offsetof(UDeployedItem, SceneComponent);
	static_assert(UDeployedItem_SceneComponent_Offset == 0x418, "UDeployedItem::SceneComponent offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
