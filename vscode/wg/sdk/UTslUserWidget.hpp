#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslUserWidget // Size: 0x288
	: public UUserWidget // Size: 0x248
{
private:
	typedef UTslUserWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1420); // id32("Class TslGame.TslUserWidget")
		return ptr;
	}
	ExternalPtr<struct UInputComponent> InputComponentAxis; /* Ofs: 0x248 Size: 0x8 - ObjectProperty TslGame.TslUserWidget.InputComponentAxis */
	ExternalPtr<struct UTslCharacter> CachedTslCharacter; /* Ofs: 0x250 Size: 0x8 - ObjectProperty TslGame.TslUserWidget.CachedTslCharacter */
	ExternalPtr<struct UTslGameState> CachedTslGameState; /* Ofs: 0x258 Size: 0x8 - ObjectProperty TslGame.TslUserWidget.CachedTslGameState */
	ExternalPtr<struct UTslCharacter> CachedViewTargetTslCharacter; /* Ofs: 0x260 Size: 0x8 - ObjectProperty TslGame.TslUserWidget.CachedViewTargetTslCharacter */
	uint8_t UnknownData268[0x10];
	FScriptMulticastDelegate WidgetDestroyEventDelegate; /* Ofs: 0x278 Size: 0x10 - MulticastDelegateProperty TslGame.TslUserWidget.WidgetDestroyEventDelegate */


	inline bool SetInputComponentAxis(t_structHelper inst, ExternalPtr<struct UInputComponent> value) { inst.WriteOffset(0x248, value); }
	inline bool SetCachedTslCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x250, value); }
	inline bool SetCachedTslGameState(t_structHelper inst, ExternalPtr<struct UTslGameState> value) { inst.WriteOffset(0x258, value); }
	inline bool SetCachedViewTargetTslCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x260, value); }
	inline bool SetWidgetDestroyEventDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x278, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslUserWidget = sizeof(UTslUserWidget); // 648
    static_assert(sizeof(UTslUserWidget) == 0x288, "Size of UTslUserWidget is not correct.");
	auto constexpr UTslUserWidget_InputComponentAxis_Offset = offsetof(UTslUserWidget, InputComponentAxis);
	static_assert(UTslUserWidget_InputComponentAxis_Offset == 0x248, "UTslUserWidget::InputComponentAxis offset is not 248");
	auto constexpr UTslUserWidget_CachedTslCharacter_Offset = offsetof(UTslUserWidget, CachedTslCharacter);
	static_assert(UTslUserWidget_CachedTslCharacter_Offset == 0x250, "UTslUserWidget::CachedTslCharacter offset is not 250");
	auto constexpr UTslUserWidget_CachedTslGameState_Offset = offsetof(UTslUserWidget, CachedTslGameState);
	static_assert(UTslUserWidget_CachedTslGameState_Offset == 0x258, "UTslUserWidget::CachedTslGameState offset is not 258");
	auto constexpr UTslUserWidget_CachedViewTargetTslCharacter_Offset = offsetof(UTslUserWidget, CachedViewTargetTslCharacter);
	static_assert(UTslUserWidget_CachedViewTargetTslCharacter_Offset == 0x260, "UTslUserWidget::CachedViewTargetTslCharacter offset is not 260");
	auto constexpr UTslUserWidget_WidgetDestroyEventDelegate_Offset = offsetof(UTslUserWidget, WidgetDestroyEventDelegate);
	static_assert(UTslUserWidget_WidgetDestroyEventDelegate_Offset == 0x278, "UTslUserWidget::WidgetDestroyEventDelegate offset is not 278");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
