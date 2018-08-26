#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionFeatureLevelSwitch // Size: 0x180
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionFeatureLevelSwitch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(913); // id32("Class Engine.MaterialExpressionFeatureLevelSwitch")
		return ptr;
	}
	FExpressionInput Default; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionFeatureLevelSwitch.Default */
	FExpressionInput Inputs[4]; /* Ofs: 0x4 Size: 0x38 - StructProperty Engine.MaterialExpressionFeatureLevelSwitch.Inputs */


	inline bool SetDefault(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionFeatureLevelSwitch = sizeof(UMaterialExpressionFeatureLevelSwitch); // 384
    static_assert(sizeof(UMaterialExpressionFeatureLevelSwitch) == 0x180, "Size of UMaterialExpressionFeatureLevelSwitch is not correct.");
	auto constexpr UMaterialExpressionFeatureLevelSwitch_Default_Offset = offsetof(UMaterialExpressionFeatureLevelSwitch, Default);
	static_assert(UMaterialExpressionFeatureLevelSwitch_Default_Offset == 0x68, "UMaterialExpressionFeatureLevelSwitch::Default offset is not 68");
	auto constexpr UMaterialExpressionFeatureLevelSwitch_Inputs_Offset = offsetof(UMaterialExpressionFeatureLevelSwitch, Inputs);
	static_assert(UMaterialExpressionFeatureLevelSwitch_Inputs_Offset == 0xa0, "UMaterialExpressionFeatureLevelSwitch::Inputs offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
