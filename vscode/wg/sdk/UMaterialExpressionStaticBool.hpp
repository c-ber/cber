#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionStaticBool // Size: 0x70
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionStaticBool t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(988); // id32("Class Engine.MaterialExpressionStaticBool")
		return ptr;
	}
	uint8_t boolField68;
	uint8_t UnknownData69[0x7];


	inline bool Value()
	{
		return boolField68& 0x1;
	}
	inline bool SetValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionStaticBool = sizeof(UMaterialExpressionStaticBool); // 112
    static_assert(sizeof(UMaterialExpressionStaticBool) == 0x70, "Size of UMaterialExpressionStaticBool is not correct.");
	auto constexpr UMaterialExpressionStaticBool_boolField68_Offset = offsetof(UMaterialExpressionStaticBool, boolField68);
	static_assert(UMaterialExpressionStaticBool_boolField68_Offset == 0x68, "UMaterialExpressionStaticBool::boolField68 offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
