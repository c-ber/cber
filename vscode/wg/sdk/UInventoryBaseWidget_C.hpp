#pragma once
#include "UTslUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInventoryBaseWidget_C // Size: 0x2A0
	: public UTslUserWidget // Size: 0x288
{
private:
	typedef UInventoryBaseWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(61237); // id32("WidgetBlueprintGeneratedClass InventoryBaseWidget.InventoryBaseWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x288 Size: 0x8 - StructProperty InventoryBaseWidget.InventoryBaseWidget_C.UberGraphFrame */
	FScriptMulticastDelegate RefreshFocus; /* Ofs: 0x290 Size: 0x10 - MulticastDelegateProperty InventoryBaseWidget.InventoryBaseWidget_C.RefreshFocus */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x288, value); }
	inline bool SetRefreshFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInventoryBaseWidget_C = sizeof(UInventoryBaseWidget_C); // 672
    static_assert(sizeof(UInventoryBaseWidget_C) == 0x2A0, "Size of UInventoryBaseWidget_C is not correct.");
	auto constexpr UInventoryBaseWidget_C_UberGraphFrame_Offset = offsetof(UInventoryBaseWidget_C, UberGraphFrame);
	static_assert(UInventoryBaseWidget_C_UberGraphFrame_Offset == 0x288, "UInventoryBaseWidget_C::UberGraphFrame offset is not 288");
	auto constexpr UInventoryBaseWidget_C_RefreshFocus_Offset = offsetof(UInventoryBaseWidget_C, RefreshFocus);
	static_assert(UInventoryBaseWidget_C_RefreshFocus_Offset == 0x290, "UInventoryBaseWidget_C::RefreshFocus offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
