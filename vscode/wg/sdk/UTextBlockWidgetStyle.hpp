#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FTextBlockStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextBlockWidgetStyle // Size: 0x240
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UTextBlockWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1662); // id32("Class Slate.TextBlockWidgetStyle")
		return ptr;
	}
	FTextBlockStyle TextBlockStyle; /* Ofs: 0x38 Size: 0x208 - StructProperty Slate.TextBlockWidgetStyle.TextBlockStyle */


	inline bool SetTextBlockStyle(t_structHelper inst, FTextBlockStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextBlockWidgetStyle = sizeof(UTextBlockWidgetStyle); // 576
    static_assert(sizeof(UTextBlockWidgetStyle) == 0x240, "Size of UTextBlockWidgetStyle is not correct.");
	auto constexpr UTextBlockWidgetStyle_TextBlockStyle_Offset = offsetof(UTextBlockWidgetStyle, TextBlockStyle);
	static_assert(UTextBlockWidgetStyle_TextBlockStyle_Offset == 0x38, "UTextBlockWidgetStyle::TextBlockStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
