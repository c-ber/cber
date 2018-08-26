#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHitNotifyWidget_C // Size: 0x294
	: public UUserWidget // Size: 0x248
{
private:
	typedef UHitNotifyWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69420); // id32("WidgetBlueprintGeneratedClass HitNotifyWidget.HitNotifyWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty HitNotifyWidget.HitNotifyWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> FadeOut; /* Ofs: 0x250 Size: 0x8 - ObjectProperty HitNotifyWidget.HitNotifyWidget_C.FadeOut */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_3; /* Ofs: 0x258 Size: 0x8 - ObjectProperty HitNotifyWidget.HitNotifyWidget_C.CanvasPanel_3 */
	ExternalPtr<struct UImage> Image_3; /* Ofs: 0x260 Size: 0x8 - ObjectProperty HitNotifyWidget.HitNotifyWidget_C.Image_3 */
	ExternalPtr<struct UMaterialInstanceDynamic> MaskMaterialInstance; /* Ofs: 0x268 Size: 0x8 - ObjectProperty HitNotifyWidget.HitNotifyWidget_C.MaskMaterialInstance */
	ExternalPtr<struct UAkAudioEvent> HitNotifyManSoundAk; /* Ofs: 0x270 Size: 0x8 - ObjectProperty HitNotifyWidget.HitNotifyWidget_C.HitNotifyManSoundAk */
	ExternalPtr<struct UAkAudioEvent> HitNotifyWomanSoundAk; /* Ofs: 0x278 Size: 0x8 - ObjectProperty HitNotifyWidget.HitNotifyWidget_C.HitNotifyWomanSoundAk */
	TArray<ExternalPtr<struct UBloodSpotWidget_C>> BloodSpotWidgetInstances; /* Ofs: 0x280 Size: 0x10 - ArrayProperty HitNotifyWidget.HitNotifyWidget_C.BloodSpotWidgetInstances */
	int32_t BloodSpotCurrentIndex; /* Ofs: 0x290 Size: 0x4 - IntProperty HitNotifyWidget.HitNotifyWidget_C.BloodSpotCurrentIndex */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetCanvasPanel_3(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x258, value); }
	inline bool SetImage_3(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x260, value); }
	inline bool SetMaskMaterialInstance(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x268, value); }
	inline bool SetHitNotifyManSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x270, value); }
	inline bool SetHitNotifyWomanSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x278, value); }
	inline bool SetBloodSpotWidgetInstances(t_structHelper inst, TArray<ExternalPtr<struct UBloodSpotWidget_C>> value) { inst.WriteOffset(0x280, value); }
	inline bool SetBloodSpotCurrentIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHitNotifyWidget_C = sizeof(UHitNotifyWidget_C); // 660
    static_assert(sizeof(UHitNotifyWidget_C) == 0x294, "Size of UHitNotifyWidget_C is not correct.");
	auto constexpr UHitNotifyWidget_C_UberGraphFrame_Offset = offsetof(UHitNotifyWidget_C, UberGraphFrame);
	static_assert(UHitNotifyWidget_C_UberGraphFrame_Offset == 0x248, "UHitNotifyWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UHitNotifyWidget_C_FadeOut_Offset = offsetof(UHitNotifyWidget_C, FadeOut);
	static_assert(UHitNotifyWidget_C_FadeOut_Offset == 0x250, "UHitNotifyWidget_C::FadeOut offset is not 250");
	auto constexpr UHitNotifyWidget_C_CanvasPanel_3_Offset = offsetof(UHitNotifyWidget_C, CanvasPanel_3);
	static_assert(UHitNotifyWidget_C_CanvasPanel_3_Offset == 0x258, "UHitNotifyWidget_C::CanvasPanel_3 offset is not 258");
	auto constexpr UHitNotifyWidget_C_Image_3_Offset = offsetof(UHitNotifyWidget_C, Image_3);
	static_assert(UHitNotifyWidget_C_Image_3_Offset == 0x260, "UHitNotifyWidget_C::Image_3 offset is not 260");
	auto constexpr UHitNotifyWidget_C_MaskMaterialInstance_Offset = offsetof(UHitNotifyWidget_C, MaskMaterialInstance);
	static_assert(UHitNotifyWidget_C_MaskMaterialInstance_Offset == 0x268, "UHitNotifyWidget_C::MaskMaterialInstance offset is not 268");
	auto constexpr UHitNotifyWidget_C_HitNotifyManSoundAk_Offset = offsetof(UHitNotifyWidget_C, HitNotifyManSoundAk);
	static_assert(UHitNotifyWidget_C_HitNotifyManSoundAk_Offset == 0x270, "UHitNotifyWidget_C::HitNotifyManSoundAk offset is not 270");
	auto constexpr UHitNotifyWidget_C_HitNotifyWomanSoundAk_Offset = offsetof(UHitNotifyWidget_C, HitNotifyWomanSoundAk);
	static_assert(UHitNotifyWidget_C_HitNotifyWomanSoundAk_Offset == 0x278, "UHitNotifyWidget_C::HitNotifyWomanSoundAk offset is not 278");
	auto constexpr UHitNotifyWidget_C_BloodSpotWidgetInstances_Offset = offsetof(UHitNotifyWidget_C, BloodSpotWidgetInstances);
	static_assert(UHitNotifyWidget_C_BloodSpotWidgetInstances_Offset == 0x280, "UHitNotifyWidget_C::BloodSpotWidgetInstances offset is not 280");
	auto constexpr UHitNotifyWidget_C_BloodSpotCurrentIndex_Offset = offsetof(UHitNotifyWidget_C, BloodSpotCurrentIndex);
	static_assert(UHitNotifyWidget_C_BloodSpotCurrentIndex_Offset == 0x290, "UHitNotifyWidget_C::BloodSpotCurrentIndex offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
