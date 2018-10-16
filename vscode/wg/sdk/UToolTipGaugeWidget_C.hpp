#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UToolTipGaugeWidget_C // Size: 0x288
	: public UUserWidget // Size: 0x248
{
private:
	typedef UToolTipGaugeWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(61709); // id32("WidgetBlueprintGeneratedClass ToolTipGaugeWidget.ToolTipGaugeWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty ToolTipGaugeWidget.ToolTipGaugeWidget_C.UberGraphFrame */
	ExternalPtr<struct UImage> Gauge; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ToolTipGaugeWidget.ToolTipGaugeWidget_C.Gauge */
	ExternalPtr<struct UImage> Gauge_bg; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ToolTipGaugeWidget.ToolTipGaugeWidget_C.Gauge_bg */
	ExternalPtr<struct UTextBlock> GaugeText; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ToolTipGaugeWidget.ToolTipGaugeWidget_C.GaugeText */
	ExternalPtr<struct UMaterialInstanceDynamic> GaugeMaterial; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ToolTipGaugeWidget.ToolTipGaugeWidget_C.GaugeMaterial */
	FText GaugeName; /* Ofs: 0x270 Size: 0x18 - TextProperty ToolTipGaugeWidget.ToolTipGaugeWidget_C.GaugeName */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetGauge(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetGauge_bg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetGaugeText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x260, value); }
	inline bool SetGaugeMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x268, value); }
	inline bool SetGaugeName(t_structHelper inst, FText value) { inst.WriteOffset(0x270, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUToolTipGaugeWidget_C = sizeof(UToolTipGaugeWidget_C); // 648
    static_assert(sizeof(UToolTipGaugeWidget_C) == 0x288, "Size of UToolTipGaugeWidget_C is not correct.");
	auto constexpr UToolTipGaugeWidget_C_UberGraphFrame_Offset = offsetof(UToolTipGaugeWidget_C, UberGraphFrame);
	static_assert(UToolTipGaugeWidget_C_UberGraphFrame_Offset == 0x248, "UToolTipGaugeWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UToolTipGaugeWidget_C_Gauge_Offset = offsetof(UToolTipGaugeWidget_C, Gauge);
	static_assert(UToolTipGaugeWidget_C_Gauge_Offset == 0x250, "UToolTipGaugeWidget_C::Gauge offset is not 250");
	auto constexpr UToolTipGaugeWidget_C_Gauge_bg_Offset = offsetof(UToolTipGaugeWidget_C, Gauge_bg);
	static_assert(UToolTipGaugeWidget_C_Gauge_bg_Offset == 0x258, "UToolTipGaugeWidget_C::Gauge_bg offset is not 258");
	auto constexpr UToolTipGaugeWidget_C_GaugeText_Offset = offsetof(UToolTipGaugeWidget_C, GaugeText);
	static_assert(UToolTipGaugeWidget_C_GaugeText_Offset == 0x260, "UToolTipGaugeWidget_C::GaugeText offset is not 260");
	auto constexpr UToolTipGaugeWidget_C_GaugeMaterial_Offset = offsetof(UToolTipGaugeWidget_C, GaugeMaterial);
	static_assert(UToolTipGaugeWidget_C_GaugeMaterial_Offset == 0x268, "UToolTipGaugeWidget_C::GaugeMaterial offset is not 268");
	auto constexpr UToolTipGaugeWidget_C_GaugeName_Offset = offsetof(UToolTipGaugeWidget_C, GaugeName);
	static_assert(UToolTipGaugeWidget_C_GaugeName_Offset == 0x270, "UToolTipGaugeWidget_C::GaugeName offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
