#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FTslMenuStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslMenuWidgetStyle // Size: 0x250
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UTslMenuWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1430); // id32("Class TslGame.TslMenuWidgetStyle")
		return ptr;
	}
	FTslMenuStyle MenuStyle; /* Ofs: 0x38 Size: 0x218 - StructProperty TslGame.TslMenuWidgetStyle.MenuStyle */


	inline bool SetMenuStyle(t_structHelper inst, FTslMenuStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslMenuWidgetStyle = sizeof(UTslMenuWidgetStyle); // 592
    static_assert(sizeof(UTslMenuWidgetStyle) == 0x250, "Size of UTslMenuWidgetStyle is not correct.");
	auto constexpr UTslMenuWidgetStyle_MenuStyle_Offset = offsetof(UTslMenuWidgetStyle, MenuStyle);
	static_assert(UTslMenuWidgetStyle_MenuStyle_Offset == 0x38, "UTslMenuWidgetStyle::MenuStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
