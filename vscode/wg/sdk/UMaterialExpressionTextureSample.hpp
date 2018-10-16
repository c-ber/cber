#pragma once
#include "UMaterialExpressionTextureBase.hpp"
#include "FExpressionInput.hpp"
#include "ETextureMipValueMode.hpp"
#include "ESamplerSourceMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureSample // Size: 0x1A0
	: public UMaterialExpressionTextureBase // Size: 0x78
{
private:
	typedef UMaterialExpressionTextureSample t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(996); // id32("Class Engine.MaterialExpressionTextureSample")
		return ptr;
	}
	FExpressionInput Coordinates; /* Ofs: 0x78 Size: 0x38 - StructProperty Engine.MaterialExpressionTextureSample.Coordinates */
	FExpressionInput TextureObject; /* Ofs: 0xB0 Size: 0x38 - StructProperty Engine.MaterialExpressionTextureSample.TextureObject */
	FExpressionInput MipValue; /* Ofs: 0xE8 Size: 0x38 - StructProperty Engine.MaterialExpressionTextureSample.MipValue */
	FExpressionInput CoordinatesDX; /* Ofs: 0x120 Size: 0x38 - StructProperty Engine.MaterialExpressionTextureSample.CoordinatesDX */
	FExpressionInput CoordinatesDY; /* Ofs: 0x158 Size: 0x38 - StructProperty Engine.MaterialExpressionTextureSample.CoordinatesDY */
	TEnumAsByte<enum ETextureMipValueMode> MipValueMode; /* Ofs: 0x190 Size: 0x1 - ByteProperty Engine.MaterialExpressionTextureSample.MipValueMode */
	TEnumAsByte<enum ESamplerSourceMode> SamplerSource; /* Ofs: 0x191 Size: 0x1 - ByteProperty Engine.MaterialExpressionTextureSample.SamplerSource */
	uint8_t UnknownData192[0x2];
	uint32_t ConstCoordinate; /* Ofs: 0x194 Size: 0x4 - UInt32Property Engine.MaterialExpressionTextureSample.ConstCoordinate */
	int32_t ConstMipValue; /* Ofs: 0x198 Size: 0x4 - IntProperty Engine.MaterialExpressionTextureSample.ConstMipValue */
	uint8_t UnknownData19C[0x4];


	inline bool SetCoordinates(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x78, value); }
	inline bool SetTextureObject(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xB0, value); }
	inline bool SetMipValue(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xE8, value); }
	inline bool SetCoordinatesDX(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x120, value); }
	inline bool SetCoordinatesDY(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x158, value); }
	inline bool SetMipValueMode(t_structHelper inst, TEnumAsByte<enum ETextureMipValueMode> value) { inst.WriteOffset(0x190, value); }
	inline bool SetSamplerSource(t_structHelper inst, TEnumAsByte<enum ESamplerSourceMode> value) { inst.WriteOffset(0x191, value); }
	inline bool SetConstCoordinate(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x194, value); }
	inline bool SetConstMipValue(t_structHelper inst, int32_t value) { inst.WriteOffset(0x198, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureSample = sizeof(UMaterialExpressionTextureSample); // 416
    static_assert(sizeof(UMaterialExpressionTextureSample) == 0x1A0, "Size of UMaterialExpressionTextureSample is not correct.");
	auto constexpr UMaterialExpressionTextureSample_Coordinates_Offset = offsetof(UMaterialExpressionTextureSample, Coordinates);
	static_assert(UMaterialExpressionTextureSample_Coordinates_Offset == 0x78, "UMaterialExpressionTextureSample::Coordinates offset is not 78");
	auto constexpr UMaterialExpressionTextureSample_TextureObject_Offset = offsetof(UMaterialExpressionTextureSample, TextureObject);
	static_assert(UMaterialExpressionTextureSample_TextureObject_Offset == 0xb0, "UMaterialExpressionTextureSample::TextureObject offset is not b0");
	auto constexpr UMaterialExpressionTextureSample_MipValue_Offset = offsetof(UMaterialExpressionTextureSample, MipValue);
	static_assert(UMaterialExpressionTextureSample_MipValue_Offset == 0xe8, "UMaterialExpressionTextureSample::MipValue offset is not e8");
	auto constexpr UMaterialExpressionTextureSample_CoordinatesDX_Offset = offsetof(UMaterialExpressionTextureSample, CoordinatesDX);
	static_assert(UMaterialExpressionTextureSample_CoordinatesDX_Offset == 0x120, "UMaterialExpressionTextureSample::CoordinatesDX offset is not 120");
	auto constexpr UMaterialExpressionTextureSample_CoordinatesDY_Offset = offsetof(UMaterialExpressionTextureSample, CoordinatesDY);
	static_assert(UMaterialExpressionTextureSample_CoordinatesDY_Offset == 0x158, "UMaterialExpressionTextureSample::CoordinatesDY offset is not 158");
	auto constexpr UMaterialExpressionTextureSample_MipValueMode_Offset = offsetof(UMaterialExpressionTextureSample, MipValueMode);
	static_assert(UMaterialExpressionTextureSample_MipValueMode_Offset == 0x190, "UMaterialExpressionTextureSample::MipValueMode offset is not 190");
	auto constexpr UMaterialExpressionTextureSample_SamplerSource_Offset = offsetof(UMaterialExpressionTextureSample, SamplerSource);
	static_assert(UMaterialExpressionTextureSample_SamplerSource_Offset == 0x191, "UMaterialExpressionTextureSample::SamplerSource offset is not 191");
	auto constexpr UMaterialExpressionTextureSample_ConstCoordinate_Offset = offsetof(UMaterialExpressionTextureSample, ConstCoordinate);
	static_assert(UMaterialExpressionTextureSample_ConstCoordinate_Offset == 0x194, "UMaterialExpressionTextureSample::ConstCoordinate offset is not 194");
	auto constexpr UMaterialExpressionTextureSample_ConstMipValue_Offset = offsetof(UMaterialExpressionTextureSample, ConstMipValue);
	static_assert(UMaterialExpressionTextureSample_ConstMipValue_Offset == 0x198, "UMaterialExpressionTextureSample::ConstMipValue offset is not 198");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
