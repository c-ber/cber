#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplayCanvasWidget_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef UReplayCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(195907); // id32("WidgetBlueprintGeneratedClass ReplayCanvasWidget.ReplayCanvasWidget_C")
		return ptr;
	}
	ExternalPtr<struct UObserverTagManagerWidget_C> ObserverTagManagerWidget; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ReplayCanvasWidget.ReplayCanvasWidget_C.ObserverTagManagerWidget */


	inline bool SetObserverTagManagerWidget(t_structHelper inst, ExternalPtr<struct UObserverTagManagerWidget_C> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplayCanvasWidget_C = sizeof(UReplayCanvasWidget_C); // 592
    static_assert(sizeof(UReplayCanvasWidget_C) == 0x250, "Size of UReplayCanvasWidget_C is not correct.");
	auto constexpr UReplayCanvasWidget_C_ObserverTagManagerWidget_Offset = offsetof(UReplayCanvasWidget_C, ObserverTagManagerWidget);
	static_assert(UReplayCanvasWidget_C_ObserverTagManagerWidget_Offset == 0x248, "UReplayCanvasWidget_C::ObserverTagManagerWidget offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
