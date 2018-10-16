#pragma once
#include "UMaterialExpressionParameter.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionStaticComponentMaskParameter // Size: 0xC8
	: public UMaterialExpressionParameter // Size: 0x88
{
private:
	typedef UMaterialExpressionStaticComponentMaskParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(948); // id32("Class Engine.MaterialExpressionStaticComponentMaskParameter")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x88 Size: 0x38 - StructProperty Engine.MaterialExpressionStaticComponentMaskParameter.Input */
	uint8_t boolFieldC0;
	uint8_t UnknownDataC1[0x7];


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x88, value); }
	inline bool DefaultR()
	{
		return boolFieldC0& 0x1;
	}
	inline bool SetDefaultR(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool DefaultG()
	{
		return boolFieldC0& 0x2;
	}
	inline bool SetDefaultG(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool DefaultB()
	{
		return boolFieldC0& 0x4;
	}
	inline bool SetDefaultB(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool DefaultA()
	{
		return boolFieldC0& 0x8;
	}
	inline bool SetDefaultA(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionStaticComponentMaskParameter = sizeof(UMaterialExpressionStaticComponentMaskParameter); // 200
    static_assert(sizeof(UMaterialExpressionStaticComponentMaskParameter) == 0xC8, "Size of UMaterialExpressionStaticComponentMaskParameter is not correct.");
	auto constexpr UMaterialExpressionStaticComponentMaskParameter_Input_Offset = offsetof(UMaterialExpressionStaticComponentMaskParameter, Input);
	static_assert(UMaterialExpressionStaticComponentMaskParameter_Input_Offset == 0x88, "UMaterialExpressionStaticComponentMaskParameter::Input offset is not 88");
	auto constexpr UMaterialExpressionStaticComponentMaskParameter_boolFieldC0_Offset = offsetof(UMaterialExpressionStaticComponentMaskParameter, boolFieldC0);
	static_assert(UMaterialExpressionStaticComponentMaskParameter_boolFieldC0_Offset == 0xc0, "UMaterialExpressionStaticComponentMaskParameter::boolFieldC0 offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
