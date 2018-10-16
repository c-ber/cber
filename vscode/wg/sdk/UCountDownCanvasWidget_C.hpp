#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCountDownCanvasWidget_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef UCountDownCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(191355); // id32("WidgetBlueprintGeneratedClass CountDownCanvasWidget.CountDownCanvasWidget_C")
		return ptr;
	}
	ExternalPtr<struct UCountDownWidget_C> CountDownWidget; /* Ofs: 0x248 Size: 0x8 - ObjectProperty CountDownCanvasWidget.CountDownCanvasWidget_C.CountDownWidget */


	inline bool SetCountDownWidget(t_structHelper inst, ExternalPtr<struct UCountDownWidget_C> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCountDownCanvasWidget_C = sizeof(UCountDownCanvasWidget_C); // 592
    static_assert(sizeof(UCountDownCanvasWidget_C) == 0x250, "Size of UCountDownCanvasWidget_C is not correct.");
	auto constexpr UCountDownCanvasWidget_C_CountDownWidget_Offset = offsetof(UCountDownCanvasWidget_C, CountDownWidget);
	static_assert(UCountDownCanvasWidget_C_CountDownWidget_Offset == 0x248, "UCountDownCanvasWidget_C::CountDownWidget offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
