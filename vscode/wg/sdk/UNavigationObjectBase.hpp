#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationObjectBase // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UNavigationObjectBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1763); // id32("Class Engine.NavigationObjectBase")
		return ptr;
	}
	ExternalPtr<struct UCapsuleComponent> CapsuleComponent; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Engine.NavigationObjectBase.CapsuleComponent */
	ExternalPtr<struct UBillboardComponent> GoodSprite; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.NavigationObjectBase.GoodSprite */
	ExternalPtr<struct UBillboardComponent> BadSprite; /* Ofs: 0x420 Size: 0x8 - ObjectProperty Engine.NavigationObjectBase.BadSprite */
	uint8_t boolField428;
	uint8_t UnknownData429[0x7];


	inline bool SetCapsuleComponent(t_structHelper inst, ExternalPtr<struct UCapsuleComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetGoodSprite(t_structHelper inst, ExternalPtr<struct UBillboardComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetBadSprite(t_structHelper inst, ExternalPtr<struct UBillboardComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool bIsPIEPlayerStart()
	{
		return boolField428& 0x1;
	}
	inline bool SetbIsPIEPlayerStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x428, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationObjectBase = sizeof(UNavigationObjectBase); // 1072
    static_assert(sizeof(UNavigationObjectBase) == 0x430, "Size of UNavigationObjectBase is not correct.");
	auto constexpr UNavigationObjectBase_CapsuleComponent_Offset = offsetof(UNavigationObjectBase, CapsuleComponent);
	static_assert(UNavigationObjectBase_CapsuleComponent_Offset == 0x410, "UNavigationObjectBase::CapsuleComponent offset is not 410");
	auto constexpr UNavigationObjectBase_GoodSprite_Offset = offsetof(UNavigationObjectBase, GoodSprite);
	static_assert(UNavigationObjectBase_GoodSprite_Offset == 0x418, "UNavigationObjectBase::GoodSprite offset is not 418");
	auto constexpr UNavigationObjectBase_BadSprite_Offset = offsetof(UNavigationObjectBase, BadSprite);
	static_assert(UNavigationObjectBase_BadSprite_Offset == 0x420, "UNavigationObjectBase::BadSprite offset is not 420");
	auto constexpr UNavigationObjectBase_boolField428_Offset = offsetof(UNavigationObjectBase, boolField428);
	static_assert(UNavigationObjectBase_boolField428_Offset == 0x428, "UNavigationObjectBase::boolField428 offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
