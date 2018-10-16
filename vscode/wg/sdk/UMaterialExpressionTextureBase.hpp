#pragma once
#include "UMaterialExpression.hpp"
#include "EMaterialSamplerType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureBase // Size: 0x78
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTextureBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(994); // id32("Class Engine.MaterialExpressionTextureBase")
		return ptr;
	}
	ExternalPtr<struct UTexture> Texture; /* Ofs: 0x68 Size: 0x8 - ObjectProperty Engine.MaterialExpressionTextureBase.Texture */
	TEnumAsByte<enum EMaterialSamplerType> SamplerType; /* Ofs: 0x70 Size: 0x1 - ByteProperty Engine.MaterialExpressionTextureBase.SamplerType */
	uint8_t UnknownData71[0x3];
	uint8_t boolField74;
	uint8_t UnknownData75[0x3];


	inline bool SetTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x68, value); }
	inline bool SetSamplerType(t_structHelper inst, TEnumAsByte<enum EMaterialSamplerType> value) { inst.WriteOffset(0x70, value); }
	inline bool IsDefaultMeshpaintTexture()
	{
		return boolField74& 0x1;
	}
	inline bool SetIsDefaultMeshpaintTexture(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x74, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureBase = sizeof(UMaterialExpressionTextureBase); // 120
    static_assert(sizeof(UMaterialExpressionTextureBase) == 0x78, "Size of UMaterialExpressionTextureBase is not correct.");
	auto constexpr UMaterialExpressionTextureBase_Texture_Offset = offsetof(UMaterialExpressionTextureBase, Texture);
	static_assert(UMaterialExpressionTextureBase_Texture_Offset == 0x68, "UMaterialExpressionTextureBase::Texture offset is not 68");
	auto constexpr UMaterialExpressionTextureBase_SamplerType_Offset = offsetof(UMaterialExpressionTextureBase, SamplerType);
	static_assert(UMaterialExpressionTextureBase_SamplerType_Offset == 0x70, "UMaterialExpressionTextureBase::SamplerType offset is not 70");
	auto constexpr UMaterialExpressionTextureBase_boolField74_Offset = offsetof(UMaterialExpressionTextureBase, boolField74);
	static_assert(UMaterialExpressionTextureBase_boolField74_Offset == 0x74, "UMaterialExpressionTextureBase::boolField74 offset is not 74");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
