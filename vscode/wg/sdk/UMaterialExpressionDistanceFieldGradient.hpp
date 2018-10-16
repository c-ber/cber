#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDistanceFieldGradient // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDistanceFieldGradient t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(907); // id32("Class Engine.MaterialExpressionDistanceFieldGradient")
		return ptr;
	}
	FExpressionInput Position; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDistanceFieldGradient.Position */


	inline bool SetPosition(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDistanceFieldGradient = sizeof(UMaterialExpressionDistanceFieldGradient); // 160
    static_assert(sizeof(UMaterialExpressionDistanceFieldGradient) == 0xA0, "Size of UMaterialExpressionDistanceFieldGradient is not correct.");
	auto constexpr UMaterialExpressionDistanceFieldGradient_Position_Offset = offsetof(UMaterialExpressionDistanceFieldGradient, Position);
	static_assert(UMaterialExpressionDistanceFieldGradient_Position_Offset == 0x68, "UMaterialExpressionDistanceFieldGradient::Position offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
