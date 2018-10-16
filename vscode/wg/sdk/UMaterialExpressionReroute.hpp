#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionReroute // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionReroute t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(971); // id32("Class Engine.MaterialExpressionReroute")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionReroute.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionReroute = sizeof(UMaterialExpressionReroute); // 160
    static_assert(sizeof(UMaterialExpressionReroute) == 0xA0, "Size of UMaterialExpressionReroute is not correct.");
	auto constexpr UMaterialExpressionReroute_Input_Offset = offsetof(UMaterialExpressionReroute, Input);
	static_assert(UMaterialExpressionReroute_Input_Offset == 0x68, "UMaterialExpressionReroute::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
