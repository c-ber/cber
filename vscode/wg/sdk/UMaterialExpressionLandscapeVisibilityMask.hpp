#pragma once
#include "UMaterialExpression.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLandscapeVisibilityMask // Size: 0x78
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLandscapeVisibilityMask t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1307); // id32("Class Landscape.MaterialExpressionLandscapeVisibilityMask")
		return ptr;
	}
	FGuid ExpressionGUID; /* Ofs: 0x68 Size: 0x10 - StructProperty Landscape.MaterialExpressionLandscapeVisibilityMask.ExpressionGUID */


	inline bool SetExpressionGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLandscapeVisibilityMask = sizeof(UMaterialExpressionLandscapeVisibilityMask); // 120
    static_assert(sizeof(UMaterialExpressionLandscapeVisibilityMask) == 0x78, "Size of UMaterialExpressionLandscapeVisibilityMask is not correct.");
	auto constexpr UMaterialExpressionLandscapeVisibilityMask_ExpressionGUID_Offset = offsetof(UMaterialExpressionLandscapeVisibilityMask, ExpressionGUID);
	static_assert(UMaterialExpressionLandscapeVisibilityMask_ExpressionGUID_Offset == 0x68, "UMaterialExpressionLandscapeVisibilityMask::ExpressionGUID offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
