#pragma once
#include "UMaterialExpressionTextureSample.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureSampleParameter // Size: 0x1C0
	: public UMaterialExpressionTextureSample // Size: 0x1A0
{
private:
	typedef UMaterialExpressionTextureSampleParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(998); // id32("Class Engine.MaterialExpressionTextureSampleParameter")
		return ptr;
	}
	FName ParameterName; /* Ofs: 0x1A0 Size: 0x8 - NameProperty Engine.MaterialExpressionTextureSampleParameter.ParameterName */
	FGuid ExpressionGUID; /* Ofs: 0x1A8 Size: 0x10 - StructProperty Engine.MaterialExpressionTextureSampleParameter.ExpressionGUID */
	FName Group; /* Ofs: 0x1B8 Size: 0x8 - NameProperty Engine.MaterialExpressionTextureSampleParameter.Group */


	inline bool SetParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x1A0, value); }
	inline bool SetExpressionGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0x1A8, value); }
	inline bool SetGroup(t_structHelper inst, FName value) { inst.WriteOffset(0x1B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureSampleParameter = sizeof(UMaterialExpressionTextureSampleParameter); // 448
    static_assert(sizeof(UMaterialExpressionTextureSampleParameter) == 0x1C0, "Size of UMaterialExpressionTextureSampleParameter is not correct.");
	auto constexpr UMaterialExpressionTextureSampleParameter_ParameterName_Offset = offsetof(UMaterialExpressionTextureSampleParameter, ParameterName);
	static_assert(UMaterialExpressionTextureSampleParameter_ParameterName_Offset == 0x1a0, "UMaterialExpressionTextureSampleParameter::ParameterName offset is not 1a0");
	auto constexpr UMaterialExpressionTextureSampleParameter_ExpressionGUID_Offset = offsetof(UMaterialExpressionTextureSampleParameter, ExpressionGUID);
	static_assert(UMaterialExpressionTextureSampleParameter_ExpressionGUID_Offset == 0x1a8, "UMaterialExpressionTextureSampleParameter::ExpressionGUID offset is not 1a8");
	auto constexpr UMaterialExpressionTextureSampleParameter_Group_Offset = offsetof(UMaterialExpressionTextureSampleParameter, Group);
	static_assert(UMaterialExpressionTextureSampleParameter_Group_Offset == 0x1b8, "UMaterialExpressionTextureSampleParameter::Group offset is not 1b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
