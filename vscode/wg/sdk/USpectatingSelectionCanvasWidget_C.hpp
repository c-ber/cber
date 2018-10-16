#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpectatingSelectionCanvasWidget_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef USpectatingSelectionCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(195580); // id32("WidgetBlueprintGeneratedClass SpectatingSelectionCanvasWidget.SpectatingSelectionCanvasWidget_C")
		return ptr;
	}
	ExternalPtr<struct USpectatingSelectionWidget_C> SpectatingSelectionWidget_48; /* Ofs: 0x248 Size: 0x8 - ObjectProperty SpectatingSelectionCanvasWidget.SpectatingSelectionCanvasWidget_C.SpectatingSelectionWidget_48 */


	inline bool SetSpectatingSelectionWidget_48(t_structHelper inst, ExternalPtr<struct USpectatingSelectionWidget_C> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpectatingSelectionCanvasWidget_C = sizeof(USpectatingSelectionCanvasWidget_C); // 592
    static_assert(sizeof(USpectatingSelectionCanvasWidget_C) == 0x250, "Size of USpectatingSelectionCanvasWidget_C is not correct.");
	auto constexpr USpectatingSelectionCanvasWidget_C_SpectatingSelectionWidget_48_Offset = offsetof(USpectatingSelectionCanvasWidget_C, SpectatingSelectionWidget_48);
	static_assert(USpectatingSelectionCanvasWidget_C_SpectatingSelectionWidget_48_Offset == 0x248, "USpectatingSelectionCanvasWidget_C::SpectatingSelectionWidget_48 offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
