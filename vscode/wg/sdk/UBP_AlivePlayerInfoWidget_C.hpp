#pragma once
#include "UTslAlivePlayerInfoWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_AlivePlayerInfoWidget_C // Size: 0x420
	: public UTslAlivePlayerInfoWidget // Size: 0x400
{
private:
	typedef UBP_AlivePlayerInfoWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(192240); // id32("WidgetBlueprintGeneratedClass BP_AlivePlayerInfoWidget.BP_AlivePlayerInfoWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> Warning; /* Ofs: 0x400 Size: 0x8 - ObjectProperty BP_AlivePlayerInfoWidget.BP_AlivePlayerInfoWidget_C.Warning */
	ExternalPtr<struct UWidgetAnimation> Increasing; /* Ofs: 0x408 Size: 0x8 - ObjectProperty BP_AlivePlayerInfoWidget.BP_AlivePlayerInfoWidget_C.Increasing */
	ExternalPtr<struct UWidgetAnimation> Decreasing; /* Ofs: 0x410 Size: 0x8 - ObjectProperty BP_AlivePlayerInfoWidget.BP_AlivePlayerInfoWidget_C.Decreasing */
	ExternalPtr<struct UWidgetAnimation> Default; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_AlivePlayerInfoWidget.BP_AlivePlayerInfoWidget_C.Default */


	inline bool SetWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x400, value); }
	inline bool SetIncreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x408, value); }
	inline bool SetDecreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefault(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_AlivePlayerInfoWidget_C = sizeof(UBP_AlivePlayerInfoWidget_C); // 1056
    static_assert(sizeof(UBP_AlivePlayerInfoWidget_C) == 0x420, "Size of UBP_AlivePlayerInfoWidget_C is not correct.");
	auto constexpr UBP_AlivePlayerInfoWidget_C_Warning_Offset = offsetof(UBP_AlivePlayerInfoWidget_C, Warning);
	static_assert(UBP_AlivePlayerInfoWidget_C_Warning_Offset == 0x400, "UBP_AlivePlayerInfoWidget_C::Warning offset is not 400");
	auto constexpr UBP_AlivePlayerInfoWidget_C_Increasing_Offset = offsetof(UBP_AlivePlayerInfoWidget_C, Increasing);
	static_assert(UBP_AlivePlayerInfoWidget_C_Increasing_Offset == 0x408, "UBP_AlivePlayerInfoWidget_C::Increasing offset is not 408");
	auto constexpr UBP_AlivePlayerInfoWidget_C_Decreasing_Offset = offsetof(UBP_AlivePlayerInfoWidget_C, Decreasing);
	static_assert(UBP_AlivePlayerInfoWidget_C_Decreasing_Offset == 0x410, "UBP_AlivePlayerInfoWidget_C::Decreasing offset is not 410");
	auto constexpr UBP_AlivePlayerInfoWidget_C_Default_Offset = offsetof(UBP_AlivePlayerInfoWidget_C, Default);
	static_assert(UBP_AlivePlayerInfoWidget_C_Default_Offset == 0x418, "UBP_AlivePlayerInfoWidget_C::Default offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
