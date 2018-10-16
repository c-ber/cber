#pragma once
#include "UMaterialExpressionTextureSample.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParticleSubUV // Size: 0x1A8
	: public UMaterialExpressionTextureSample // Size: 0x1A0
{
private:
	typedef UMaterialExpressionParticleSubUV t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(997); // id32("Class Engine.MaterialExpressionParticleSubUV")
		return ptr;
	}
	uint8_t boolField1A0;
	uint8_t UnknownData1A1[0x7];


	inline bool bBlend()
	{
		return boolField1A0& 0x1;
	}
	inline bool SetbBlend(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParticleSubUV = sizeof(UMaterialExpressionParticleSubUV); // 424
    static_assert(sizeof(UMaterialExpressionParticleSubUV) == 0x1A8, "Size of UMaterialExpressionParticleSubUV is not correct.");
	auto constexpr UMaterialExpressionParticleSubUV_boolField1A0_Offset = offsetof(UMaterialExpressionParticleSubUV, boolField1A0);
	static_assert(UMaterialExpressionParticleSubUV_boolField1A0_Offset == 0x1a0, "UMaterialExpressionParticleSubUV::boolField1A0 offset is not 1a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
