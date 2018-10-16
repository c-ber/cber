#pragma once
#include "UQualityComboBox_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPresetColorComboBoxWidget_C // Size: 0x2A0
	: public UQualityComboBox_C // Size: 0x2A0
{
private:
	typedef UPresetColorComboBoxWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169615); // id32("WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPresetColorComboBoxWidget_C = sizeof(UPresetColorComboBoxWidget_C); // 672
    static_assert(sizeof(UPresetColorComboBoxWidget_C) == 0x2A0, "Size of UPresetColorComboBoxWidget_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
