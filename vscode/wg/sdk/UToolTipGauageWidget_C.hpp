#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UToolTipGauageWidget_C // Size: 0x288
	: public UUserWidget // Size: 0x248
{
private:
	typedef UToolTipGauageWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(60065); // id32("WidgetBlueprintGeneratedClass ToolTipGauageWidget.ToolTipGauageWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty ToolTipGauageWidget.ToolTipGauageWidget_C.UberGraphFrame */
	ExternalPtr<struct UImage> Gauge; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ToolTipGauageWidget.ToolTipGauageWidget_C.Gauge */
	ExternalPtr<struct UImage> Gauge_bg; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ToolTipGauageWidget.ToolTipGauageWidget_C.Gauge_bg */
	ExternalPtr<struct UTextBlock> GaugeText; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ToolTipGauageWidget.ToolTipGauageWidget_C.GaugeText */
	ExternalPtr<struct UMaterialInstanceDynamic> GaugeMaterial; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ToolTipGauageWidget.ToolTipGauageWidget_C.GaugeMaterial */
	FText GaugeName; /* Ofs: 0x270 Size: 0x18 - TextProperty ToolTipGauageWidget.ToolTipGauageWidget_C.GaugeName */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetGauge(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetGauge_bg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetGaugeText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x260, value); }
	inline bool SetGaugeMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x268, value); }
	inline bool SetGaugeName(t_structHelper inst, FText value) { inst.WriteOffset(0x270, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUToolTipGauageWidget_C = sizeof(UToolTipGauageWidget_C); // 648
    static_assert(sizeof(UToolTipGauageWidget_C) == 0x288, "Size of UToolTipGauageWidget_C is not correct.");
	auto constexpr UToolTipGauageWidget_C_UberGraphFrame_Offset = offsetof(UToolTipGauageWidget_C, UberGraphFrame);
	static_assert(UToolTipGauageWidget_C_UberGraphFrame_Offset == 0x248, "UToolTipGauageWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UToolTipGauageWidget_C_Gauge_Offset = offsetof(UToolTipGauageWidget_C, Gauge);
	static_assert(UToolTipGauageWidget_C_Gauge_Offset == 0x250, "UToolTipGauageWidget_C::Gauge offset is not 250");
	auto constexpr UToolTipGauageWidget_C_Gauge_bg_Offset = offsetof(UToolTipGauageWidget_C, Gauge_bg);
	static_assert(UToolTipGauageWidget_C_Gauge_bg_Offset == 0x258, "UToolTipGauageWidget_C::Gauge_bg offset is not 258");
	auto constexpr UToolTipGauageWidget_C_GaugeText_Offset = offsetof(UToolTipGauageWidget_C, GaugeText);
	static_assert(UToolTipGauageWidget_C_GaugeText_Offset == 0x260, "UToolTipGauageWidget_C::GaugeText offset is not 260");
	auto constexpr UToolTipGauageWidget_C_GaugeMaterial_Offset = offsetof(UToolTipGauageWidget_C, GaugeMaterial);
	static_assert(UToolTipGauageWidget_C_GaugeMaterial_Offset == 0x268, "UToolTipGauageWidget_C::GaugeMaterial offset is not 268");
	auto constexpr UToolTipGauageWidget_C_GaugeName_Offset = offsetof(UToolTipGauageWidget_C, GaugeName);
	static_assert(UToolTipGauageWidget_C_GaugeName_Offset == 0x270, "UToolTipGauageWidget_C::GaugeName offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
