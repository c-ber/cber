#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGraphicOptionWidget_C // Size: 0x418
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef UGraphicOptionWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169928); // id32("WidgetBlueprintGeneratedClass GraphicOptionWidget.GraphicOptionWidget_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty GraphicOptionWidget.GraphicOptionWidget_C.UberGraphFrame */
	ExternalPtr<struct UGeneralSettingWidget_C> GeneralSettingWidget; /* Ofs: 0x400 Size: 0x8 - ObjectProperty GraphicOptionWidget.GraphicOptionWidget_C.GeneralSettingWidget */
	ExternalPtr<struct UQualitySettingsWidget_C> QualitySettingsWidget; /* Ofs: 0x408 Size: 0x8 - ObjectProperty GraphicOptionWidget.GraphicOptionWidget_C.QualitySettingsWidget */
	ExternalPtr<struct UScreenSettingWidget_C> ResolutionDisplayWidget; /* Ofs: 0x410 Size: 0x8 - ObjectProperty GraphicOptionWidget.GraphicOptionWidget_C.ResolutionDisplayWidget */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetGeneralSettingWidget(t_structHelper inst, ExternalPtr<struct UGeneralSettingWidget_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetQualitySettingsWidget(t_structHelper inst, ExternalPtr<struct UQualitySettingsWidget_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetResolutionDisplayWidget(t_structHelper inst, ExternalPtr<struct UScreenSettingWidget_C> value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGraphicOptionWidget_C = sizeof(UGraphicOptionWidget_C); // 1048
    static_assert(sizeof(UGraphicOptionWidget_C) == 0x418, "Size of UGraphicOptionWidget_C is not correct.");
	auto constexpr UGraphicOptionWidget_C_UberGraphFrame_Offset = offsetof(UGraphicOptionWidget_C, UberGraphFrame);
	static_assert(UGraphicOptionWidget_C_UberGraphFrame_Offset == 0x3f8, "UGraphicOptionWidget_C::UberGraphFrame offset is not 3f8");
	auto constexpr UGraphicOptionWidget_C_GeneralSettingWidget_Offset = offsetof(UGraphicOptionWidget_C, GeneralSettingWidget);
	static_assert(UGraphicOptionWidget_C_GeneralSettingWidget_Offset == 0x400, "UGraphicOptionWidget_C::GeneralSettingWidget offset is not 400");
	auto constexpr UGraphicOptionWidget_C_QualitySettingsWidget_Offset = offsetof(UGraphicOptionWidget_C, QualitySettingsWidget);
	static_assert(UGraphicOptionWidget_C_QualitySettingsWidget_Offset == 0x408, "UGraphicOptionWidget_C::QualitySettingsWidget offset is not 408");
	auto constexpr UGraphicOptionWidget_C_ResolutionDisplayWidget_Offset = offsetof(UGraphicOptionWidget_C, ResolutionDisplayWidget);
	static_assert(UGraphicOptionWidget_C_ResolutionDisplayWidget_Offset == 0x410, "UGraphicOptionWidget_C::ResolutionDisplayWidget offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
