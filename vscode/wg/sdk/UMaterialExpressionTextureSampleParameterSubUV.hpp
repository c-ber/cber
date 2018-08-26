#pragma once
#include "UMaterialExpressionTextureSampleParameter2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureSampleParameterSubUV // Size: 0x1C8
	: public UMaterialExpressionTextureSampleParameter2D // Size: 0x1C0
{
private:
	typedef UMaterialExpressionTextureSampleParameterSubUV t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1002); // id32("Class Engine.MaterialExpressionTextureSampleParameterSubUV")
		return ptr;
	}
	uint8_t boolField1C0;
	uint8_t UnknownData1C1[0x7];


	inline bool bBlend()
	{
		return boolField1C0& 0x1;
	}
	inline bool SetbBlend(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureSampleParameterSubUV = sizeof(UMaterialExpressionTextureSampleParameterSubUV); // 456
    static_assert(sizeof(UMaterialExpressionTextureSampleParameterSubUV) == 0x1C8, "Size of UMaterialExpressionTextureSampleParameterSubUV is not correct.");
	auto constexpr UMaterialExpressionTextureSampleParameterSubUV_boolField1C0_Offset = offsetof(UMaterialExpressionTextureSampleParameterSubUV, boolField1C0);
	static_assert(UMaterialExpressionTextureSampleParameterSubUV_boolField1C0_Offset == 0x1c0, "UMaterialExpressionTextureSampleParameterSubUV::boolField1C0 offset is not 1c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
