#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Animation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKillCountBaseWidget // Size: 0x350
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UKillCountBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1530); // id32("Class TslGame.KillCountBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_TextBlock KillCountTextBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.KillCountBaseWidget.KillCountTextBinder */
	FUmgWidgetBinder_Animation IncreasingAnimBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.KillCountBaseWidget.IncreasingAnimBinder */
	float IncreasingKillCountDisplayTime; /* Ofs: 0x340 Size: 0x4 - FloatProperty TslGame.KillCountBaseWidget.IncreasingKillCountDisplayTime */
	int32_t LastKillCount; /* Ofs: 0x344 Size: 0x4 - IntProperty TslGame.KillCountBaseWidget.LastKillCount */
	uint8_t boolField348;
	uint8_t UnknownData349[0x3];
	float IncreasingKillCountDisplayStartTime; /* Ofs: 0x34C Size: 0x4 - FloatProperty TslGame.KillCountBaseWidget.IncreasingKillCountDisplayStartTime */


	inline bool SetKillCountTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x300, value); }
	inline bool SetIncreasingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x320, value); }
	inline bool SetIncreasingKillCountDisplayTime(t_structHelper inst, float value) { inst.WriteOffset(0x340, value); }
	inline bool SetLastKillCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x344, value); }
	inline bool bLastWantShow()
	{
		return boolField348& 0x1;
	}
	inline bool SetbLastWantShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x348, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetIncreasingKillCountDisplayStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x34C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKillCountBaseWidget = sizeof(UKillCountBaseWidget); // 848
    static_assert(sizeof(UKillCountBaseWidget) == 0x350, "Size of UKillCountBaseWidget is not correct.");
	auto constexpr UKillCountBaseWidget_KillCountTextBinder_Offset = offsetof(UKillCountBaseWidget, KillCountTextBinder);
	static_assert(UKillCountBaseWidget_KillCountTextBinder_Offset == 0x300, "UKillCountBaseWidget::KillCountTextBinder offset is not 300");
	auto constexpr UKillCountBaseWidget_IncreasingAnimBinder_Offset = offsetof(UKillCountBaseWidget, IncreasingAnimBinder);
	static_assert(UKillCountBaseWidget_IncreasingAnimBinder_Offset == 0x320, "UKillCountBaseWidget::IncreasingAnimBinder offset is not 320");
	auto constexpr UKillCountBaseWidget_IncreasingKillCountDisplayTime_Offset = offsetof(UKillCountBaseWidget, IncreasingKillCountDisplayTime);
	static_assert(UKillCountBaseWidget_IncreasingKillCountDisplayTime_Offset == 0x340, "UKillCountBaseWidget::IncreasingKillCountDisplayTime offset is not 340");
	auto constexpr UKillCountBaseWidget_LastKillCount_Offset = offsetof(UKillCountBaseWidget, LastKillCount);
	static_assert(UKillCountBaseWidget_LastKillCount_Offset == 0x344, "UKillCountBaseWidget::LastKillCount offset is not 344");
	auto constexpr UKillCountBaseWidget_boolField348_Offset = offsetof(UKillCountBaseWidget, boolField348);
	static_assert(UKillCountBaseWidget_boolField348_Offset == 0x348, "UKillCountBaseWidget::boolField348 offset is not 348");
	auto constexpr UKillCountBaseWidget_IncreasingKillCountDisplayStartTime_Offset = offsetof(UKillCountBaseWidget, IncreasingKillCountDisplayStartTime);
	static_assert(UKillCountBaseWidget_IncreasingKillCountDisplayStartTime_Offset == 0x34c, "UKillCountBaseWidget::IncreasingKillCountDisplayStartTime offset is not 34c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
