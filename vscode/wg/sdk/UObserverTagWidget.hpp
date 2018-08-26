#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_SizeBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UObserverTagWidget // Size: 0x360
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UObserverTagWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1937); // id32("Class TslGame.ObserverTagWidget")
		return ptr;
	}
	float OffsetZ; /* Ofs: 0x300 Size: 0x4 - FloatProperty TslGame.ObserverTagWidget.OffsetZ */
	float DeadOffsetZ; /* Ofs: 0x304 Size: 0x4 - FloatProperty TslGame.ObserverTagWidget.DeadOffsetZ */
	float Distance; /* Ofs: 0x308 Size: 0x4 - FloatProperty TslGame.ObserverTagWidget.Distance */
	float DistanceForName; /* Ofs: 0x30C Size: 0x4 - FloatProperty TslGame.ObserverTagWidget.DistanceForName */
	float DistanceForIndicator; /* Ofs: 0x310 Size: 0x4 - FloatProperty TslGame.ObserverTagWidget.DistanceForIndicator */
	uint8_t UnknownData314[0x4];
	ExternalPtr<struct UCurveFloat> WidgetCurve; /* Ofs: 0x318 Size: 0x8 - ObjectProperty TslGame.ObserverTagWidget.WidgetCurve */
	ExternalPtr<struct UCurveFloat> AnchorCurve; /* Ofs: 0x320 Size: 0x8 - ObjectProperty TslGame.ObserverTagWidget.AnchorCurve */
	ExternalPtr<struct UTslCharacter> Character; /* Ofs: 0x328 Size: 0x8 - ObjectProperty TslGame.ObserverTagWidget.Character */
	uint8_t UnknownData330[0x10];
	FUmgWidgetBinder_SizeBox WeaponIconSizeBoxBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.ObserverTagWidget.WeaponIconSizeBoxBinder */


	inline bool SetOffsetZ(t_structHelper inst, float value) { inst.WriteOffset(0x300, value); }
	inline bool SetDeadOffsetZ(t_structHelper inst, float value) { inst.WriteOffset(0x304, value); }
	inline bool SetDistance(t_structHelper inst, float value) { inst.WriteOffset(0x308, value); }
	inline bool SetDistanceForName(t_structHelper inst, float value) { inst.WriteOffset(0x30C, value); }
	inline bool SetDistanceForIndicator(t_structHelper inst, float value) { inst.WriteOffset(0x310, value); }
	inline bool SetWidgetCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x318, value); }
	inline bool SetAnchorCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x320, value); }
	inline bool SetCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x328, value); }
	inline bool SetWeaponIconSizeBoxBinder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x340, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUObserverTagWidget = sizeof(UObserverTagWidget); // 864
    static_assert(sizeof(UObserverTagWidget) == 0x360, "Size of UObserverTagWidget is not correct.");
	auto constexpr UObserverTagWidget_OffsetZ_Offset = offsetof(UObserverTagWidget, OffsetZ);
	static_assert(UObserverTagWidget_OffsetZ_Offset == 0x300, "UObserverTagWidget::OffsetZ offset is not 300");
	auto constexpr UObserverTagWidget_DeadOffsetZ_Offset = offsetof(UObserverTagWidget, DeadOffsetZ);
	static_assert(UObserverTagWidget_DeadOffsetZ_Offset == 0x304, "UObserverTagWidget::DeadOffsetZ offset is not 304");
	auto constexpr UObserverTagWidget_Distance_Offset = offsetof(UObserverTagWidget, Distance);
	static_assert(UObserverTagWidget_Distance_Offset == 0x308, "UObserverTagWidget::Distance offset is not 308");
	auto constexpr UObserverTagWidget_DistanceForName_Offset = offsetof(UObserverTagWidget, DistanceForName);
	static_assert(UObserverTagWidget_DistanceForName_Offset == 0x30c, "UObserverTagWidget::DistanceForName offset is not 30c");
	auto constexpr UObserverTagWidget_DistanceForIndicator_Offset = offsetof(UObserverTagWidget, DistanceForIndicator);
	static_assert(UObserverTagWidget_DistanceForIndicator_Offset == 0x310, "UObserverTagWidget::DistanceForIndicator offset is not 310");
	auto constexpr UObserverTagWidget_WidgetCurve_Offset = offsetof(UObserverTagWidget, WidgetCurve);
	static_assert(UObserverTagWidget_WidgetCurve_Offset == 0x318, "UObserverTagWidget::WidgetCurve offset is not 318");
	auto constexpr UObserverTagWidget_AnchorCurve_Offset = offsetof(UObserverTagWidget, AnchorCurve);
	static_assert(UObserverTagWidget_AnchorCurve_Offset == 0x320, "UObserverTagWidget::AnchorCurve offset is not 320");
	auto constexpr UObserverTagWidget_Character_Offset = offsetof(UObserverTagWidget, Character);
	static_assert(UObserverTagWidget_Character_Offset == 0x328, "UObserverTagWidget::Character offset is not 328");
	auto constexpr UObserverTagWidget_WeaponIconSizeBoxBinder_Offset = offsetof(UObserverTagWidget, WeaponIconSizeBoxBinder);
	static_assert(UObserverTagWidget_WeaponIconSizeBoxBinder_Offset == 0x340, "UObserverTagWidget::WeaponIconSizeBoxBinder offset is not 340");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
