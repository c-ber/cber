#pragma once
#include "USubActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemSlotContainer // Size: 0x440
	: public USubActor // Size: 0x410
{
private:
	typedef UItemSlotContainer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1840); // id32("Class TslGame.ItemSlotContainer")
		return ptr;
	}
	uint8_t UnknownData410[0x8];
	FScriptDelegate OnCreateAndShowContextMenuWidget; /* Ofs: 0x418 Size: 0x10 - DelegateProperty TslGame.ItemSlotContainer.OnCreateAndShowContextMenuWidget */
	FScriptDelegate OnDestroyContextMenuWidget; /* Ofs: 0x428 Size: 0x10 - DelegateProperty TslGame.ItemSlotContainer.OnDestroyContextMenuWidget */
	uint8_t UnknownData438[0x8];


	inline bool SetOnCreateAndShowContextMenuWidget(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x418, value); }
	inline bool SetOnDestroyContextMenuWidget(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemSlotContainer = sizeof(UItemSlotContainer); // 1088
    static_assert(sizeof(UItemSlotContainer) == 0x440, "Size of UItemSlotContainer is not correct.");
	auto constexpr UItemSlotContainer_OnCreateAndShowContextMenuWidget_Offset = offsetof(UItemSlotContainer, OnCreateAndShowContextMenuWidget);
	static_assert(UItemSlotContainer_OnCreateAndShowContextMenuWidget_Offset == 0x418, "UItemSlotContainer::OnCreateAndShowContextMenuWidget offset is not 418");
	auto constexpr UItemSlotContainer_OnDestroyContextMenuWidget_Offset = offsetof(UItemSlotContainer, OnDestroyContextMenuWidget);
	static_assert(UItemSlotContainer_OnDestroyContextMenuWidget_Offset == 0x428, "UItemSlotContainer::OnDestroyContextMenuWidget offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
