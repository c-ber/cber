#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDroppedItemGridManager // Size: 0x4C0
	: public UInfo // Size: 0x410
{
private:
	typedef UDroppedItemGridManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1854); // id32("Class TslGame.DroppedItemGridManager")
		return ptr;
	}
//	float MaxGridSize; /* Ofs: 0x408 Size: 0x4 - FloatProperty TslGame.DroppedItemGridManager.MaxGridSize */
//	int32_t MaxGridLayerNum; /* Ofs: 0x40C Size: 0x4 - IntProperty TslGame.DroppedItemGridManager.MaxGridLayerNum */
	int32_t MaxItemNumPerGroup; /* Ofs: 0x410 Size: 0x4 - IntProperty TslGame.DroppedItemGridManager.MaxItemNumPerGroup */
	uint8_t UnknownData414[0xAC];


//	inline bool SetMaxGridSize(t_structHelper inst, float value) { inst.WriteOffset(0x408, value); }
//	inline bool SetMaxGridLayerNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40C, value); }
	inline bool SetMaxItemNumPerGroup(t_structHelper inst, int32_t value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDroppedItemGridManager = sizeof(UDroppedItemGridManager); // 1216
    static_assert(sizeof(UDroppedItemGridManager) == 0x4C0, "Size of UDroppedItemGridManager is not correct.");
//	auto constexpr UDroppedItemGridManager_MaxGridSize_Offset = offsetof(UDroppedItemGridManager, MaxGridSize);
//	static_assert(UDroppedItemGridManager_MaxGridSize_Offset == 0x408, "UDroppedItemGridManager::MaxGridSize offset is not 408");
//	auto constexpr UDroppedItemGridManager_MaxGridLayerNum_Offset = offsetof(UDroppedItemGridManager, MaxGridLayerNum);
//	static_assert(UDroppedItemGridManager_MaxGridLayerNum_Offset == 0x40c, "UDroppedItemGridManager::MaxGridLayerNum offset is not 40c");
	auto constexpr UDroppedItemGridManager_MaxItemNumPerGroup_Offset = offsetof(UDroppedItemGridManager, MaxItemNumPerGroup);
	static_assert(UDroppedItemGridManager_MaxItemNumPerGroup_Offset == 0x410, "UDroppedItemGridManager::MaxItemNumPerGroup offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
