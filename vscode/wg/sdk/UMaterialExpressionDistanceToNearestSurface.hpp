#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDistanceToNearestSurface // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDistanceToNearestSurface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(908); // id32("Class Engine.MaterialExpressionDistanceToNearestSurface")
		return ptr;
	}
	FExpressionInput Position; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDistanceToNearestSurface.Position */


	inline bool SetPosition(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDistanceToNearestSurface = sizeof(UMaterialExpressionDistanceToNearestSurface); // 160
    static_assert(sizeof(UMaterialExpressionDistanceToNearestSurface) == 0xA0, "Size of UMaterialExpressionDistanceToNearestSurface is not correct.");
	auto constexpr UMaterialExpressionDistanceToNearestSurface_Position_Offset = offsetof(UMaterialExpressionDistanceToNearestSurface, Position);
	static_assert(UMaterialExpressionDistanceToNearestSurface_Position_Offset == 0x68, "UMaterialExpressionDistanceToNearestSurface::Position offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
