#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTextureParameterValue // Size: 0x20
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.TextureParameterValue.ParameterName */
    ExternalPtr<struct UTexture> ParameterValue; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.TextureParameterValue.ParameterValue */
    FGuid ExpressionGUID; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.TextureParameterValue.ExpressionGUID */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTextureParameterValue = sizeof(FTextureParameterValue); // 32
    static_assert(sizeof(FTextureParameterValue) == 0x20, "Size of FTextureParameterValue is not correct.");
	auto constexpr FTextureParameterValue_ParameterName_Offset = offsetof(FTextureParameterValue, ParameterName);
	static_assert(FTextureParameterValue_ParameterName_Offset == 0x0, "FTextureParameterValue::ParameterName offset is not 0");
	auto constexpr FTextureParameterValue_ParameterValue_Offset = offsetof(FTextureParameterValue, ParameterValue);
	static_assert(FTextureParameterValue_ParameterValue_Offset == 0x8, "FTextureParameterValue::ParameterValue offset is not 8");
	auto constexpr FTextureParameterValue_ExpressionGUID_Offset = offsetof(FTextureParameterValue, ExpressionGUID);
	static_assert(FTextureParameterValue_ExpressionGUID_Offset == 0x10, "FTextureParameterValue::ExpressionGUID offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
