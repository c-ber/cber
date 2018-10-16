#pragma once
#include "UNetworkProblemBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNetworkProblemWidget_C // Size: 0x338
	: public UNetworkProblemBaseWidget // Size: 0x320
{
private:
	typedef UNetworkProblemWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(192038); // id32("WidgetBlueprintGeneratedClass NetworkProblemWidget.NetworkProblemWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> IconBlinking; /* Ofs: 0x320 Size: 0x8 - ObjectProperty NetworkProblemWidget.NetworkProblemWidget_C.IconBlinking */
	ExternalPtr<struct UWidgetAnimation> Vanishing; /* Ofs: 0x328 Size: 0x8 - ObjectProperty NetworkProblemWidget.NetworkProblemWidget_C.Vanishing */
	ExternalPtr<struct UWidgetAnimation> Emerging; /* Ofs: 0x330 Size: 0x8 - ObjectProperty NetworkProblemWidget.NetworkProblemWidget_C.Emerging */


	inline bool SetIconBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x320, value); }
	inline bool SetVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x328, value); }
	inline bool SetEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x330, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNetworkProblemWidget_C = sizeof(UNetworkProblemWidget_C); // 824
    static_assert(sizeof(UNetworkProblemWidget_C) == 0x338, "Size of UNetworkProblemWidget_C is not correct.");
	auto constexpr UNetworkProblemWidget_C_IconBlinking_Offset = offsetof(UNetworkProblemWidget_C, IconBlinking);
	static_assert(UNetworkProblemWidget_C_IconBlinking_Offset == 0x320, "UNetworkProblemWidget_C::IconBlinking offset is not 320");
	auto constexpr UNetworkProblemWidget_C_Vanishing_Offset = offsetof(UNetworkProblemWidget_C, Vanishing);
	static_assert(UNetworkProblemWidget_C_Vanishing_Offset == 0x328, "UNetworkProblemWidget_C::Vanishing offset is not 328");
	auto constexpr UNetworkProblemWidget_C_Emerging_Offset = offsetof(UNetworkProblemWidget_C, Emerging);
	static_assert(UNetworkProblemWidget_C_Emerging_Offset == 0x330, "UNetworkProblemWidget_C::Emerging offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
