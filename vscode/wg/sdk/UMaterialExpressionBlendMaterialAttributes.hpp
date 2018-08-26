#pragma once
#include "UMaterialExpression.hpp"
#include "FMaterialAttributesInput.hpp"
#include "FExpressionInput.hpp"
#include "EMaterialAttributeBlend.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionBlendMaterialAttributes // Size: 0x128
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionBlendMaterialAttributes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(874); // id32("Class Engine.MaterialExpressionBlendMaterialAttributes")
		return ptr;
	}
	FMaterialAttributesInput A; /* Ofs: 0x68 Size: 0x40 - StructProperty Engine.MaterialExpressionBlendMaterialAttributes.A */
	FMaterialAttributesInput B; /* Ofs: 0xA8 Size: 0x40 - StructProperty Engine.MaterialExpressionBlendMaterialAttributes.B */
	FExpressionInput Alpha; /* Ofs: 0xE8 Size: 0x38 - StructProperty Engine.MaterialExpressionBlendMaterialAttributes.Alpha */
	TEnumAsByte<enum EMaterialAttributeBlend> PixelAttributeBlendType; /* Ofs: 0x120 Size: 0x1 - ByteProperty Engine.MaterialExpressionBlendMaterialAttributes.PixelAttributeBlendType */
	TEnumAsByte<enum EMaterialAttributeBlend> VertexAttributeBlendType; /* Ofs: 0x121 Size: 0x1 - ByteProperty Engine.MaterialExpressionBlendMaterialAttributes.VertexAttributeBlendType */
	uint8_t UnknownData122[0x6];


	inline bool SetA(t_structHelper inst, FMaterialAttributesInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FMaterialAttributesInput value) { inst.WriteOffset(0xA8, value); }
	inline bool SetAlpha(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xE8, value); }
	inline bool SetPixelAttributeBlendType(t_structHelper inst, TEnumAsByte<enum EMaterialAttributeBlend> value) { inst.WriteOffset(0x120, value); }
	inline bool SetVertexAttributeBlendType(t_structHelper inst, TEnumAsByte<enum EMaterialAttributeBlend> value) { inst.WriteOffset(0x121, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionBlendMaterialAttributes = sizeof(UMaterialExpressionBlendMaterialAttributes); // 296
    static_assert(sizeof(UMaterialExpressionBlendMaterialAttributes) == 0x128, "Size of UMaterialExpressionBlendMaterialAttributes is not correct.");
	auto constexpr UMaterialExpressionBlendMaterialAttributes_A_Offset = offsetof(UMaterialExpressionBlendMaterialAttributes, A);
	static_assert(UMaterialExpressionBlendMaterialAttributes_A_Offset == 0x68, "UMaterialExpressionBlendMaterialAttributes::A offset is not 68");
	auto constexpr UMaterialExpressionBlendMaterialAttributes_B_Offset = offsetof(UMaterialExpressionBlendMaterialAttributes, B);
	static_assert(UMaterialExpressionBlendMaterialAttributes_B_Offset == 0xa8, "UMaterialExpressionBlendMaterialAttributes::B offset is not a8");
	auto constexpr UMaterialExpressionBlendMaterialAttributes_Alpha_Offset = offsetof(UMaterialExpressionBlendMaterialAttributes, Alpha);
	static_assert(UMaterialExpressionBlendMaterialAttributes_Alpha_Offset == 0xe8, "UMaterialExpressionBlendMaterialAttributes::Alpha offset is not e8");
	auto constexpr UMaterialExpressionBlendMaterialAttributes_PixelAttributeBlendType_Offset = offsetof(UMaterialExpressionBlendMaterialAttributes, PixelAttributeBlendType);
	static_assert(UMaterialExpressionBlendMaterialAttributes_PixelAttributeBlendType_Offset == 0x120, "UMaterialExpressionBlendMaterialAttributes::PixelAttributeBlendType offset is not 120");
	auto constexpr UMaterialExpressionBlendMaterialAttributes_VertexAttributeBlendType_Offset = offsetof(UMaterialExpressionBlendMaterialAttributes, VertexAttributeBlendType);
	static_assert(UMaterialExpressionBlendMaterialAttributes_VertexAttributeBlendType_Offset == 0x121, "UMaterialExpressionBlendMaterialAttributes::VertexAttributeBlendType offset is not 121");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
