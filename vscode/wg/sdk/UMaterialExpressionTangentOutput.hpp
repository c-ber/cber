#pragma once
#include "UMaterialExpressionCustomOutput.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTangentOutput // Size: 0xA0
	: public UMaterialExpressionCustomOutput // Size: 0x68
{
private:
	typedef UMaterialExpressionTangentOutput t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(894); // id32("Class Engine.MaterialExpressionTangentOutput")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionTangentOutput.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTangentOutput = sizeof(UMaterialExpressionTangentOutput); // 160
    static_assert(sizeof(UMaterialExpressionTangentOutput) == 0xA0, "Size of UMaterialExpressionTangentOutput is not correct.");
	auto constexpr UMaterialExpressionTangentOutput_Input_Offset = offsetof(UMaterialExpressionTangentOutput, Input);
	static_assert(UMaterialExpressionTangentOutput_Input_Offset == 0x68, "UMaterialExpressionTangentOutput::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
