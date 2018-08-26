#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_ObserverPlayerIconHitEffect_C // Size: 0x260
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBP_ObserverPlayerIconHitEffect_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67614); // id32("WidgetBlueprintGeneratedClass BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> HitEffectPlay; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.HitEffectPlay */
	ExternalPtr<struct UImage> Image_HitEffect; /* Ofs: 0x258 Size: 0x8 - ObjectProperty BP_ObserverPlayerIconHitEffect.BP_ObserverPlayerIconHitEffect_C.Image_HitEffect */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetHitEffectPlay(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetImage_HitEffect(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_ObserverPlayerIconHitEffect_C = sizeof(UBP_ObserverPlayerIconHitEffect_C); // 608
    static_assert(sizeof(UBP_ObserverPlayerIconHitEffect_C) == 0x260, "Size of UBP_ObserverPlayerIconHitEffect_C is not correct.");
	auto constexpr UBP_ObserverPlayerIconHitEffect_C_UberGraphFrame_Offset = offsetof(UBP_ObserverPlayerIconHitEffect_C, UberGraphFrame);
	static_assert(UBP_ObserverPlayerIconHitEffect_C_UberGraphFrame_Offset == 0x248, "UBP_ObserverPlayerIconHitEffect_C::UberGraphFrame offset is not 248");
	auto constexpr UBP_ObserverPlayerIconHitEffect_C_HitEffectPlay_Offset = offsetof(UBP_ObserverPlayerIconHitEffect_C, HitEffectPlay);
	static_assert(UBP_ObserverPlayerIconHitEffect_C_HitEffectPlay_Offset == 0x250, "UBP_ObserverPlayerIconHitEffect_C::HitEffectPlay offset is not 250");
	auto constexpr UBP_ObserverPlayerIconHitEffect_C_Image_HitEffect_Offset = offsetof(UBP_ObserverPlayerIconHitEffect_C, Image_HitEffect);
	static_assert(UBP_ObserverPlayerIconHitEffect_C_Image_HitEffect_Offset == 0x258, "UBP_ObserverPlayerIconHitEffect_C::Image_HitEffect offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
