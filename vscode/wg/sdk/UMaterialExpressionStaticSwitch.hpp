#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionStaticSwitch // Size: 0x118
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionStaticSwitch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(989); // id32("Class Engine.MaterialExpressionStaticSwitch")
		return ptr;
	}
	uint8_t boolField68;
	uint8_t UnknownData69[0x7];
	FExpressionInput A; /* Ofs: 0x70 Size: 0x38 - StructProperty Engine.MaterialExpressionStaticSwitch.A */
	FExpressionInput B; /* Ofs: 0xA8 Size: 0x38 - StructProperty Engine.MaterialExpressionStaticSwitch.B */
	FExpressionInput Value; /* Ofs: 0xE0 Size: 0x38 - StructProperty Engine.MaterialExpressionStaticSwitch.Value */


	inline bool DefaultValue()
	{
		return boolField68& 0x1;
	}
	inline bool SetDefaultValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x70, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA8, value); }
	inline bool SetValue(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionStaticSwitch = sizeof(UMaterialExpressionStaticSwitch); // 280
    static_assert(sizeof(UMaterialExpressionStaticSwitch) == 0x118, "Size of UMaterialExpressionStaticSwitch is not correct.");
	auto constexpr UMaterialExpressionStaticSwitch_boolField68_Offset = offsetof(UMaterialExpressionStaticSwitch, boolField68);
	static_assert(UMaterialExpressionStaticSwitch_boolField68_Offset == 0x68, "UMaterialExpressionStaticSwitch::boolField68 offset is not 68");
	auto constexpr UMaterialExpressionStaticSwitch_A_Offset = offsetof(UMaterialExpressionStaticSwitch, A);
	static_assert(UMaterialExpressionStaticSwitch_A_Offset == 0x70, "UMaterialExpressionStaticSwitch::A offset is not 70");
	auto constexpr UMaterialExpressionStaticSwitch_B_Offset = offsetof(UMaterialExpressionStaticSwitch, B);
	static_assert(UMaterialExpressionStaticSwitch_B_Offset == 0xa8, "UMaterialExpressionStaticSwitch::B offset is not a8");
	auto constexpr UMaterialExpressionStaticSwitch_Value_Offset = offsetof(UMaterialExpressionStaticSwitch, Value);
	static_assert(UMaterialExpressionStaticSwitch_Value_Offset == 0xe0, "UMaterialExpressionStaticSwitch::Value offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
