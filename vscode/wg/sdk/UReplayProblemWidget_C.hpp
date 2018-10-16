#pragma once
#include "UReplayProblemBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplayProblemWidget_C // Size: 0x3A0
	: public UReplayProblemBaseWidget // Size: 0x380
{
private:
	typedef UReplayProblemWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(184826); // id32("WidgetBlueprintGeneratedClass ReplayProblemWidget.ReplayProblemWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> IconBlinking; /* Ofs: 0x380 Size: 0x8 - ObjectProperty ReplayProblemWidget.ReplayProblemWidget_C.IconBlinking */
	ExternalPtr<struct UWidgetAnimation> Vanishing; /* Ofs: 0x388 Size: 0x8 - ObjectProperty ReplayProblemWidget.ReplayProblemWidget_C.Vanishing */
	ExternalPtr<struct UWidgetAnimation> Emerging; /* Ofs: 0x390 Size: 0x8 - ObjectProperty ReplayProblemWidget.ReplayProblemWidget_C.Emerging */
	ExternalPtr<struct UTextBlock> replaytext; /* Ofs: 0x398 Size: 0x8 - ObjectProperty ReplayProblemWidget.ReplayProblemWidget_C.replaytext */


	inline bool SetIconBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x380, value); }
	inline bool SetVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x388, value); }
	inline bool SetEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x390, value); }
	inline bool Setreplaytext(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x398, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplayProblemWidget_C = sizeof(UReplayProblemWidget_C); // 928
    static_assert(sizeof(UReplayProblemWidget_C) == 0x3A0, "Size of UReplayProblemWidget_C is not correct.");
	auto constexpr UReplayProblemWidget_C_IconBlinking_Offset = offsetof(UReplayProblemWidget_C, IconBlinking);
	static_assert(UReplayProblemWidget_C_IconBlinking_Offset == 0x380, "UReplayProblemWidget_C::IconBlinking offset is not 380");
	auto constexpr UReplayProblemWidget_C_Vanishing_Offset = offsetof(UReplayProblemWidget_C, Vanishing);
	static_assert(UReplayProblemWidget_C_Vanishing_Offset == 0x388, "UReplayProblemWidget_C::Vanishing offset is not 388");
	auto constexpr UReplayProblemWidget_C_Emerging_Offset = offsetof(UReplayProblemWidget_C, Emerging);
	static_assert(UReplayProblemWidget_C_Emerging_Offset == 0x390, "UReplayProblemWidget_C::Emerging offset is not 390");
	auto constexpr UReplayProblemWidget_C_replaytext_Offset = offsetof(UReplayProblemWidget_C, replaytext);
	static_assert(UReplayProblemWidget_C_replaytext_Offset == 0x398, "UReplayProblemWidget_C::replaytext offset is not 398");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
