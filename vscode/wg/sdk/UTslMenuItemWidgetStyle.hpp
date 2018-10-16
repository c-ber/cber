#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FTslMenuItemStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslMenuItemWidgetStyle // Size: 0x1F0
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UTslMenuItemWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1428); // id32("Class TslGame.TslMenuItemWidgetStyle")
		return ptr;
	}
	FTslMenuItemStyle MenuItemStyle; /* Ofs: 0x38 Size: 0x1B8 - StructProperty TslGame.TslMenuItemWidgetStyle.MenuItemStyle */


	inline bool SetMenuItemStyle(t_structHelper inst, FTslMenuItemStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslMenuItemWidgetStyle = sizeof(UTslMenuItemWidgetStyle); // 496
    static_assert(sizeof(UTslMenuItemWidgetStyle) == 0x1F0, "Size of UTslMenuItemWidgetStyle is not correct.");
	auto constexpr UTslMenuItemWidgetStyle_MenuItemStyle_Offset = offsetof(UTslMenuItemWidgetStyle, MenuItemStyle);
	static_assert(UTslMenuItemWidgetStyle_MenuItemStyle_Offset == 0x38, "UTslMenuItemWidgetStyle::MenuItemStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
