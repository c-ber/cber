#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Warmode_GameTimer_C // Size: 0x258
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBP_Warmode_GameTimer_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193367); // id32("WidgetBlueprintGeneratedClass BP_Warmode_GameTimer.BP_Warmode_GameTimer_C")
		return ptr;
	}
	ExternalPtr<struct UImage> GameTimerBG; /* Ofs: 0x248 Size: 0x8 - ObjectProperty BP_Warmode_GameTimer.BP_Warmode_GameTimer_C.GameTimerBG */
	ExternalPtr<struct UTextBlock> TimeLimitText; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BP_Warmode_GameTimer.BP_Warmode_GameTimer_C.TimeLimitText */


	inline bool SetGameTimerBG(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetTimeLimitText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Warmode_GameTimer_C = sizeof(UBP_Warmode_GameTimer_C); // 600
    static_assert(sizeof(UBP_Warmode_GameTimer_C) == 0x258, "Size of UBP_Warmode_GameTimer_C is not correct.");
	auto constexpr UBP_Warmode_GameTimer_C_GameTimerBG_Offset = offsetof(UBP_Warmode_GameTimer_C, GameTimerBG);
	static_assert(UBP_Warmode_GameTimer_C_GameTimerBG_Offset == 0x248, "UBP_Warmode_GameTimer_C::GameTimerBG offset is not 248");
	auto constexpr UBP_Warmode_GameTimer_C_TimeLimitText_Offset = offsetof(UBP_Warmode_GameTimer_C, TimeLimitText);
	static_assert(UBP_Warmode_GameTimer_C_TimeLimitText_Offset == 0x250, "UBP_Warmode_GameTimer_C::TimeLimitText offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
