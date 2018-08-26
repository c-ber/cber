#pragma once
#include "UCoherentUIGTWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCoherentWidget // Size: 0x4A0
	: public UCoherentUIGTWidget // Size: 0x490
{
private:
	typedef UTslCoherentWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1352); // id32("Class TslGame.TslCoherentWidget")
		return ptr;
	}
	ExternalPtr<struct UClass> WidgetBinderClass; /* Ofs: 0x490 Size: 0x8 - ClassProperty TslGame.TslCoherentWidget.WidgetBinderClass */
	ExternalPtr<struct UCoherentWidgetBinder> WidgetBinder; /* Ofs: 0x498 Size: 0x8 - ObjectProperty TslGame.TslCoherentWidget.WidgetBinder */


	inline bool SetWidgetBinderClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x490, value); }
	inline bool SetWidgetBinder(t_structHelper inst, ExternalPtr<struct UCoherentWidgetBinder> value) { inst.WriteOffset(0x498, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCoherentWidget = sizeof(UTslCoherentWidget); // 1184
    static_assert(sizeof(UTslCoherentWidget) == 0x4A0, "Size of UTslCoherentWidget is not correct.");
	auto constexpr UTslCoherentWidget_WidgetBinderClass_Offset = offsetof(UTslCoherentWidget, WidgetBinderClass);
	static_assert(UTslCoherentWidget_WidgetBinderClass_Offset == 0x490, "UTslCoherentWidget::WidgetBinderClass offset is not 490");
	auto constexpr UTslCoherentWidget_WidgetBinder_Offset = offsetof(UTslCoherentWidget, WidgetBinder);
	static_assert(UTslCoherentWidget_WidgetBinder_Offset == 0x498, "UTslCoherentWidget::WidgetBinder offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
