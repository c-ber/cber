#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Border.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMapCarePackageItemIconBaseWidget // Size: 0x370
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UMapCarePackageItemIconBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1535); // id32("Class TslGame.MapCarePackageItemIconBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_Border IconImageBorderBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.MapCarePackageItemIconBaseWidget.IconImageBorderBinder */
	FUmgWidgetBinder_Image IconImageBinder; /* Ofs: 0x320 Size: 0x28 - StructProperty TslGame.MapCarePackageItemIconBaseWidget.IconImageBinder */
	FName IconStateParamName; /* Ofs: 0x348 Size: 0x8 - NameProperty TslGame.MapCarePackageItemIconBaseWidget.IconStateParamName */
	FName IconColorParamName; /* Ofs: 0x350 Size: 0x8 - NameProperty TslGame.MapCarePackageItemIconBaseWidget.IconColorParamName */
	uint8_t UnknownData358[0x18];


	inline bool SetIconImageBorderBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x300, value); }
	inline bool SetIconImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x320, value); }
	inline bool SetIconStateParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x348, value); }
	inline bool SetIconColorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x350, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMapCarePackageItemIconBaseWidget = sizeof(UMapCarePackageItemIconBaseWidget); // 880
    static_assert(sizeof(UMapCarePackageItemIconBaseWidget) == 0x370, "Size of UMapCarePackageItemIconBaseWidget is not correct.");
	auto constexpr UMapCarePackageItemIconBaseWidget_IconImageBorderBinder_Offset = offsetof(UMapCarePackageItemIconBaseWidget, IconImageBorderBinder);
	static_assert(UMapCarePackageItemIconBaseWidget_IconImageBorderBinder_Offset == 0x300, "UMapCarePackageItemIconBaseWidget::IconImageBorderBinder offset is not 300");
	auto constexpr UMapCarePackageItemIconBaseWidget_IconImageBinder_Offset = offsetof(UMapCarePackageItemIconBaseWidget, IconImageBinder);
	static_assert(UMapCarePackageItemIconBaseWidget_IconImageBinder_Offset == 0x320, "UMapCarePackageItemIconBaseWidget::IconImageBinder offset is not 320");
	auto constexpr UMapCarePackageItemIconBaseWidget_IconStateParamName_Offset = offsetof(UMapCarePackageItemIconBaseWidget, IconStateParamName);
	static_assert(UMapCarePackageItemIconBaseWidget_IconStateParamName_Offset == 0x348, "UMapCarePackageItemIconBaseWidget::IconStateParamName offset is not 348");
	auto constexpr UMapCarePackageItemIconBaseWidget_IconColorParamName_Offset = offsetof(UMapCarePackageItemIconBaseWidget, IconColorParamName);
	static_assert(UMapCarePackageItemIconBaseWidget_IconColorParamName_Offset == 0x350, "UMapCarePackageItemIconBaseWidget::IconColorParamName offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
