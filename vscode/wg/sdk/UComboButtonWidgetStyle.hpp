#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FComboButtonStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UComboButtonWidgetStyle // Size: 0x418
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UComboButtonWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1654); // id32("Class Slate.ComboButtonWidgetStyle")
		return ptr;
	}
	FComboButtonStyle ComboButtonStyle; /* Ofs: 0x38 Size: 0x3E0 - StructProperty Slate.ComboButtonWidgetStyle.ComboButtonStyle */


	inline bool SetComboButtonStyle(t_structHelper inst, FComboButtonStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUComboButtonWidgetStyle = sizeof(UComboButtonWidgetStyle); // 1048
    static_assert(sizeof(UComboButtonWidgetStyle) == 0x418, "Size of UComboButtonWidgetStyle is not correct.");
	auto constexpr UComboButtonWidgetStyle_ComboButtonStyle_Offset = offsetof(UComboButtonWidgetStyle, ComboButtonStyle);
	static_assert(UComboButtonWidgetStyle_ComboButtonStyle_Offset == 0x38, "UComboButtonWidgetStyle::ComboButtonStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
