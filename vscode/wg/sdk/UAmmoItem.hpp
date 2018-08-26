#pragma once
#include "UItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAmmoItem // Size: 0x1D8
	: public UItem // Size: 0x1C8
{
private:
	typedef UAmmoItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1901); // id32("Class TslGame.AmmoItem")
		return ptr;
	}
	ExternalPtr<struct UTexture> AmmoIcon; /* Ofs: 0x1C8 Size: 0x8 - ObjectProperty TslGame.AmmoItem.AmmoIcon */
	float AmmoIconRatio; /* Ofs: 0x1D0 Size: 0x4 - FloatProperty TslGame.AmmoItem.AmmoIconRatio */
	uint8_t UnknownData1D4[0x4];


	inline bool SetAmmoIcon(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetAmmoIconRatio(t_structHelper inst, float value) { inst.WriteOffset(0x1D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAmmoItem = sizeof(UAmmoItem); // 472
    static_assert(sizeof(UAmmoItem) == 0x1D8, "Size of UAmmoItem is not correct.");
	auto constexpr UAmmoItem_AmmoIcon_Offset = offsetof(UAmmoItem, AmmoIcon);
	static_assert(UAmmoItem_AmmoIcon_Offset == 0x1c8, "UAmmoItem::AmmoIcon offset is not 1c8");
	auto constexpr UAmmoItem_AmmoIconRatio_Offset = offsetof(UAmmoItem, AmmoIconRatio);
	static_assert(UAmmoItem_AmmoIconRatio_Offset == 0x1d0, "UAmmoItem::AmmoIconRatio offset is not 1d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
