#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVersionInfoBaseWidget // Size: 0x358
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UVersionInfoBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1593); // id32("Class TslGame.VersionInfoBaseWidget")
		return ptr;
	}
	FText WithNickNameFormat; /* Ofs: 0x300 Size: 0x18 - TextProperty TslGame.VersionInfoBaseWidget.WithNickNameFormat */
	FText WithOutNickNameFormat; /* Ofs: 0x318 Size: 0x18 - TextProperty TslGame.VersionInfoBaseWidget.WithOutNickNameFormat */
	FUmgWidgetBinder_TextBlock VersionInfoTextBinder; /* Ofs: 0x330 Size: 0x20 - StructProperty TslGame.VersionInfoBaseWidget.VersionInfoTextBinder */
	uint8_t boolField350;
	uint8_t UnknownData351[0x7];


	inline bool SetWithNickNameFormat(t_structHelper inst, FText value) { inst.WriteOffset(0x300, value); }
	inline bool SetWithOutNickNameFormat(t_structHelper inst, FText value) { inst.WriteOffset(0x318, value); }
	inline bool SetVersionInfoTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x330, value); }
	inline bool bUpdated()
	{
		return boolField350& 0x1;
	}
	inline bool SetbUpdated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x350, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVersionInfoBaseWidget = sizeof(UVersionInfoBaseWidget); // 856
    static_assert(sizeof(UVersionInfoBaseWidget) == 0x358, "Size of UVersionInfoBaseWidget is not correct.");
	auto constexpr UVersionInfoBaseWidget_WithNickNameFormat_Offset = offsetof(UVersionInfoBaseWidget, WithNickNameFormat);
	static_assert(UVersionInfoBaseWidget_WithNickNameFormat_Offset == 0x300, "UVersionInfoBaseWidget::WithNickNameFormat offset is not 300");
	auto constexpr UVersionInfoBaseWidget_WithOutNickNameFormat_Offset = offsetof(UVersionInfoBaseWidget, WithOutNickNameFormat);
	static_assert(UVersionInfoBaseWidget_WithOutNickNameFormat_Offset == 0x318, "UVersionInfoBaseWidget::WithOutNickNameFormat offset is not 318");
	auto constexpr UVersionInfoBaseWidget_VersionInfoTextBinder_Offset = offsetof(UVersionInfoBaseWidget, VersionInfoTextBinder);
	static_assert(UVersionInfoBaseWidget_VersionInfoTextBinder_Offset == 0x330, "UVersionInfoBaseWidget::VersionInfoTextBinder offset is not 330");
	auto constexpr UVersionInfoBaseWidget_boolField350_Offset = offsetof(UVersionInfoBaseWidget, boolField350);
	static_assert(UVersionInfoBaseWidget_boolField350_Offset == 0x350, "UVersionInfoBaseWidget::boolField350 offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
