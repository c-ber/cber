#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionReflectionVectorWS // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionReflectionVectorWS t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(970); // id32("Class Engine.MaterialExpressionReflectionVectorWS")
		return ptr;
	}
	FExpressionInput CustomWorldNormal; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionReflectionVectorWS.CustomWorldNormal */
	uint8_t boolFieldA0;
	uint8_t UnknownDataA1[0x7];


	inline bool SetCustomWorldNormal(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool bNormalizeCustomWorldNormal()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetbNormalizeCustomWorldNormal(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionReflectionVectorWS = sizeof(UMaterialExpressionReflectionVectorWS); // 168
    static_assert(sizeof(UMaterialExpressionReflectionVectorWS) == 0xA8, "Size of UMaterialExpressionReflectionVectorWS is not correct.");
	auto constexpr UMaterialExpressionReflectionVectorWS_CustomWorldNormal_Offset = offsetof(UMaterialExpressionReflectionVectorWS, CustomWorldNormal);
	static_assert(UMaterialExpressionReflectionVectorWS_CustomWorldNormal_Offset == 0x68, "UMaterialExpressionReflectionVectorWS::CustomWorldNormal offset is not 68");
	auto constexpr UMaterialExpressionReflectionVectorWS_boolFieldA0_Offset = offsetof(UMaterialExpressionReflectionVectorWS, boolFieldA0);
	static_assert(UMaterialExpressionReflectionVectorWS_boolFieldA0_Offset == 0xa0, "UMaterialExpressionReflectionVectorWS::boolFieldA0 offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
