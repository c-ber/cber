#pragma once
#include "UUmgBaseWidget.hpp"
#include "FKey.hpp"
#include "EGamepadInputResponseTypes.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadKeyHintContentWidget // Size: 0x360
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslGamepadKeyHintContentWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1569); // id32("Class TslGame.TslGamepadKeyHintContentWidget")
		return ptr;
	}
	FKey FirstKey; /* Ofs: 0x300 Size: 0x18 - StructProperty TslGame.TslGamepadKeyHintContentWidget.FirstKey */
	FKey SecondKey; /* Ofs: 0x318 Size: 0x18 - StructProperty TslGame.TslGamepadKeyHintContentWidget.SecondKey */
	FText DisplayName; /* Ofs: 0x330 Size: 0x18 - TextProperty TslGame.TslGamepadKeyHintContentWidget.DisplayName */
	TEnumAsByte<enum EGamepadInputResponseTypes> ResponseType; /* Ofs: 0x348 Size: 0x1 - EnumProperty TslGame.TslGamepadKeyHintContentWidget.ResponseType */
	uint8_t UnknownData349[0x7];
	TArray<struct FTslKeyIconData> KeyIconDatas; /* Ofs: 0x350 Size: 0x10 - ArrayProperty TslGame.TslGamepadKeyHintContentWidget.KeyIconDatas */


	inline bool SetFirstKey(t_structHelper inst, FKey value) { inst.WriteOffset(0x300, value); }
	inline bool SetSecondKey(t_structHelper inst, FKey value) { inst.WriteOffset(0x318, value); }
	inline bool SetDisplayName(t_structHelper inst, FText value) { inst.WriteOffset(0x330, value); }
	inline bool SetResponseType(t_structHelper inst, TEnumAsByte<enum EGamepadInputResponseTypes> value) { inst.WriteOffset(0x348, value); }
	inline bool SetKeyIconDatas(t_structHelper inst, TArray<struct FTslKeyIconData> value) { inst.WriteOffset(0x350, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadKeyHintContentWidget = sizeof(UTslGamepadKeyHintContentWidget); // 864
    static_assert(sizeof(UTslGamepadKeyHintContentWidget) == 0x360, "Size of UTslGamepadKeyHintContentWidget is not correct.");
	auto constexpr UTslGamepadKeyHintContentWidget_FirstKey_Offset = offsetof(UTslGamepadKeyHintContentWidget, FirstKey);
	static_assert(UTslGamepadKeyHintContentWidget_FirstKey_Offset == 0x300, "UTslGamepadKeyHintContentWidget::FirstKey offset is not 300");
	auto constexpr UTslGamepadKeyHintContentWidget_SecondKey_Offset = offsetof(UTslGamepadKeyHintContentWidget, SecondKey);
	static_assert(UTslGamepadKeyHintContentWidget_SecondKey_Offset == 0x318, "UTslGamepadKeyHintContentWidget::SecondKey offset is not 318");
	auto constexpr UTslGamepadKeyHintContentWidget_DisplayName_Offset = offsetof(UTslGamepadKeyHintContentWidget, DisplayName);
	static_assert(UTslGamepadKeyHintContentWidget_DisplayName_Offset == 0x330, "UTslGamepadKeyHintContentWidget::DisplayName offset is not 330");
	auto constexpr UTslGamepadKeyHintContentWidget_ResponseType_Offset = offsetof(UTslGamepadKeyHintContentWidget, ResponseType);
	static_assert(UTslGamepadKeyHintContentWidget_ResponseType_Offset == 0x348, "UTslGamepadKeyHintContentWidget::ResponseType offset is not 348");
	auto constexpr UTslGamepadKeyHintContentWidget_KeyIconDatas_Offset = offsetof(UTslGamepadKeyHintContentWidget, KeyIconDatas);
	static_assert(UTslGamepadKeyHintContentWidget_KeyIconDatas_Offset == 0x350, "UTslGamepadKeyHintContentWidget::KeyIconDatas offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
