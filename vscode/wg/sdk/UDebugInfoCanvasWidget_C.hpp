#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDebugInfoCanvasWidget_C // Size: 0x258
	: public UUserWidget // Size: 0x248
{
private:
	typedef UDebugInfoCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69616); // id32("WidgetBlueprintGeneratedClass DebugInfoCanvasWidget.DebugInfoCanvasWidget_C")
		return ptr;
	}
	ExternalPtr<struct UBorder> Border_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty DebugInfoCanvasWidget.DebugInfoCanvasWidget_C.Border_1 */
	ExternalPtr<struct UTextBlock> DebugText; /* Ofs: 0x250 Size: 0x8 - ObjectProperty DebugInfoCanvasWidget.DebugInfoCanvasWidget_C.DebugText */


	inline bool SetBorder_1(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x248, value); }
	inline bool SetDebugText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDebugInfoCanvasWidget_C = sizeof(UDebugInfoCanvasWidget_C); // 600
    static_assert(sizeof(UDebugInfoCanvasWidget_C) == 0x258, "Size of UDebugInfoCanvasWidget_C is not correct.");
	auto constexpr UDebugInfoCanvasWidget_C_Border_1_Offset = offsetof(UDebugInfoCanvasWidget_C, Border_1);
	static_assert(UDebugInfoCanvasWidget_C_Border_1_Offset == 0x248, "UDebugInfoCanvasWidget_C::Border_1 offset is not 248");
	auto constexpr UDebugInfoCanvasWidget_C_DebugText_Offset = offsetof(UDebugInfoCanvasWidget_C, DebugText);
	static_assert(UDebugInfoCanvasWidget_C_DebugText_Offset == 0x250, "UDebugInfoCanvasWidget_C::DebugText offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
