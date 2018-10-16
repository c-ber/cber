#pragma once
#include "UMaterialExpressionParameter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionStaticBoolParameter // Size: 0x90
	: public UMaterialExpressionParameter // Size: 0x88
{
private:
	typedef UMaterialExpressionStaticBoolParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(946); // id32("Class Engine.MaterialExpressionStaticBoolParameter")
		return ptr;
	}
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];


	inline bool DefaultValue()
	{
		return boolField88& 0x1;
	}
	inline bool SetDefaultValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionStaticBoolParameter = sizeof(UMaterialExpressionStaticBoolParameter); // 144
    static_assert(sizeof(UMaterialExpressionStaticBoolParameter) == 0x90, "Size of UMaterialExpressionStaticBoolParameter is not correct.");
	auto constexpr UMaterialExpressionStaticBoolParameter_boolField88_Offset = offsetof(UMaterialExpressionStaticBoolParameter, boolField88);
	static_assert(UMaterialExpressionStaticBoolParameter_boolField88_Offset == 0x88, "UMaterialExpressionStaticBoolParameter::boolField88 offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
