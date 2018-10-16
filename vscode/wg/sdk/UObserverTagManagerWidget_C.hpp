#pragma once
#include "UObserverTagManagerBaseWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UObserverTagManagerWidget_C // Size: 0x2C8
	: public UObserverTagManagerBaseWidget // Size: 0x2C0
{
private:
	typedef UObserverTagManagerWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(196014); // id32("WidgetBlueprintGeneratedClass ObserverTagManagerWidget.ObserverTagManagerWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x2C0 Size: 0x8 - StructProperty ObserverTagManagerWidget.ObserverTagManagerWidget_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x2C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUObserverTagManagerWidget_C = sizeof(UObserverTagManagerWidget_C); // 712
    static_assert(sizeof(UObserverTagManagerWidget_C) == 0x2C8, "Size of UObserverTagManagerWidget_C is not correct.");
	auto constexpr UObserverTagManagerWidget_C_UberGraphFrame_Offset = offsetof(UObserverTagManagerWidget_C, UberGraphFrame);
	static_assert(UObserverTagManagerWidget_C_UberGraphFrame_Offset == 0x2c0, "UObserverTagManagerWidget_C::UberGraphFrame offset is not 2c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
