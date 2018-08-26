#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FComboBoxStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UComboBoxWidgetStyle // Size: 0x460
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UComboBoxWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1653); // id32("Class Slate.ComboBoxWidgetStyle")
		return ptr;
	}
	FComboBoxStyle ComboBoxStyle; /* Ofs: 0x38 Size: 0x428 - StructProperty Slate.ComboBoxWidgetStyle.ComboBoxStyle */


	inline bool SetComboBoxStyle(t_structHelper inst, FComboBoxStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUComboBoxWidgetStyle = sizeof(UComboBoxWidgetStyle); // 1120
    static_assert(sizeof(UComboBoxWidgetStyle) == 0x460, "Size of UComboBoxWidgetStyle is not correct.");
	auto constexpr UComboBoxWidgetStyle_ComboBoxStyle_Offset = offsetof(UComboBoxWidgetStyle, ComboBoxStyle);
	static_assert(UComboBoxWidgetStyle_ComboBoxStyle_Offset == 0x38, "UComboBoxWidgetStyle::ComboBoxStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
