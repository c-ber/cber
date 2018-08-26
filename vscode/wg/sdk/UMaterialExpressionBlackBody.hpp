#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionBlackBody // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionBlackBody t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(873); // id32("Class Engine.MaterialExpressionBlackBody")
		return ptr;
	}
	FExpressionInput Temp; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionBlackBody.Temp */


	inline bool SetTemp(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionBlackBody = sizeof(UMaterialExpressionBlackBody); // 160
    static_assert(sizeof(UMaterialExpressionBlackBody) == 0xA0, "Size of UMaterialExpressionBlackBody is not correct.");
	auto constexpr UMaterialExpressionBlackBody_Temp_Offset = offsetof(UMaterialExpressionBlackBody, Temp);
	static_assert(UMaterialExpressionBlackBody_Temp_Offset == 0x68, "UMaterialExpressionBlackBody::Temp offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
