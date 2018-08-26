#pragma once
#include "UMaterialExpressionCustomOutput.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionClearCoatNormalCustomOutput // Size: 0xA0
	: public UMaterialExpressionCustomOutput // Size: 0x68
{
private:
	typedef UMaterialExpressionClearCoatNormalCustomOutput t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(893); // id32("Class Engine.MaterialExpressionClearCoatNormalCustomOutput")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionClearCoatNormalCustomOutput.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionClearCoatNormalCustomOutput = sizeof(UMaterialExpressionClearCoatNormalCustomOutput); // 160
    static_assert(sizeof(UMaterialExpressionClearCoatNormalCustomOutput) == 0xA0, "Size of UMaterialExpressionClearCoatNormalCustomOutput is not correct.");
	auto constexpr UMaterialExpressionClearCoatNormalCustomOutput_Input_Offset = offsetof(UMaterialExpressionClearCoatNormalCustomOutput, Input);
	static_assert(UMaterialExpressionClearCoatNormalCustomOutput_Input_Offset == 0x68, "UMaterialExpressionClearCoatNormalCustomOutput::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
