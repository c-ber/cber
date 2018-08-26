#pragma once
#include "UTslKeySettingWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKeySettingWidget_BP_C // Size: 0x458
	: public UTslKeySettingWidget // Size: 0x440
{
private:
	typedef UKeySettingWidget_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168862); // id32("WidgetBlueprintGeneratedClass KeySettingWidget_BP.KeySettingWidget_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x440 Size: 0x8 - StructProperty KeySettingWidget_BP.KeySettingWidget_BP_C.UberGraphFrame */
	ExternalPtr<struct UChildOptionTitleWidget_C> ChildOptionTitleWidget; /* Ofs: 0x448 Size: 0x8 - ObjectProperty KeySettingWidget_BP.KeySettingWidget_BP_C.ChildOptionTitleWidget */
	ExternalPtr<struct UScrollBox> KeyScrollBox; /* Ofs: 0x450 Size: 0x8 - ObjectProperty KeySettingWidget_BP.KeySettingWidget_BP_C.KeyScrollBox */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x440, value); }
	inline bool SetChildOptionTitleWidget(t_structHelper inst, ExternalPtr<struct UChildOptionTitleWidget_C> value) { inst.WriteOffset(0x448, value); }
	inline bool SetKeyScrollBox(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKeySettingWidget_BP_C = sizeof(UKeySettingWidget_BP_C); // 1112
    static_assert(sizeof(UKeySettingWidget_BP_C) == 0x458, "Size of UKeySettingWidget_BP_C is not correct.");
	auto constexpr UKeySettingWidget_BP_C_UberGraphFrame_Offset = offsetof(UKeySettingWidget_BP_C, UberGraphFrame);
	static_assert(UKeySettingWidget_BP_C_UberGraphFrame_Offset == 0x440, "UKeySettingWidget_BP_C::UberGraphFrame offset is not 440");
	auto constexpr UKeySettingWidget_BP_C_ChildOptionTitleWidget_Offset = offsetof(UKeySettingWidget_BP_C, ChildOptionTitleWidget);
	static_assert(UKeySettingWidget_BP_C_ChildOptionTitleWidget_Offset == 0x448, "UKeySettingWidget_BP_C::ChildOptionTitleWidget offset is not 448");
	auto constexpr UKeySettingWidget_BP_C_KeyScrollBox_Offset = offsetof(UKeySettingWidget_BP_C, KeyScrollBox);
	static_assert(UKeySettingWidget_BP_C_KeyScrollBox_Offset == 0x450, "UKeySettingWidget_BP_C::KeyScrollBox offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
