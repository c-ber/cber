#pragma once
#include "UMaterialExpressionStaticBoolParameter.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionStaticSwitchParameter // Size: 0x100
	: public UMaterialExpressionStaticBoolParameter // Size: 0x90
{
private:
	typedef UMaterialExpressionStaticSwitchParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(947); // id32("Class Engine.MaterialExpressionStaticSwitchParameter")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x90 Size: 0x38 - StructProperty Engine.MaterialExpressionStaticSwitchParameter.A */
	FExpressionInput B; /* Ofs: 0xC8 Size: 0x38 - StructProperty Engine.MaterialExpressionStaticSwitchParameter.B */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x90, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionStaticSwitchParameter = sizeof(UMaterialExpressionStaticSwitchParameter); // 256
    static_assert(sizeof(UMaterialExpressionStaticSwitchParameter) == 0x100, "Size of UMaterialExpressionStaticSwitchParameter is not correct.");
	auto constexpr UMaterialExpressionStaticSwitchParameter_A_Offset = offsetof(UMaterialExpressionStaticSwitchParameter, A);
	static_assert(UMaterialExpressionStaticSwitchParameter_A_Offset == 0x90, "UMaterialExpressionStaticSwitchParameter::A offset is not 90");
	auto constexpr UMaterialExpressionStaticSwitchParameter_B_Offset = offsetof(UMaterialExpressionStaticSwitchParameter, B);
	static_assert(UMaterialExpressionStaticSwitchParameter_B_Offset == 0xc8, "UMaterialExpressionStaticSwitchParameter::B offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
