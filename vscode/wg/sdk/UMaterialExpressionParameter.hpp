#pragma once
#include "UMaterialExpression.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParameter // Size: 0x88
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(944); // id32("Class Engine.MaterialExpressionParameter")
		return ptr;
	}
	FName ParameterName; /* Ofs: 0x68 Size: 0x8 - NameProperty Engine.MaterialExpressionParameter.ParameterName */
	FGuid ExpressionGUID; /* Ofs: 0x70 Size: 0x10 - StructProperty Engine.MaterialExpressionParameter.ExpressionGUID */
	FName Group; /* Ofs: 0x80 Size: 0x8 - NameProperty Engine.MaterialExpressionParameter.Group */


	inline bool SetParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x68, value); }
	inline bool SetExpressionGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0x70, value); }
	inline bool SetGroup(t_structHelper inst, FName value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParameter = sizeof(UMaterialExpressionParameter); // 136
    static_assert(sizeof(UMaterialExpressionParameter) == 0x88, "Size of UMaterialExpressionParameter is not correct.");
	auto constexpr UMaterialExpressionParameter_ParameterName_Offset = offsetof(UMaterialExpressionParameter, ParameterName);
	static_assert(UMaterialExpressionParameter_ParameterName_Offset == 0x68, "UMaterialExpressionParameter::ParameterName offset is not 68");
	auto constexpr UMaterialExpressionParameter_ExpressionGUID_Offset = offsetof(UMaterialExpressionParameter, ExpressionGUID);
	static_assert(UMaterialExpressionParameter_ExpressionGUID_Offset == 0x70, "UMaterialExpressionParameter::ExpressionGUID offset is not 70");
	auto constexpr UMaterialExpressionParameter_Group_Offset = offsetof(UMaterialExpressionParameter, Group);
	static_assert(UMaterialExpressionParameter_Group_Offset == 0x80, "UMaterialExpressionParameter::Group offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
