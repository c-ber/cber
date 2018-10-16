#pragma once
#include "UMaterialExpressionFontSample.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionFontSampleParameter // Size: 0x98
	: public UMaterialExpressionFontSample // Size: 0x78
{
private:
	typedef UMaterialExpressionFontSampleParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(917); // id32("Class Engine.MaterialExpressionFontSampleParameter")
		return ptr;
	}
	FName ParameterName; /* Ofs: 0x78 Size: 0x8 - NameProperty Engine.MaterialExpressionFontSampleParameter.ParameterName */
	FGuid ExpressionGUID; /* Ofs: 0x80 Size: 0x10 - StructProperty Engine.MaterialExpressionFontSampleParameter.ExpressionGUID */
	FName Group; /* Ofs: 0x90 Size: 0x8 - NameProperty Engine.MaterialExpressionFontSampleParameter.Group */


	inline bool SetParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x78, value); }
	inline bool SetExpressionGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0x80, value); }
	inline bool SetGroup(t_structHelper inst, FName value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionFontSampleParameter = sizeof(UMaterialExpressionFontSampleParameter); // 152
    static_assert(sizeof(UMaterialExpressionFontSampleParameter) == 0x98, "Size of UMaterialExpressionFontSampleParameter is not correct.");
	auto constexpr UMaterialExpressionFontSampleParameter_ParameterName_Offset = offsetof(UMaterialExpressionFontSampleParameter, ParameterName);
	static_assert(UMaterialExpressionFontSampleParameter_ParameterName_Offset == 0x78, "UMaterialExpressionFontSampleParameter::ParameterName offset is not 78");
	auto constexpr UMaterialExpressionFontSampleParameter_ExpressionGUID_Offset = offsetof(UMaterialExpressionFontSampleParameter, ExpressionGUID);
	static_assert(UMaterialExpressionFontSampleParameter_ExpressionGUID_Offset == 0x80, "UMaterialExpressionFontSampleParameter::ExpressionGUID offset is not 80");
	auto constexpr UMaterialExpressionFontSampleParameter_Group_Offset = offsetof(UMaterialExpressionFontSampleParameter, Group);
	static_assert(UMaterialExpressionFontSampleParameter_Group_Offset == 0x90, "UMaterialExpressionFontSampleParameter::Group offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
