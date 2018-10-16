#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FScrollBoxStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScrollBoxWidgetStyle // Size: 0x280
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UScrollBoxWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1659); // id32("Class Slate.ScrollBoxWidgetStyle")
		return ptr;
	}
	FScrollBoxStyle ScrollBoxStyle; /* Ofs: 0x38 Size: 0x248 - StructProperty Slate.ScrollBoxWidgetStyle.ScrollBoxStyle */


	inline bool SetScrollBoxStyle(t_structHelper inst, FScrollBoxStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScrollBoxWidgetStyle = sizeof(UScrollBoxWidgetStyle); // 640
    static_assert(sizeof(UScrollBoxWidgetStyle) == 0x280, "Size of UScrollBoxWidgetStyle is not correct.");
	auto constexpr UScrollBoxWidgetStyle_ScrollBoxStyle_Offset = offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle);
	static_assert(UScrollBoxWidgetStyle_ScrollBoxStyle_Offset == 0x38, "UScrollBoxWidgetStyle::ScrollBoxStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
