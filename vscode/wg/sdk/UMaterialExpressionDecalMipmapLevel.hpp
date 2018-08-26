#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDecalMipmapLevel // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDecalMipmapLevel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(900); // id32("Class Engine.MaterialExpressionDecalMipmapLevel")
		return ptr;
	}
	FExpressionInput TextureSize; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDecalMipmapLevel.TextureSize */
	float ConstWidth; /* Ofs: 0xA0 Size: 0x4 - FloatProperty Engine.MaterialExpressionDecalMipmapLevel.ConstWidth */
	float ConstHeight; /* Ofs: 0xA4 Size: 0x4 - FloatProperty Engine.MaterialExpressionDecalMipmapLevel.ConstHeight */


	inline bool SetTextureSize(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetConstWidth(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstHeight(t_structHelper inst, float value) { inst.WriteOffset(0xA4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDecalMipmapLevel = sizeof(UMaterialExpressionDecalMipmapLevel); // 168
    static_assert(sizeof(UMaterialExpressionDecalMipmapLevel) == 0xA8, "Size of UMaterialExpressionDecalMipmapLevel is not correct.");
	auto constexpr UMaterialExpressionDecalMipmapLevel_TextureSize_Offset = offsetof(UMaterialExpressionDecalMipmapLevel, TextureSize);
	static_assert(UMaterialExpressionDecalMipmapLevel_TextureSize_Offset == 0x68, "UMaterialExpressionDecalMipmapLevel::TextureSize offset is not 68");
	auto constexpr UMaterialExpressionDecalMipmapLevel_ConstWidth_Offset = offsetof(UMaterialExpressionDecalMipmapLevel, ConstWidth);
	static_assert(UMaterialExpressionDecalMipmapLevel_ConstWidth_Offset == 0xa0, "UMaterialExpressionDecalMipmapLevel::ConstWidth offset is not a0");
	auto constexpr UMaterialExpressionDecalMipmapLevel_ConstHeight_Offset = offsetof(UMaterialExpressionDecalMipmapLevel, ConstHeight);
	static_assert(UMaterialExpressionDecalMipmapLevel_ConstHeight_Offset == 0xa4, "UMaterialExpressionDecalMipmapLevel::ConstHeight offset is not a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
