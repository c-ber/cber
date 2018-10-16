#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FButtonStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UButtonWidgetStyle // Size: 0x2E0
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UButtonWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1651); // id32("Class Slate.ButtonWidgetStyle")
		return ptr;
	}
	FButtonStyle ButtonStyle; /* Ofs: 0x38 Size: 0x2A8 - StructProperty Slate.ButtonWidgetStyle.ButtonStyle */


	inline bool SetButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUButtonWidgetStyle = sizeof(UButtonWidgetStyle); // 736
    static_assert(sizeof(UButtonWidgetStyle) == 0x2E0, "Size of UButtonWidgetStyle is not correct.");
	auto constexpr UButtonWidgetStyle_ButtonStyle_Offset = offsetof(UButtonWidgetStyle, ButtonStyle);
	static_assert(UButtonWidgetStyle_ButtonStyle_Offset == 0x38, "UButtonWidgetStyle::ButtonStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
