#pragma once
#include "UKillCountBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKillCountWidget_C // Size: 0x388
	: public UKillCountBaseWidget // Size: 0x350
{
private:
	typedef UKillCountWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187594); // id32("WidgetBlueprintGeneratedClass KillCountWidget.KillCountWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> Test; /* Ofs: 0x350 Size: 0x8 - ObjectProperty KillCountWidget.KillCountWidget_C.Test */
	ExternalPtr<struct UWidgetAnimation> KillCountVanishing; /* Ofs: 0x358 Size: 0x8 - ObjectProperty KillCountWidget.KillCountWidget_C.KillCountVanishing */
	ExternalPtr<struct UWidgetAnimation> KillCountEmerging; /* Ofs: 0x360 Size: 0x8 - ObjectProperty KillCountWidget.KillCountWidget_C.KillCountEmerging */
	ExternalPtr<struct UWidgetAnimation> Warning; /* Ofs: 0x368 Size: 0x8 - ObjectProperty KillCountWidget.KillCountWidget_C.Warning */
	ExternalPtr<struct UWidgetAnimation> Increasing; /* Ofs: 0x370 Size: 0x8 - ObjectProperty KillCountWidget.KillCountWidget_C.Increasing */
	ExternalPtr<struct UWidgetAnimation> Decreasing; /* Ofs: 0x378 Size: 0x8 - ObjectProperty KillCountWidget.KillCountWidget_C.Decreasing */
	ExternalPtr<struct UWidgetAnimation> Default; /* Ofs: 0x380 Size: 0x8 - ObjectProperty KillCountWidget.KillCountWidget_C.Default */


	inline bool SetTest(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x350, value); }
	inline bool SetKillCountVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x358, value); }
	inline bool SetKillCountEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x360, value); }
	inline bool SetWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x368, value); }
	inline bool SetIncreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x370, value); }
	inline bool SetDecreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x378, value); }
	inline bool SetDefault(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x380, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKillCountWidget_C = sizeof(UKillCountWidget_C); // 904
    static_assert(sizeof(UKillCountWidget_C) == 0x388, "Size of UKillCountWidget_C is not correct.");
	auto constexpr UKillCountWidget_C_Test_Offset = offsetof(UKillCountWidget_C, Test);
	static_assert(UKillCountWidget_C_Test_Offset == 0x350, "UKillCountWidget_C::Test offset is not 350");
	auto constexpr UKillCountWidget_C_KillCountVanishing_Offset = offsetof(UKillCountWidget_C, KillCountVanishing);
	static_assert(UKillCountWidget_C_KillCountVanishing_Offset == 0x358, "UKillCountWidget_C::KillCountVanishing offset is not 358");
	auto constexpr UKillCountWidget_C_KillCountEmerging_Offset = offsetof(UKillCountWidget_C, KillCountEmerging);
	static_assert(UKillCountWidget_C_KillCountEmerging_Offset == 0x360, "UKillCountWidget_C::KillCountEmerging offset is not 360");
	auto constexpr UKillCountWidget_C_Warning_Offset = offsetof(UKillCountWidget_C, Warning);
	static_assert(UKillCountWidget_C_Warning_Offset == 0x368, "UKillCountWidget_C::Warning offset is not 368");
	auto constexpr UKillCountWidget_C_Increasing_Offset = offsetof(UKillCountWidget_C, Increasing);
	static_assert(UKillCountWidget_C_Increasing_Offset == 0x370, "UKillCountWidget_C::Increasing offset is not 370");
	auto constexpr UKillCountWidget_C_Decreasing_Offset = offsetof(UKillCountWidget_C, Decreasing);
	static_assert(UKillCountWidget_C_Decreasing_Offset == 0x378, "UKillCountWidget_C::Decreasing offset is not 378");
	auto constexpr UKillCountWidget_C_Default_Offset = offsetof(UKillCountWidget_C, Default);
	static_assert(UKillCountWidget_C_Default_Offset == 0x380, "UKillCountWidget_C::Default offset is not 380");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
