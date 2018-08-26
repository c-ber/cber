#pragma once
#include "UUmgBaseWidget.hpp"
#include "ECastableItemType.hpp"
#include "FLinearColor.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Border.hpp"
#include "FUmgWidgetBinder_SizeBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCastableItemIconWidget // Size: 0x3C0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslCastableItemIconWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1561); // id32("Class TslGame.TslCastableItemIconWidget")
		return ptr;
	}
	uint8_t UnknownData300[0x1];
	TEnumAsByte<enum ECastableItemType> CastableItemType; /* Ofs: 0x301 Size: 0x1 - EnumProperty TslGame.TslCastableItemIconWidget.CastableItemType */
	uint8_t UnknownData302[0x6];
	ExternalPtr<struct UTexture> ItemIcon; /* Ofs: 0x308 Size: 0x8 - ObjectProperty TslGame.TslCastableItemIconWidget.ItemIcon */
	ExternalPtr<struct UTexture> ItemIconEmpty; /* Ofs: 0x310 Size: 0x8 - ObjectProperty TslGame.TslCastableItemIconWidget.ItemIconEmpty */
	float ItemIconRatio; /* Ofs: 0x318 Size: 0x4 - FloatProperty TslGame.TslCastableItemIconWidget.ItemIconRatio */
	FLinearColor NormalColor; /* Ofs: 0x31C Size: 0x10 - StructProperty TslGame.TslCastableItemIconWidget.NormalColor */
	FLinearColor NoItemColor; /* Ofs: 0x32C Size: 0x10 - StructProperty TslGame.TslCastableItemIconWidget.NoItemColor */
	uint8_t UnknownData33C[0x4];
	FUmgWidgetBinder_Gerneral Icon_Binder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.TslCastableItemIconWidget.Icon_Binder */
	FUmgWidgetBinder_TextBlock ItemCountText_Binder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.TslCastableItemIconWidget.ItemCountText_Binder */
	FUmgWidgetBinder_Border WidgetBorder_Binder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.TslCastableItemIconWidget.WidgetBorder_Binder */
	FUmgWidgetBinder_SizeBox IconSizeBox_Binder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.TslCastableItemIconWidget.IconSizeBox_Binder */


	inline bool SetCastableItemType(t_structHelper inst, TEnumAsByte<enum ECastableItemType> value) { inst.WriteOffset(0x301, value); }
	inline bool SetItemIcon(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x308, value); }
	inline bool SetItemIconEmpty(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x310, value); }
	inline bool SetItemIconRatio(t_structHelper inst, float value) { inst.WriteOffset(0x318, value); }
	inline bool SetNormalColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x31C, value); }
	inline bool SetNoItemColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x32C, value); }
	inline bool SetIcon_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x340, value); }
	inline bool SetItemCountText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x360, value); }
	inline bool SetWidgetBorder_Binder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x380, value); }
	inline bool SetIconSizeBox_Binder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x3A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCastableItemIconWidget = sizeof(UTslCastableItemIconWidget); // 960
    static_assert(sizeof(UTslCastableItemIconWidget) == 0x3C0, "Size of UTslCastableItemIconWidget is not correct.");
	auto constexpr UTslCastableItemIconWidget_CastableItemType_Offset = offsetof(UTslCastableItemIconWidget, CastableItemType);
	static_assert(UTslCastableItemIconWidget_CastableItemType_Offset == 0x301, "UTslCastableItemIconWidget::CastableItemType offset is not 301");
	auto constexpr UTslCastableItemIconWidget_ItemIcon_Offset = offsetof(UTslCastableItemIconWidget, ItemIcon);
	static_assert(UTslCastableItemIconWidget_ItemIcon_Offset == 0x308, "UTslCastableItemIconWidget::ItemIcon offset is not 308");
	auto constexpr UTslCastableItemIconWidget_ItemIconEmpty_Offset = offsetof(UTslCastableItemIconWidget, ItemIconEmpty);
	static_assert(UTslCastableItemIconWidget_ItemIconEmpty_Offset == 0x310, "UTslCastableItemIconWidget::ItemIconEmpty offset is not 310");
	auto constexpr UTslCastableItemIconWidget_ItemIconRatio_Offset = offsetof(UTslCastableItemIconWidget, ItemIconRatio);
	static_assert(UTslCastableItemIconWidget_ItemIconRatio_Offset == 0x318, "UTslCastableItemIconWidget::ItemIconRatio offset is not 318");
	auto constexpr UTslCastableItemIconWidget_NormalColor_Offset = offsetof(UTslCastableItemIconWidget, NormalColor);
	static_assert(UTslCastableItemIconWidget_NormalColor_Offset == 0x31c, "UTslCastableItemIconWidget::NormalColor offset is not 31c");
	auto constexpr UTslCastableItemIconWidget_NoItemColor_Offset = offsetof(UTslCastableItemIconWidget, NoItemColor);
	static_assert(UTslCastableItemIconWidget_NoItemColor_Offset == 0x32c, "UTslCastableItemIconWidget::NoItemColor offset is not 32c");
	auto constexpr UTslCastableItemIconWidget_Icon_Binder_Offset = offsetof(UTslCastableItemIconWidget, Icon_Binder);
	static_assert(UTslCastableItemIconWidget_Icon_Binder_Offset == 0x340, "UTslCastableItemIconWidget::Icon_Binder offset is not 340");
	auto constexpr UTslCastableItemIconWidget_ItemCountText_Binder_Offset = offsetof(UTslCastableItemIconWidget, ItemCountText_Binder);
	static_assert(UTslCastableItemIconWidget_ItemCountText_Binder_Offset == 0x360, "UTslCastableItemIconWidget::ItemCountText_Binder offset is not 360");
	auto constexpr UTslCastableItemIconWidget_WidgetBorder_Binder_Offset = offsetof(UTslCastableItemIconWidget, WidgetBorder_Binder);
	static_assert(UTslCastableItemIconWidget_WidgetBorder_Binder_Offset == 0x380, "UTslCastableItemIconWidget::WidgetBorder_Binder offset is not 380");
	auto constexpr UTslCastableItemIconWidget_IconSizeBox_Binder_Offset = offsetof(UTslCastableItemIconWidget, IconSizeBox_Binder);
	static_assert(UTslCastableItemIconWidget_IconSizeBox_Binder_Offset == 0x3a0, "UTslCastableItemIconWidget::IconSizeBox_Binder offset is not 3a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
