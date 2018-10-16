#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterStanceBaseWidget // Size: 0x338
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UCharacterStanceBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1519); // id32("Class TslGame.CharacterStanceBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_Image StanceIconImageBinder; /* Ofs: 0x300 Size: 0x28 - StructProperty TslGame.CharacterStanceBaseWidget.StanceIconImageBinder */
	FName IconStateParamName; /* Ofs: 0x328 Size: 0x8 - NameProperty TslGame.CharacterStanceBaseWidget.IconStateParamName */
	uint8_t boolField330;
	uint8_t UnknownData331[0x3];
	float SaveState; /* Ofs: 0x334 Size: 0x4 - FloatProperty TslGame.CharacterStanceBaseWidget.SaveState */


	inline bool SetStanceIconImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x300, value); }
	inline bool SetIconStateParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x328, value); }
	inline bool bSaveShow()
	{
		return boolField330& 0x1;
	}
	inline bool SetbSaveShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x330, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSaveState(t_structHelper inst, float value) { inst.WriteOffset(0x334, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterStanceBaseWidget = sizeof(UCharacterStanceBaseWidget); // 824
    static_assert(sizeof(UCharacterStanceBaseWidget) == 0x338, "Size of UCharacterStanceBaseWidget is not correct.");
	auto constexpr UCharacterStanceBaseWidget_StanceIconImageBinder_Offset = offsetof(UCharacterStanceBaseWidget, StanceIconImageBinder);
	static_assert(UCharacterStanceBaseWidget_StanceIconImageBinder_Offset == 0x300, "UCharacterStanceBaseWidget::StanceIconImageBinder offset is not 300");
	auto constexpr UCharacterStanceBaseWidget_IconStateParamName_Offset = offsetof(UCharacterStanceBaseWidget, IconStateParamName);
	static_assert(UCharacterStanceBaseWidget_IconStateParamName_Offset == 0x328, "UCharacterStanceBaseWidget::IconStateParamName offset is not 328");
	auto constexpr UCharacterStanceBaseWidget_boolField330_Offset = offsetof(UCharacterStanceBaseWidget, boolField330);
	static_assert(UCharacterStanceBaseWidget_boolField330_Offset == 0x330, "UCharacterStanceBaseWidget::boolField330 offset is not 330");
	auto constexpr UCharacterStanceBaseWidget_SaveState_Offset = offsetof(UCharacterStanceBaseWidget, SaveState);
	static_assert(UCharacterStanceBaseWidget_SaveState_Offset == 0x334, "UCharacterStanceBaseWidget::SaveState offset is not 334");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
