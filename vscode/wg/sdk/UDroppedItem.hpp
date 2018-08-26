#pragma once
#include "UActor.hpp"
#include "FSkinParam.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDroppedItem // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UDroppedItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1853); // id32("Class TslGame.DroppedItem")
		return ptr;
	}
	EncryptedExternalPtr<struct UItem> Item; /* Ofs: 0x410 Size: 0x10 - EncryptedObjectProperty TslGame.DroppedItem.Item */
	FSkinParam SkinParam; /* Ofs: 0x420 Size: 0x10 - StructProperty TslGame.DroppedItem.SkinParam */


	inline bool SetItem(t_structHelper inst, EncryptedExternalPtr<struct UItem> value) { inst.WriteOffset(0x410, value); }
	inline bool SetSkinParam(t_structHelper inst, FSkinParam value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDroppedItem = sizeof(UDroppedItem); // 1072
    static_assert(sizeof(UDroppedItem) == 0x430, "Size of UDroppedItem is not correct.");
	auto constexpr UDroppedItem_Item_Offset = offsetof(UDroppedItem, Item);
	static_assert(UDroppedItem_Item_Offset == 0x410, "UDroppedItem::Item offset is not 410");
	auto constexpr UDroppedItem_SkinParam_Offset = offsetof(UDroppedItem, SkinParam);
	static_assert(UDroppedItem_SkinParam_Offset == 0x420, "UDroppedItem::SkinParam offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
