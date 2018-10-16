#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_Image // Size: 0x28
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UImage> CachedImage; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_Image.CachedImage */
    ExternalPtr<struct UMaterialInstanceDynamic> CachedMaterial; /* Ofs: 0x20 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_Image.CachedMaterial */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_Image = sizeof(FUmgWidgetBinder_Image); // 40
    static_assert(sizeof(FUmgWidgetBinder_Image) == 0x28, "Size of FUmgWidgetBinder_Image is not correct.");
	auto constexpr FUmgWidgetBinder_Image_CachedImage_Offset = offsetof(FUmgWidgetBinder_Image, CachedImage);
	static_assert(FUmgWidgetBinder_Image_CachedImage_Offset == 0x18, "FUmgWidgetBinder_Image::CachedImage offset is not 18");
	auto constexpr FUmgWidgetBinder_Image_CachedMaterial_Offset = offsetof(FUmgWidgetBinder_Image, CachedMaterial);
	static_assert(FUmgWidgetBinder_Image_CachedMaterial_Offset == 0x20, "FUmgWidgetBinder_Image::CachedMaterial offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
