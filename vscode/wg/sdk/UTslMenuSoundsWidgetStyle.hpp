#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FTslMenuSoundsStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslMenuSoundsWidgetStyle // Size: 0x70
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UTslMenuSoundsWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1429); // id32("Class TslGame.TslMenuSoundsWidgetStyle")
		return ptr;
	}
	FTslMenuSoundsStyle SoundsStyle; /* Ofs: 0x38 Size: 0x38 - StructProperty TslGame.TslMenuSoundsWidgetStyle.SoundsStyle */


	inline bool SetSoundsStyle(t_structHelper inst, FTslMenuSoundsStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslMenuSoundsWidgetStyle = sizeof(UTslMenuSoundsWidgetStyle); // 112
    static_assert(sizeof(UTslMenuSoundsWidgetStyle) == 0x70, "Size of UTslMenuSoundsWidgetStyle is not correct.");
	auto constexpr UTslMenuSoundsWidgetStyle_SoundsStyle_Offset = offsetof(UTslMenuSoundsWidgetStyle, SoundsStyle);
	static_assert(UTslMenuSoundsWidgetStyle_SoundsStyle_Offset == 0x38, "UTslMenuSoundsWidgetStyle::SoundsStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
