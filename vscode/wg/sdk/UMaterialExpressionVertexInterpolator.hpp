#pragma once
#include "UMaterialExpressionCustomOutput.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionVertexInterpolator // Size: 0xB0
	: public UMaterialExpressionCustomOutput // Size: 0x68
{
private:
	typedef UMaterialExpressionVertexInterpolator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(895); // id32("Class Engine.MaterialExpressionVertexInterpolator")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionVertexInterpolator.Input */
	uint8_t UnknownDataA0[0x10];


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionVertexInterpolator = sizeof(UMaterialExpressionVertexInterpolator); // 176
    static_assert(sizeof(UMaterialExpressionVertexInterpolator) == 0xB0, "Size of UMaterialExpressionVertexInterpolator is not correct.");
	auto constexpr UMaterialExpressionVertexInterpolator_Input_Offset = offsetof(UMaterialExpressionVertexInterpolator, Input);
	static_assert(UMaterialExpressionVertexInterpolator_Input_Offset == 0x68, "UMaterialExpressionVertexInterpolator::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
