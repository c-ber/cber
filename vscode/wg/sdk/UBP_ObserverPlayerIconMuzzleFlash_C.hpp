#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_ObserverPlayerIconMuzzleFlash_C // Size: 0x260
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBP_ObserverPlayerIconMuzzleFlash_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(64484); // id32("WidgetBlueprintGeneratedClass BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> MuzzleFlashPlay; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.MuzzleFlashPlay */
	ExternalPtr<struct UImage> Image_MuzzleFlash; /* Ofs: 0x258 Size: 0x8 - ObjectProperty BP_ObserverPlayerIconMuzzleFlash.BP_ObserverPlayerIconMuzzleFlash_C.Image_MuzzleFlash */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetMuzzleFlashPlay(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetImage_MuzzleFlash(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_ObserverPlayerIconMuzzleFlash_C = sizeof(UBP_ObserverPlayerIconMuzzleFlash_C); // 608
    static_assert(sizeof(UBP_ObserverPlayerIconMuzzleFlash_C) == 0x260, "Size of UBP_ObserverPlayerIconMuzzleFlash_C is not correct.");
	auto constexpr UBP_ObserverPlayerIconMuzzleFlash_C_UberGraphFrame_Offset = offsetof(UBP_ObserverPlayerIconMuzzleFlash_C, UberGraphFrame);
	static_assert(UBP_ObserverPlayerIconMuzzleFlash_C_UberGraphFrame_Offset == 0x248, "UBP_ObserverPlayerIconMuzzleFlash_C::UberGraphFrame offset is not 248");
	auto constexpr UBP_ObserverPlayerIconMuzzleFlash_C_MuzzleFlashPlay_Offset = offsetof(UBP_ObserverPlayerIconMuzzleFlash_C, MuzzleFlashPlay);
	static_assert(UBP_ObserverPlayerIconMuzzleFlash_C_MuzzleFlashPlay_Offset == 0x250, "UBP_ObserverPlayerIconMuzzleFlash_C::MuzzleFlashPlay offset is not 250");
	auto constexpr UBP_ObserverPlayerIconMuzzleFlash_C_Image_MuzzleFlash_Offset = offsetof(UBP_ObserverPlayerIconMuzzleFlash_C, Image_MuzzleFlash);
	static_assert(UBP_ObserverPlayerIconMuzzleFlash_C_Image_MuzzleFlash_Offset == 0x258, "UBP_ObserverPlayerIconMuzzleFlash_C::Image_MuzzleFlash offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
