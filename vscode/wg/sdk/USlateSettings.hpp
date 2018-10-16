#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlateSettings // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef USlateSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1660); // id32("Class Slate.SlateSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t boolField31;
	uint8_t boolField32;
	uint8_t UnknownData33[0x5];


	inline bool bVirtualKeyboardSendsTextChanged()
	{
		return boolField30& 0x1;
	}
	inline bool SetbVirtualKeyboardSendsTextChanged(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bVirtualKeyboardDisplayOnFocus()
	{
		return boolField31& 0x1;
	}
	inline bool SetbVirtualKeyboardDisplayOnFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bExplicitCanvasChildZOrder()
	{
		return boolField32& 0x1;
	}
	inline bool SetbExplicitCanvasChildZOrder(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x32, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlateSettings = sizeof(USlateSettings); // 56
    static_assert(sizeof(USlateSettings) == 0x38, "Size of USlateSettings is not correct.");
	auto constexpr USlateSettings_boolField30_Offset = offsetof(USlateSettings, boolField30);
	static_assert(USlateSettings_boolField30_Offset == 0x30, "USlateSettings::boolField30 offset is not 30");
	auto constexpr USlateSettings_boolField31_Offset = offsetof(USlateSettings, boolField31);
	static_assert(USlateSettings_boolField31_Offset == 0x31, "USlateSettings::boolField31 offset is not 31");
	auto constexpr USlateSettings_boolField32_Offset = offsetof(USlateSettings, boolField32);
	static_assert(USlateSettings_boolField32_Offset == 0x32, "USlateSettings::boolField32 offset is not 32");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
