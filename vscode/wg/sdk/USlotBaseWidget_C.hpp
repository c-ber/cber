#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlotBaseWidget_C // Size: 0x258
	: public UUserWidget // Size: 0x248
{
private:
	typedef USlotBaseWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(64569); // id32("WidgetBlueprintGeneratedClass SlotBaseWidget.SlotBaseWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty SlotBaseWidget.SlotBaseWidget_C.UberGraphFrame */
	ExternalPtr<struct UAkAudioEvent> MouseOverSound; /* Ofs: 0x250 Size: 0x8 - ObjectProperty SlotBaseWidget.SlotBaseWidget_C.MouseOverSound */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetMouseOverSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlotBaseWidget_C = sizeof(USlotBaseWidget_C); // 600
    static_assert(sizeof(USlotBaseWidget_C) == 0x258, "Size of USlotBaseWidget_C is not correct.");
	auto constexpr USlotBaseWidget_C_UberGraphFrame_Offset = offsetof(USlotBaseWidget_C, UberGraphFrame);
	static_assert(USlotBaseWidget_C_UberGraphFrame_Offset == 0x248, "USlotBaseWidget_C::UberGraphFrame offset is not 248");
	auto constexpr USlotBaseWidget_C_MouseOverSound_Offset = offsetof(USlotBaseWidget_C, MouseOverSound);
	static_assert(USlotBaseWidget_C_MouseOverSound_Offset == 0x250, "USlotBaseWidget_C::MouseOverSound offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
