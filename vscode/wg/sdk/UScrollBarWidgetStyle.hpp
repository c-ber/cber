#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FScrollBarStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScrollBarWidgetStyle // Size: 0x550
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UScrollBarWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1658); // id32("Class Slate.ScrollBarWidgetStyle")
		return ptr;
	}
	FScrollBarStyle ScrollBarStyle; /* Ofs: 0x38 Size: 0x518 - StructProperty Slate.ScrollBarWidgetStyle.ScrollBarStyle */


	inline bool SetScrollBarStyle(t_structHelper inst, FScrollBarStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScrollBarWidgetStyle = sizeof(UScrollBarWidgetStyle); // 1360
    static_assert(sizeof(UScrollBarWidgetStyle) == 0x550, "Size of UScrollBarWidgetStyle is not correct.");
	auto constexpr UScrollBarWidgetStyle_ScrollBarStyle_Offset = offsetof(UScrollBarWidgetStyle, ScrollBarStyle);
	static_assert(UScrollBarWidgetStyle_ScrollBarStyle_Offset == 0x38, "UScrollBarWidgetStyle::ScrollBarStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
