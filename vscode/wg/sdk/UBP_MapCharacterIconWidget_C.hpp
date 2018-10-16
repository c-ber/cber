#pragma once
#include "UMapCharacterIconBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_MapCharacterIconWidget_C // Size: 0x608
	: public UMapCharacterIconBaseWidget // Size: 0x5C0
{
private:
	typedef UBP_MapCharacterIconWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67651); // id32("WidgetBlueprintGeneratedClass BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> NewAnimation_2; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C.NewAnimation_2 */
	ExternalPtr<struct UWidgetAnimation> FadeOut; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C.FadeOut */
	ExternalPtr<struct UWidgetAnimation> GroggyWarning; /* Ofs: 0x5D0 Size: 0x8 - ObjectProperty BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C.GroggyWarning */
	ExternalPtr<struct UWidgetAnimation> Hitted; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C.Hitted */
	ExternalPtr<struct UWidgetAnimation> Attacked; /* Ofs: 0x5E0 Size: 0x8 - ObjectProperty BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C.Attacked */
	ExternalPtr<struct UImage> HitEffectImage; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C.HitEffectImage */
	ExternalPtr<struct UImage> NameTagColorImg; /* Ofs: 0x5F0 Size: 0x8 - ObjectProperty BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C.NameTagColorImg */
	ExternalPtr<struct UBP_ObserverPlayerIconMuzzleFlash_C> ObserverPlayerIconMuzzleFlash; /* Ofs: 0x5F8 Size: 0x8 - ObjectProperty BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C.ObserverPlayerIconMuzzleFlash */
	ExternalPtr<struct UImage> SpectatedIcon; /* Ofs: 0x600 Size: 0x8 - ObjectProperty BP_MapCharacterIconWidget.BP_MapCharacterIconWidget_C.SpectatedIcon */


	inline bool SetNewAnimation_2(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetGroggyWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetHitted(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetAttacked(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetHitEffectImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetNameTagColorImg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetObserverPlayerIconMuzzleFlash(t_structHelper inst, ExternalPtr<struct UBP_ObserverPlayerIconMuzzleFlash_C> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetSpectatedIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x600, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_MapCharacterIconWidget_C = sizeof(UBP_MapCharacterIconWidget_C); // 1544
    static_assert(sizeof(UBP_MapCharacterIconWidget_C) == 0x608, "Size of UBP_MapCharacterIconWidget_C is not correct.");
	auto constexpr UBP_MapCharacterIconWidget_C_NewAnimation_2_Offset = offsetof(UBP_MapCharacterIconWidget_C, NewAnimation_2);
	static_assert(UBP_MapCharacterIconWidget_C_NewAnimation_2_Offset == 0x5c0, "UBP_MapCharacterIconWidget_C::NewAnimation_2 offset is not 5c0");
	auto constexpr UBP_MapCharacterIconWidget_C_FadeOut_Offset = offsetof(UBP_MapCharacterIconWidget_C, FadeOut);
	static_assert(UBP_MapCharacterIconWidget_C_FadeOut_Offset == 0x5c8, "UBP_MapCharacterIconWidget_C::FadeOut offset is not 5c8");
	auto constexpr UBP_MapCharacterIconWidget_C_GroggyWarning_Offset = offsetof(UBP_MapCharacterIconWidget_C, GroggyWarning);
	static_assert(UBP_MapCharacterIconWidget_C_GroggyWarning_Offset == 0x5d0, "UBP_MapCharacterIconWidget_C::GroggyWarning offset is not 5d0");
	auto constexpr UBP_MapCharacterIconWidget_C_Hitted_Offset = offsetof(UBP_MapCharacterIconWidget_C, Hitted);
	static_assert(UBP_MapCharacterIconWidget_C_Hitted_Offset == 0x5d8, "UBP_MapCharacterIconWidget_C::Hitted offset is not 5d8");
	auto constexpr UBP_MapCharacterIconWidget_C_Attacked_Offset = offsetof(UBP_MapCharacterIconWidget_C, Attacked);
	static_assert(UBP_MapCharacterIconWidget_C_Attacked_Offset == 0x5e0, "UBP_MapCharacterIconWidget_C::Attacked offset is not 5e0");
	auto constexpr UBP_MapCharacterIconWidget_C_HitEffectImage_Offset = offsetof(UBP_MapCharacterIconWidget_C, HitEffectImage);
	static_assert(UBP_MapCharacterIconWidget_C_HitEffectImage_Offset == 0x5e8, "UBP_MapCharacterIconWidget_C::HitEffectImage offset is not 5e8");
	auto constexpr UBP_MapCharacterIconWidget_C_NameTagColorImg_Offset = offsetof(UBP_MapCharacterIconWidget_C, NameTagColorImg);
	static_assert(UBP_MapCharacterIconWidget_C_NameTagColorImg_Offset == 0x5f0, "UBP_MapCharacterIconWidget_C::NameTagColorImg offset is not 5f0");
	auto constexpr UBP_MapCharacterIconWidget_C_ObserverPlayerIconMuzzleFlash_Offset = offsetof(UBP_MapCharacterIconWidget_C, ObserverPlayerIconMuzzleFlash);
	static_assert(UBP_MapCharacterIconWidget_C_ObserverPlayerIconMuzzleFlash_Offset == 0x5f8, "UBP_MapCharacterIconWidget_C::ObserverPlayerIconMuzzleFlash offset is not 5f8");
	auto constexpr UBP_MapCharacterIconWidget_C_SpectatedIcon_Offset = offsetof(UBP_MapCharacterIconWidget_C, SpectatedIcon);
	static_assert(UBP_MapCharacterIconWidget_C_SpectatedIcon_Offset == 0x600, "UBP_MapCharacterIconWidget_C::SpectatedIcon offset is not 600");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
