#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNewCastingBarWidget_C // Size: 0x284
	: public UUserWidget // Size: 0x248
{
private:
	typedef UNewCastingBarWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(167945); // id32("WidgetBlueprintGeneratedClass NewCastingBarWidget.NewCastingBarWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty NewCastingBarWidget.NewCastingBarWidget_C.UberGraphFrame */
	ExternalPtr<struct UCanvasPanel> CastingBarCanvas; /* Ofs: 0x250 Size: 0x8 - ObjectProperty NewCastingBarWidget.NewCastingBarWidget_C.CastingBarCanvas */
	ExternalPtr<struct UCastingBarInfoTextWidget_C> CastingBarInfoText; /* Ofs: 0x258 Size: 0x8 - ObjectProperty NewCastingBarWidget.NewCastingBarWidget_C.CastingBarInfoText */
	ExternalPtr<struct UImage> CircleProgress; /* Ofs: 0x260 Size: 0x8 - ObjectProperty NewCastingBarWidget.NewCastingBarWidget_C.CircleProgress */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x268 Size: 0x8 - ObjectProperty NewCastingBarWidget.NewCastingBarWidget_C.Image_1 */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x270 Size: 0x8 - ObjectProperty NewCastingBarWidget.NewCastingBarWidget_C.TextBlock_1 */
	ExternalPtr<struct UMaterialInstanceDynamic> CircleProgressMaterial; /* Ofs: 0x278 Size: 0x8 - ObjectProperty NewCastingBarWidget.NewCastingBarWidget_C.CircleProgressMaterial */
	float InteractionHoldStart; /* Ofs: 0x280 Size: 0x4 - FloatProperty NewCastingBarWidget.NewCastingBarWidget_C.InteractionHoldStart */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetCastingBarCanvas(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x250, value); }
	inline bool SetCastingBarInfoText(t_structHelper inst, ExternalPtr<struct UCastingBarInfoTextWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetCircleProgress(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x260, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x268, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetCircleProgressMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x278, value); }
	inline bool SetInteractionHoldStart(t_structHelper inst, float value) { inst.WriteOffset(0x280, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNewCastingBarWidget_C = sizeof(UNewCastingBarWidget_C); // 644
    static_assert(sizeof(UNewCastingBarWidget_C) == 0x284, "Size of UNewCastingBarWidget_C is not correct.");
	auto constexpr UNewCastingBarWidget_C_UberGraphFrame_Offset = offsetof(UNewCastingBarWidget_C, UberGraphFrame);
	static_assert(UNewCastingBarWidget_C_UberGraphFrame_Offset == 0x248, "UNewCastingBarWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UNewCastingBarWidget_C_CastingBarCanvas_Offset = offsetof(UNewCastingBarWidget_C, CastingBarCanvas);
	static_assert(UNewCastingBarWidget_C_CastingBarCanvas_Offset == 0x250, "UNewCastingBarWidget_C::CastingBarCanvas offset is not 250");
	auto constexpr UNewCastingBarWidget_C_CastingBarInfoText_Offset = offsetof(UNewCastingBarWidget_C, CastingBarInfoText);
	static_assert(UNewCastingBarWidget_C_CastingBarInfoText_Offset == 0x258, "UNewCastingBarWidget_C::CastingBarInfoText offset is not 258");
	auto constexpr UNewCastingBarWidget_C_CircleProgress_Offset = offsetof(UNewCastingBarWidget_C, CircleProgress);
	static_assert(UNewCastingBarWidget_C_CircleProgress_Offset == 0x260, "UNewCastingBarWidget_C::CircleProgress offset is not 260");
	auto constexpr UNewCastingBarWidget_C_Image_1_Offset = offsetof(UNewCastingBarWidget_C, Image_1);
	static_assert(UNewCastingBarWidget_C_Image_1_Offset == 0x268, "UNewCastingBarWidget_C::Image_1 offset is not 268");
	auto constexpr UNewCastingBarWidget_C_TextBlock_1_Offset = offsetof(UNewCastingBarWidget_C, TextBlock_1);
	static_assert(UNewCastingBarWidget_C_TextBlock_1_Offset == 0x270, "UNewCastingBarWidget_C::TextBlock_1 offset is not 270");
	auto constexpr UNewCastingBarWidget_C_CircleProgressMaterial_Offset = offsetof(UNewCastingBarWidget_C, CircleProgressMaterial);
	static_assert(UNewCastingBarWidget_C_CircleProgressMaterial_Offset == 0x278, "UNewCastingBarWidget_C::CircleProgressMaterial offset is not 278");
	auto constexpr UNewCastingBarWidget_C_InteractionHoldStart_Offset = offsetof(UNewCastingBarWidget_C, InteractionHoldStart);
	static_assert(UNewCastingBarWidget_C_InteractionHoldStart_Offset == 0x280, "UNewCastingBarWidget_C::InteractionHoldStart offset is not 280");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
