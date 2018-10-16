#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslHealthGaugeBpWidget_C // Size: 0x2BC
	: public UUserWidget // Size: 0x248
{
private:
	typedef UTslHealthGaugeBpWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187189); // id32("WidgetBlueprintGeneratedClass TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> Warning2; /* Ofs: 0x250 Size: 0x8 - ObjectProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Warning2 */
	ExternalPtr<struct UWidgetAnimation> Warning; /* Ofs: 0x258 Size: 0x8 - ObjectProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.Warning */
	ExternalPtr<struct UImage> GaugeImage; /* Ofs: 0x260 Size: 0x8 - ObjectProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GaugeImage */
	ExternalPtr<struct UBorder> GuageBody; /* Ofs: 0x268 Size: 0x8 - ObjectProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GuageBody */
	ExternalPtr<struct UMaterialInstanceDynamic> GaugeMaterial; /* Ofs: 0x270 Size: 0x8 - ObjectProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.GaugeMaterial */
	float LastHealthPercent; /* Ofs: 0x278 Size: 0x4 - FloatProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.LastHealthPercent */
	uint8_t UnknownData27C[0x4];
	ExternalPtr<struct UCurveFloat> HealthMoveCurve; /* Ofs: 0x280 Size: 0x8 - ObjectProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.HealthMoveCurve */
	float DestinationHealthPercent; /* Ofs: 0x288 Size: 0x4 - FloatProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.DestinationHealthPercent */
	float WaningStartPercent; /* Ofs: 0x28C Size: 0x4 - FloatProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.WaningStartPercent */
	float TestValue; /* Ofs: 0x290 Size: 0x4 - FloatProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.TestValue */
	uint8_t boolField294;
	uint8_t boolField295;
	uint8_t UnknownData296[0x2];
	ExternalPtr<struct UTslHealthGaugeData> HealthGaugeColor; /* Ofs: 0x298 Size: 0x8 - ObjectProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.HealthGaugeColor */
	ExternalPtr<struct UTslHealthGaugeData> HealthGagugeColor; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.HealthGagugeColor */
	uint8_t boolField2A8;
	uint8_t UnknownData2A9[0x3];
	FLinearColor CurHealthGaugeColor; /* Ofs: 0x2AC Size: 0x10 - StructProperty TslHealthGaugeBpWidget.TslHealthGaugeBpWidget_C.CurHealthGaugeColor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetWarning2(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x258, value); }
	inline bool SetGaugeImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x260, value); }
	inline bool SetGuageBody(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x268, value); }
	inline bool SetGaugeMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x270, value); }
	inline bool SetLastHealthPercent(t_structHelper inst, float value) { inst.WriteOffset(0x278, value); }
	inline bool SetHealthMoveCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x280, value); }
	inline bool SetDestinationHealthPercent(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetWaningStartPercent(t_structHelper inst, float value) { inst.WriteOffset(0x28C, value); }
	inline bool SetTestValue(t_structHelper inst, float value) { inst.WriteOffset(0x290, value); }
	inline bool bMoveGauge()
	{
		return boolField294& 0x1;
	}
	inline bool SetbMoveGauge(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x294, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSmoothMode()
	{
		return boolField295& 0x1;
	}
	inline bool SetbSmoothMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x295, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHealthGaugeColor(t_structHelper inst, ExternalPtr<struct UTslHealthGaugeData> value) { inst.WriteOffset(0x298, value); }
	inline bool SetHealthGagugeColor(t_structHelper inst, ExternalPtr<struct UTslHealthGaugeData> value) { inst.WriteOffset(0x2A0, value); }
	inline bool bGroggy()
	{
		return boolField2A8& 0x1;
	}
	inline bool SetbGroggy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCurHealthGaugeColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x2AC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslHealthGaugeBpWidget_C = sizeof(UTslHealthGaugeBpWidget_C); // 700
    static_assert(sizeof(UTslHealthGaugeBpWidget_C) == 0x2BC, "Size of UTslHealthGaugeBpWidget_C is not correct.");
	auto constexpr UTslHealthGaugeBpWidget_C_UberGraphFrame_Offset = offsetof(UTslHealthGaugeBpWidget_C, UberGraphFrame);
	static_assert(UTslHealthGaugeBpWidget_C_UberGraphFrame_Offset == 0x248, "UTslHealthGaugeBpWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UTslHealthGaugeBpWidget_C_Warning2_Offset = offsetof(UTslHealthGaugeBpWidget_C, Warning2);
	static_assert(UTslHealthGaugeBpWidget_C_Warning2_Offset == 0x250, "UTslHealthGaugeBpWidget_C::Warning2 offset is not 250");
	auto constexpr UTslHealthGaugeBpWidget_C_Warning_Offset = offsetof(UTslHealthGaugeBpWidget_C, Warning);
	static_assert(UTslHealthGaugeBpWidget_C_Warning_Offset == 0x258, "UTslHealthGaugeBpWidget_C::Warning offset is not 258");
	auto constexpr UTslHealthGaugeBpWidget_C_GaugeImage_Offset = offsetof(UTslHealthGaugeBpWidget_C, GaugeImage);
	static_assert(UTslHealthGaugeBpWidget_C_GaugeImage_Offset == 0x260, "UTslHealthGaugeBpWidget_C::GaugeImage offset is not 260");
	auto constexpr UTslHealthGaugeBpWidget_C_GuageBody_Offset = offsetof(UTslHealthGaugeBpWidget_C, GuageBody);
	static_assert(UTslHealthGaugeBpWidget_C_GuageBody_Offset == 0x268, "UTslHealthGaugeBpWidget_C::GuageBody offset is not 268");
	auto constexpr UTslHealthGaugeBpWidget_C_GaugeMaterial_Offset = offsetof(UTslHealthGaugeBpWidget_C, GaugeMaterial);
	static_assert(UTslHealthGaugeBpWidget_C_GaugeMaterial_Offset == 0x270, "UTslHealthGaugeBpWidget_C::GaugeMaterial offset is not 270");
	auto constexpr UTslHealthGaugeBpWidget_C_LastHealthPercent_Offset = offsetof(UTslHealthGaugeBpWidget_C, LastHealthPercent);
	static_assert(UTslHealthGaugeBpWidget_C_LastHealthPercent_Offset == 0x278, "UTslHealthGaugeBpWidget_C::LastHealthPercent offset is not 278");
	auto constexpr UTslHealthGaugeBpWidget_C_HealthMoveCurve_Offset = offsetof(UTslHealthGaugeBpWidget_C, HealthMoveCurve);
	static_assert(UTslHealthGaugeBpWidget_C_HealthMoveCurve_Offset == 0x280, "UTslHealthGaugeBpWidget_C::HealthMoveCurve offset is not 280");
	auto constexpr UTslHealthGaugeBpWidget_C_DestinationHealthPercent_Offset = offsetof(UTslHealthGaugeBpWidget_C, DestinationHealthPercent);
	static_assert(UTslHealthGaugeBpWidget_C_DestinationHealthPercent_Offset == 0x288, "UTslHealthGaugeBpWidget_C::DestinationHealthPercent offset is not 288");
	auto constexpr UTslHealthGaugeBpWidget_C_WaningStartPercent_Offset = offsetof(UTslHealthGaugeBpWidget_C, WaningStartPercent);
	static_assert(UTslHealthGaugeBpWidget_C_WaningStartPercent_Offset == 0x28c, "UTslHealthGaugeBpWidget_C::WaningStartPercent offset is not 28c");
	auto constexpr UTslHealthGaugeBpWidget_C_TestValue_Offset = offsetof(UTslHealthGaugeBpWidget_C, TestValue);
	static_assert(UTslHealthGaugeBpWidget_C_TestValue_Offset == 0x290, "UTslHealthGaugeBpWidget_C::TestValue offset is not 290");
	auto constexpr UTslHealthGaugeBpWidget_C_boolField294_Offset = offsetof(UTslHealthGaugeBpWidget_C, boolField294);
	static_assert(UTslHealthGaugeBpWidget_C_boolField294_Offset == 0x294, "UTslHealthGaugeBpWidget_C::boolField294 offset is not 294");
	auto constexpr UTslHealthGaugeBpWidget_C_boolField295_Offset = offsetof(UTslHealthGaugeBpWidget_C, boolField295);
	static_assert(UTslHealthGaugeBpWidget_C_boolField295_Offset == 0x295, "UTslHealthGaugeBpWidget_C::boolField295 offset is not 295");
	auto constexpr UTslHealthGaugeBpWidget_C_HealthGaugeColor_Offset = offsetof(UTslHealthGaugeBpWidget_C, HealthGaugeColor);
	static_assert(UTslHealthGaugeBpWidget_C_HealthGaugeColor_Offset == 0x298, "UTslHealthGaugeBpWidget_C::HealthGaugeColor offset is not 298");
	auto constexpr UTslHealthGaugeBpWidget_C_HealthGagugeColor_Offset = offsetof(UTslHealthGaugeBpWidget_C, HealthGagugeColor);
	static_assert(UTslHealthGaugeBpWidget_C_HealthGagugeColor_Offset == 0x2a0, "UTslHealthGaugeBpWidget_C::HealthGagugeColor offset is not 2a0");
	auto constexpr UTslHealthGaugeBpWidget_C_boolField2A8_Offset = offsetof(UTslHealthGaugeBpWidget_C, boolField2A8);
	static_assert(UTslHealthGaugeBpWidget_C_boolField2A8_Offset == 0x2a8, "UTslHealthGaugeBpWidget_C::boolField2A8 offset is not 2a8");
	auto constexpr UTslHealthGaugeBpWidget_C_CurHealthGaugeColor_Offset = offsetof(UTslHealthGaugeBpWidget_C, CurHealthGaugeColor);
	static_assert(UTslHealthGaugeBpWidget_C_CurHealthGaugeColor_Offset == 0x2ac, "UTslHealthGaugeBpWidget_C::CurHealthGaugeColor offset is not 2ac");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
