#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FProgressBarStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProgressWidgetStyle // Size: 0x1F0
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UProgressWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1657); // id32("Class Slate.ProgressWidgetStyle")
		return ptr;
	}
	FProgressBarStyle ProgressBarStyle; /* Ofs: 0x38 Size: 0x1B8 - StructProperty Slate.ProgressWidgetStyle.ProgressBarStyle */


	inline bool SetProgressBarStyle(t_structHelper inst, FProgressBarStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProgressWidgetStyle = sizeof(UProgressWidgetStyle); // 496
    static_assert(sizeof(UProgressWidgetStyle) == 0x1F0, "Size of UProgressWidgetStyle is not correct.");
	auto constexpr UProgressWidgetStyle_ProgressBarStyle_Offset = offsetof(UProgressWidgetStyle, ProgressBarStyle);
	static_assert(UProgressWidgetStyle_ProgressBarStyle_Offset == 0x38, "UProgressWidgetStyle::ProgressBarStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
