#pragma once
#include "FWidgetNavigationData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidgetNavigation // Size: 0xC0
	: public UObject // Size: 0x30
{
private:
	typedef UWidgetNavigation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(533); // id32("Class UMG.WidgetNavigation")
		return ptr;
	}
	FWidgetNavigationData Up; /* Ofs: 0x30 Size: 0x18 - StructProperty UMG.WidgetNavigation.Up */
	FWidgetNavigationData Down; /* Ofs: 0x48 Size: 0x18 - StructProperty UMG.WidgetNavigation.Down */
	FWidgetNavigationData Left; /* Ofs: 0x60 Size: 0x18 - StructProperty UMG.WidgetNavigation.Left */
	FWidgetNavigationData Right; /* Ofs: 0x78 Size: 0x18 - StructProperty UMG.WidgetNavigation.Right */
	FWidgetNavigationData Next; /* Ofs: 0x90 Size: 0x18 - StructProperty UMG.WidgetNavigation.Next */
	FWidgetNavigationData Previous; /* Ofs: 0xA8 Size: 0x18 - StructProperty UMG.WidgetNavigation.Previous */


	inline bool SetUp(t_structHelper inst, FWidgetNavigationData value) { inst.WriteOffset(0x30, value); }
	inline bool SetDown(t_structHelper inst, FWidgetNavigationData value) { inst.WriteOffset(0x48, value); }
	inline bool SetLeft(t_structHelper inst, FWidgetNavigationData value) { inst.WriteOffset(0x60, value); }
	inline bool SetRight(t_structHelper inst, FWidgetNavigationData value) { inst.WriteOffset(0x78, value); }
	inline bool SetNext(t_structHelper inst, FWidgetNavigationData value) { inst.WriteOffset(0x90, value); }
	inline bool SetPrevious(t_structHelper inst, FWidgetNavigationData value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidgetNavigation = sizeof(UWidgetNavigation); // 192
    static_assert(sizeof(UWidgetNavigation) == 0xC0, "Size of UWidgetNavigation is not correct.");
	auto constexpr UWidgetNavigation_Up_Offset = offsetof(UWidgetNavigation, Up);
	static_assert(UWidgetNavigation_Up_Offset == 0x30, "UWidgetNavigation::Up offset is not 30");
	auto constexpr UWidgetNavigation_Down_Offset = offsetof(UWidgetNavigation, Down);
	static_assert(UWidgetNavigation_Down_Offset == 0x48, "UWidgetNavigation::Down offset is not 48");
	auto constexpr UWidgetNavigation_Left_Offset = offsetof(UWidgetNavigation, Left);
	static_assert(UWidgetNavigation_Left_Offset == 0x60, "UWidgetNavigation::Left offset is not 60");
	auto constexpr UWidgetNavigation_Right_Offset = offsetof(UWidgetNavigation, Right);
	static_assert(UWidgetNavigation_Right_Offset == 0x78, "UWidgetNavigation::Right offset is not 78");
	auto constexpr UWidgetNavigation_Next_Offset = offsetof(UWidgetNavigation, Next);
	static_assert(UWidgetNavigation_Next_Offset == 0x90, "UWidgetNavigation::Next offset is not 90");
	auto constexpr UWidgetNavigation_Previous_Offset = offsetof(UWidgetNavigation, Previous);
	static_assert(UWidgetNavigation_Previous_Offset == 0xa8, "UWidgetNavigation::Previous offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
