#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Border.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslAlivePlayerInfoWidget // Size: 0x400
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslAlivePlayerInfoWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1548); // id32("Class TslGame.TslAlivePlayerInfoWidget")
		return ptr;
	}
	uint8_t UnknownData300[0x8];
	ExternalPtr<struct UTslGameState> CachedTslGS; /* Ofs: 0x308 Size: 0x8 - ObjectProperty TslGame.TslAlivePlayerInfoWidget.CachedTslGS */
	FUmgWidgetBinder_Border ColorOverlay_Binder; /* Ofs: 0x310 Size: 0x20 - StructProperty TslGame.TslAlivePlayerInfoWidget.ColorOverlay_Binder */
	FUmgWidgetBinder_Animation Warning_Binder; /* Ofs: 0x330 Size: 0x20 - StructProperty TslGame.TslAlivePlayerInfoWidget.Warning_Binder */
	FUmgWidgetBinder_Animation Increasing_Binder; /* Ofs: 0x350 Size: 0x20 - StructProperty TslGame.TslAlivePlayerInfoWidget.Increasing_Binder */
	FUmgWidgetBinder_Animation Decreasing_Binder; /* Ofs: 0x370 Size: 0x20 - StructProperty TslGame.TslAlivePlayerInfoWidget.Decreasing_Binder */
	FUmgWidgetBinder_Animation Default_Binder; /* Ofs: 0x390 Size: 0x20 - StructProperty TslGame.TslAlivePlayerInfoWidget.Default_Binder */
	FUmgWidgetBinder_TextBlock AdditionalInfo_Binder; /* Ofs: 0x3B0 Size: 0x20 - StructProperty TslGame.TslAlivePlayerInfoWidget.AdditionalInfo_Binder */
	FUmgWidgetBinder_TextBlock SurvivorCount_Binder; /* Ofs: 0x3D0 Size: 0x20 - StructProperty TslGame.TslAlivePlayerInfoWidget.SurvivorCount_Binder */
	uint8_t boolField3F0;
	uint8_t boolField3F1;
	uint8_t UnknownData3F2[0x2];
	int32_t CurrentCount; /* Ofs: 0x3F4 Size: 0x4 - IntProperty TslGame.TslAlivePlayerInfoWidget.CurrentCount */
	int32_t LastCount; /* Ofs: 0x3F8 Size: 0x4 - IntProperty TslGame.TslAlivePlayerInfoWidget.LastCount */
	uint8_t UnknownData3FC[0x4];


	inline bool SetCachedTslGS(t_structHelper inst, ExternalPtr<struct UTslGameState> value) { inst.WriteOffset(0x308, value); }
	inline bool SetColorOverlay_Binder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x310, value); }
	inline bool SetWarning_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x330, value); }
	inline bool SetIncreasing_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x350, value); }
	inline bool SetDecreasing_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x370, value); }
	inline bool SetDefault_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x390, value); }
	inline bool SetAdditionalInfo_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetSurvivorCount_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x3D0, value); }
	inline bool bIsReplaying()
	{
		return boolField3F0& 0x1;
	}
	inline bool SetbIsReplaying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsHidden()
	{
		return boolField3F1& 0x1;
	}
	inline bool SetbIsHidden(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3F1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCurrentCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3F4, value); }
	inline bool SetLastCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslAlivePlayerInfoWidget = sizeof(UTslAlivePlayerInfoWidget); // 1024
    static_assert(sizeof(UTslAlivePlayerInfoWidget) == 0x400, "Size of UTslAlivePlayerInfoWidget is not correct.");
	auto constexpr UTslAlivePlayerInfoWidget_CachedTslGS_Offset = offsetof(UTslAlivePlayerInfoWidget, CachedTslGS);
	static_assert(UTslAlivePlayerInfoWidget_CachedTslGS_Offset == 0x308, "UTslAlivePlayerInfoWidget::CachedTslGS offset is not 308");
	auto constexpr UTslAlivePlayerInfoWidget_ColorOverlay_Binder_Offset = offsetof(UTslAlivePlayerInfoWidget, ColorOverlay_Binder);
	static_assert(UTslAlivePlayerInfoWidget_ColorOverlay_Binder_Offset == 0x310, "UTslAlivePlayerInfoWidget::ColorOverlay_Binder offset is not 310");
	auto constexpr UTslAlivePlayerInfoWidget_Warning_Binder_Offset = offsetof(UTslAlivePlayerInfoWidget, Warning_Binder);
	static_assert(UTslAlivePlayerInfoWidget_Warning_Binder_Offset == 0x330, "UTslAlivePlayerInfoWidget::Warning_Binder offset is not 330");
	auto constexpr UTslAlivePlayerInfoWidget_Increasing_Binder_Offset = offsetof(UTslAlivePlayerInfoWidget, Increasing_Binder);
	static_assert(UTslAlivePlayerInfoWidget_Increasing_Binder_Offset == 0x350, "UTslAlivePlayerInfoWidget::Increasing_Binder offset is not 350");
	auto constexpr UTslAlivePlayerInfoWidget_Decreasing_Binder_Offset = offsetof(UTslAlivePlayerInfoWidget, Decreasing_Binder);
	static_assert(UTslAlivePlayerInfoWidget_Decreasing_Binder_Offset == 0x370, "UTslAlivePlayerInfoWidget::Decreasing_Binder offset is not 370");
	auto constexpr UTslAlivePlayerInfoWidget_Default_Binder_Offset = offsetof(UTslAlivePlayerInfoWidget, Default_Binder);
	static_assert(UTslAlivePlayerInfoWidget_Default_Binder_Offset == 0x390, "UTslAlivePlayerInfoWidget::Default_Binder offset is not 390");
	auto constexpr UTslAlivePlayerInfoWidget_AdditionalInfo_Binder_Offset = offsetof(UTslAlivePlayerInfoWidget, AdditionalInfo_Binder);
	static_assert(UTslAlivePlayerInfoWidget_AdditionalInfo_Binder_Offset == 0x3b0, "UTslAlivePlayerInfoWidget::AdditionalInfo_Binder offset is not 3b0");
	auto constexpr UTslAlivePlayerInfoWidget_SurvivorCount_Binder_Offset = offsetof(UTslAlivePlayerInfoWidget, SurvivorCount_Binder);
	static_assert(UTslAlivePlayerInfoWidget_SurvivorCount_Binder_Offset == 0x3d0, "UTslAlivePlayerInfoWidget::SurvivorCount_Binder offset is not 3d0");
	auto constexpr UTslAlivePlayerInfoWidget_boolField3F0_Offset = offsetof(UTslAlivePlayerInfoWidget, boolField3F0);
	static_assert(UTslAlivePlayerInfoWidget_boolField3F0_Offset == 0x3f0, "UTslAlivePlayerInfoWidget::boolField3F0 offset is not 3f0");
	auto constexpr UTslAlivePlayerInfoWidget_boolField3F1_Offset = offsetof(UTslAlivePlayerInfoWidget, boolField3F1);
	static_assert(UTslAlivePlayerInfoWidget_boolField3F1_Offset == 0x3f1, "UTslAlivePlayerInfoWidget::boolField3F1 offset is not 3f1");
	auto constexpr UTslAlivePlayerInfoWidget_CurrentCount_Offset = offsetof(UTslAlivePlayerInfoWidget, CurrentCount);
	static_assert(UTslAlivePlayerInfoWidget_CurrentCount_Offset == 0x3f4, "UTslAlivePlayerInfoWidget::CurrentCount offset is not 3f4");
	auto constexpr UTslAlivePlayerInfoWidget_LastCount_Offset = offsetof(UTslAlivePlayerInfoWidget, LastCount);
	static_assert(UTslAlivePlayerInfoWidget_LastCount_Offset == 0x3f8, "UTslAlivePlayerInfoWidget::LastCount offset is not 3f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
