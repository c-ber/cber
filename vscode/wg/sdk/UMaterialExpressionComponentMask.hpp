#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionComponentMask // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionComponentMask t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(883); // id32("Class Engine.MaterialExpressionComponentMask")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionComponentMask.Input */
	uint8_t boolFieldA0;
	uint8_t UnknownDataA1[0x7];


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool R()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetR(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool G()
	{
		return boolFieldA0& 0x2;
	}
	inline bool SetG(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool B()
	{
		return boolFieldA0& 0x4;
	}
	inline bool SetB(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool A()
	{
		return boolFieldA0& 0x8;
	}
	inline bool SetA(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionComponentMask = sizeof(UMaterialExpressionComponentMask); // 168
    static_assert(sizeof(UMaterialExpressionComponentMask) == 0xA8, "Size of UMaterialExpressionComponentMask is not correct.");
	auto constexpr UMaterialExpressionComponentMask_Input_Offset = offsetof(UMaterialExpressionComponentMask, Input);
	static_assert(UMaterialExpressionComponentMask_Input_Offset == 0x68, "UMaterialExpressionComponentMask::Input offset is not 68");
	auto constexpr UMaterialExpressionComponentMask_boolFieldA0_Offset = offsetof(UMaterialExpressionComponentMask, boolFieldA0);
	static_assert(UMaterialExpressionComponentMask_boolFieldA0_Offset == 0xa0, "UMaterialExpressionComponentMask::boolFieldA0 offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
