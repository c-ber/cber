#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Animation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UZeroingDistanceBaseWidget // Size: 0x380
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UZeroingDistanceBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1602); // id32("Class TslGame.ZeroingDistanceBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_TextBlock ZeroingdistanceTextBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.ZeroingDistanceBaseWidget.ZeroingdistanceTextBinder */
	FUmgWidgetBinder_Animation ZeroDistIncreasingAnimBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.ZeroingDistanceBaseWidget.ZeroDistIncreasingAnimBinder */
	FUmgWidgetBinder_Animation ZeroDistDecreasingAnimBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.ZeroingDistanceBaseWidget.ZeroDistDecreasingAnimBinder */
	FText ZeroingTextFormat; /* Ofs: 0x360 Size: 0x18 - TextProperty TslGame.ZeroingDistanceBaseWidget.ZeroingTextFormat */
	uint8_t UnknownData378[0x8];


	inline bool SetZeroingdistanceTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x300, value); }
	inline bool SetZeroDistIncreasingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x320, value); }
	inline bool SetZeroDistDecreasingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x340, value); }
	inline bool SetZeroingTextFormat(t_structHelper inst, FText value) { inst.WriteOffset(0x360, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUZeroingDistanceBaseWidget = sizeof(UZeroingDistanceBaseWidget); // 896
    static_assert(sizeof(UZeroingDistanceBaseWidget) == 0x380, "Size of UZeroingDistanceBaseWidget is not correct.");
	auto constexpr UZeroingDistanceBaseWidget_ZeroingdistanceTextBinder_Offset = offsetof(UZeroingDistanceBaseWidget, ZeroingdistanceTextBinder);
	static_assert(UZeroingDistanceBaseWidget_ZeroingdistanceTextBinder_Offset == 0x300, "UZeroingDistanceBaseWidget::ZeroingdistanceTextBinder offset is not 300");
	auto constexpr UZeroingDistanceBaseWidget_ZeroDistIncreasingAnimBinder_Offset = offsetof(UZeroingDistanceBaseWidget, ZeroDistIncreasingAnimBinder);
	static_assert(UZeroingDistanceBaseWidget_ZeroDistIncreasingAnimBinder_Offset == 0x320, "UZeroingDistanceBaseWidget::ZeroDistIncreasingAnimBinder offset is not 320");
	auto constexpr UZeroingDistanceBaseWidget_ZeroDistDecreasingAnimBinder_Offset = offsetof(UZeroingDistanceBaseWidget, ZeroDistDecreasingAnimBinder);
	static_assert(UZeroingDistanceBaseWidget_ZeroDistDecreasingAnimBinder_Offset == 0x340, "UZeroingDistanceBaseWidget::ZeroDistDecreasingAnimBinder offset is not 340");
	auto constexpr UZeroingDistanceBaseWidget_ZeroingTextFormat_Offset = offsetof(UZeroingDistanceBaseWidget, ZeroingTextFormat);
	static_assert(UZeroingDistanceBaseWidget_ZeroingTextFormat_Offset == 0x360, "UZeroingDistanceBaseWidget::ZeroingTextFormat offset is not 360");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
