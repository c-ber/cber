#pragma once
#include "UMaterialExpression.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionCollectionParameter // Size: 0x88
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionCollectionParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(881); // id32("Class Engine.MaterialExpressionCollectionParameter")
		return ptr;
	}
	ExternalPtr<struct UMaterialParameterCollection> Collection; /* Ofs: 0x68 Size: 0x8 - ObjectProperty Engine.MaterialExpressionCollectionParameter.Collection */
	FName ParameterName; /* Ofs: 0x70 Size: 0x8 - NameProperty Engine.MaterialExpressionCollectionParameter.ParameterName */
	FGuid ParameterId; /* Ofs: 0x78 Size: 0x10 - StructProperty Engine.MaterialExpressionCollectionParameter.ParameterId */


	inline bool SetCollection(t_structHelper inst, ExternalPtr<struct UMaterialParameterCollection> value) { inst.WriteOffset(0x68, value); }
	inline bool SetParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x70, value); }
	inline bool SetParameterId(t_structHelper inst, FGuid value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionCollectionParameter = sizeof(UMaterialExpressionCollectionParameter); // 136
    static_assert(sizeof(UMaterialExpressionCollectionParameter) == 0x88, "Size of UMaterialExpressionCollectionParameter is not correct.");
	auto constexpr UMaterialExpressionCollectionParameter_Collection_Offset = offsetof(UMaterialExpressionCollectionParameter, Collection);
	static_assert(UMaterialExpressionCollectionParameter_Collection_Offset == 0x68, "UMaterialExpressionCollectionParameter::Collection offset is not 68");
	auto constexpr UMaterialExpressionCollectionParameter_ParameterName_Offset = offsetof(UMaterialExpressionCollectionParameter, ParameterName);
	static_assert(UMaterialExpressionCollectionParameter_ParameterName_Offset == 0x70, "UMaterialExpressionCollectionParameter::ParameterName offset is not 70");
	auto constexpr UMaterialExpressionCollectionParameter_ParameterId_Offset = offsetof(UMaterialExpressionCollectionParameter, ParameterId);
	static_assert(UMaterialExpressionCollectionParameter_ParameterId_Offset == 0x78, "UMaterialExpressionCollectionParameter::ParameterId offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
