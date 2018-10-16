#pragma once
#include "UAliveHumansInfoWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_AliveHumansInfoWidget_C // Size: 0x420
	: public UAliveHumansInfoWidget // Size: 0x400
{
private:
	typedef UBP_AliveHumansInfoWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(192287); // id32("WidgetBlueprintGeneratedClass BP_AliveHumansInfoWidget.BP_AliveHumansInfoWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> Warning; /* Ofs: 0x400 Size: 0x8 - ObjectProperty BP_AliveHumansInfoWidget.BP_AliveHumansInfoWidget_C.Warning */
	ExternalPtr<struct UWidgetAnimation> Increasing; /* Ofs: 0x408 Size: 0x8 - ObjectProperty BP_AliveHumansInfoWidget.BP_AliveHumansInfoWidget_C.Increasing */
	ExternalPtr<struct UWidgetAnimation> Decreasing; /* Ofs: 0x410 Size: 0x8 - ObjectProperty BP_AliveHumansInfoWidget.BP_AliveHumansInfoWidget_C.Decreasing */
	ExternalPtr<struct UWidgetAnimation> Default; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_AliveHumansInfoWidget.BP_AliveHumansInfoWidget_C.Default */


	inline bool SetWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x400, value); }
	inline bool SetIncreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x408, value); }
	inline bool SetDecreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefault(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_AliveHumansInfoWidget_C = sizeof(UBP_AliveHumansInfoWidget_C); // 1056
    static_assert(sizeof(UBP_AliveHumansInfoWidget_C) == 0x420, "Size of UBP_AliveHumansInfoWidget_C is not correct.");
	auto constexpr UBP_AliveHumansInfoWidget_C_Warning_Offset = offsetof(UBP_AliveHumansInfoWidget_C, Warning);
	static_assert(UBP_AliveHumansInfoWidget_C_Warning_Offset == 0x400, "UBP_AliveHumansInfoWidget_C::Warning offset is not 400");
	auto constexpr UBP_AliveHumansInfoWidget_C_Increasing_Offset = offsetof(UBP_AliveHumansInfoWidget_C, Increasing);
	static_assert(UBP_AliveHumansInfoWidget_C_Increasing_Offset == 0x408, "UBP_AliveHumansInfoWidget_C::Increasing offset is not 408");
	auto constexpr UBP_AliveHumansInfoWidget_C_Decreasing_Offset = offsetof(UBP_AliveHumansInfoWidget_C, Decreasing);
	static_assert(UBP_AliveHumansInfoWidget_C_Decreasing_Offset == 0x410, "UBP_AliveHumansInfoWidget_C::Decreasing offset is not 410");
	auto constexpr UBP_AliveHumansInfoWidget_C_Default_Offset = offsetof(UBP_AliveHumansInfoWidget_C, Default);
	static_assert(UBP_AliveHumansInfoWidget_C_Default_Offset == 0x418, "UBP_AliveHumansInfoWidget_C::Default offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
