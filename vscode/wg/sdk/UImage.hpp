#pragma once
#include "UWidget.hpp"
#include "FSlateBrush.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UImage // Size: 0x218
	: public UWidget // Size: 0x130
{
private:
	typedef UImage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(491); // id32("Class UMG.Image")
		return ptr;
	}
	ExternalPtr<struct USlateBrushAsset> Image; /* Ofs: 0x130 Size: 0x8 - ObjectProperty UMG.Image.Image */
	FSlateBrush Brush; /* Ofs: 0x138 Size: 0x90 - StructProperty UMG.Image.Brush */
	FScriptDelegate BrushDelegate; /* Ofs: 0x1C8 Size: 0x10 - DelegateProperty UMG.Image.BrushDelegate */
	FLinearColor ColorAndOpacity; /* Ofs: 0x1D8 Size: 0x10 - StructProperty UMG.Image.ColorAndOpacity */
	FScriptDelegate ColorAndOpacityDelegate; /* Ofs: 0x1E8 Size: 0x10 - DelegateProperty UMG.Image.ColorAndOpacityDelegate */
	FScriptDelegate OnMouseButtonDownEvent; /* Ofs: 0x1F8 Size: 0x10 - DelegateProperty UMG.Image.OnMouseButtonDownEvent */
	uint8_t UnknownData208[0x10];


	inline bool SetImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x130, value); }
	inline bool SetBrush(t_structHelper inst, FSlateBrush value) { inst.WriteOffset(0x138, value); }
	inline bool SetBrushDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetColorAndOpacity(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x1D8, value); }
	inline bool SetColorAndOpacityDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetOnMouseButtonDownEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x1F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUImage = sizeof(UImage); // 536
    static_assert(sizeof(UImage) == 0x218, "Size of UImage is not correct.");
	auto constexpr UImage_Image_Offset = offsetof(UImage, Image);
	static_assert(UImage_Image_Offset == 0x130, "UImage::Image offset is not 130");
	auto constexpr UImage_Brush_Offset = offsetof(UImage, Brush);
	static_assert(UImage_Brush_Offset == 0x138, "UImage::Brush offset is not 138");
	auto constexpr UImage_BrushDelegate_Offset = offsetof(UImage, BrushDelegate);
	static_assert(UImage_BrushDelegate_Offset == 0x1c8, "UImage::BrushDelegate offset is not 1c8");
	auto constexpr UImage_ColorAndOpacity_Offset = offsetof(UImage, ColorAndOpacity);
	static_assert(UImage_ColorAndOpacity_Offset == 0x1d8, "UImage::ColorAndOpacity offset is not 1d8");
	auto constexpr UImage_ColorAndOpacityDelegate_Offset = offsetof(UImage, ColorAndOpacityDelegate);
	static_assert(UImage_ColorAndOpacityDelegate_Offset == 0x1e8, "UImage::ColorAndOpacityDelegate offset is not 1e8");
	auto constexpr UImage_OnMouseButtonDownEvent_Offset = offsetof(UImage, OnMouseButtonDownEvent);
	static_assert(UImage_OnMouseButtonDownEvent_Offset == 0x1f8, "UImage::OnMouseButtonDownEvent offset is not 1f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
