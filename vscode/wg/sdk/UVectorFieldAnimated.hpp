#pragma once
#include "UVectorField.hpp"
#include "EVectorFieldConstructionOp.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVectorFieldAnimated // Size: 0x90
	: public UVectorField // Size: 0x50
{
private:
	typedef UVectorFieldAnimated t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1257); // id32("Class Engine.VectorFieldAnimated")
		return ptr;
	}
	ExternalPtr<struct UTexture2D> Texture; /* Ofs: 0x50 Size: 0x8 - ObjectProperty Engine.VectorFieldAnimated.Texture */
	TEnumAsByte<enum EVectorFieldConstructionOp> ConstructionOp; /* Ofs: 0x58 Size: 0x1 - ByteProperty Engine.VectorFieldAnimated.ConstructionOp */
	uint8_t UnknownData59[0x3];
	int32_t VolumeSizeX; /* Ofs: 0x5C Size: 0x4 - IntProperty Engine.VectorFieldAnimated.VolumeSizeX */
	int32_t VolumeSizeY; /* Ofs: 0x60 Size: 0x4 - IntProperty Engine.VectorFieldAnimated.VolumeSizeY */
	int32_t VolumeSizeZ; /* Ofs: 0x64 Size: 0x4 - IntProperty Engine.VectorFieldAnimated.VolumeSizeZ */
	int32_t SubImagesX; /* Ofs: 0x68 Size: 0x4 - IntProperty Engine.VectorFieldAnimated.SubImagesX */
	int32_t SubImagesY; /* Ofs: 0x6C Size: 0x4 - IntProperty Engine.VectorFieldAnimated.SubImagesY */
	int32_t FrameCount; /* Ofs: 0x70 Size: 0x4 - IntProperty Engine.VectorFieldAnimated.FrameCount */
	float FramesPerSecond; /* Ofs: 0x74 Size: 0x4 - FloatProperty Engine.VectorFieldAnimated.FramesPerSecond */
	uint8_t boolField78;
	uint8_t UnknownData79[0x7];
	ExternalPtr<struct UVectorFieldStatic> NoiseField; /* Ofs: 0x80 Size: 0x8 - ObjectProperty Engine.VectorFieldAnimated.NoiseField */
	float NoiseScale; /* Ofs: 0x88 Size: 0x4 - FloatProperty Engine.VectorFieldAnimated.NoiseScale */
	float NoiseMax; /* Ofs: 0x8C Size: 0x4 - FloatProperty Engine.VectorFieldAnimated.NoiseMax */


	inline bool SetTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x50, value); }
	inline bool SetConstructionOp(t_structHelper inst, TEnumAsByte<enum EVectorFieldConstructionOp> value) { inst.WriteOffset(0x58, value); }
	inline bool SetVolumeSizeX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5C, value); }
	inline bool SetVolumeSizeY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool SetVolumeSizeZ(t_structHelper inst, int32_t value) { inst.WriteOffset(0x64, value); }
	inline bool SetSubImagesX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x68, value); }
	inline bool SetSubImagesY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6C, value); }
	inline bool SetFrameCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x70, value); }
	inline bool SetFramesPerSecond(t_structHelper inst, float value) { inst.WriteOffset(0x74, value); }
	inline bool bLoop()
	{
		return boolField78& 0x1;
	}
	inline bool SetbLoop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x78, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNoiseField(t_structHelper inst, ExternalPtr<struct UVectorFieldStatic> value) { inst.WriteOffset(0x80, value); }
	inline bool SetNoiseScale(t_structHelper inst, float value) { inst.WriteOffset(0x88, value); }
	inline bool SetNoiseMax(t_structHelper inst, float value) { inst.WriteOffset(0x8C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVectorFieldAnimated = sizeof(UVectorFieldAnimated); // 144
    static_assert(sizeof(UVectorFieldAnimated) == 0x90, "Size of UVectorFieldAnimated is not correct.");
	auto constexpr UVectorFieldAnimated_Texture_Offset = offsetof(UVectorFieldAnimated, Texture);
	static_assert(UVectorFieldAnimated_Texture_Offset == 0x50, "UVectorFieldAnimated::Texture offset is not 50");
	auto constexpr UVectorFieldAnimated_ConstructionOp_Offset = offsetof(UVectorFieldAnimated, ConstructionOp);
	static_assert(UVectorFieldAnimated_ConstructionOp_Offset == 0x58, "UVectorFieldAnimated::ConstructionOp offset is not 58");
	auto constexpr UVectorFieldAnimated_VolumeSizeX_Offset = offsetof(UVectorFieldAnimated, VolumeSizeX);
	static_assert(UVectorFieldAnimated_VolumeSizeX_Offset == 0x5c, "UVectorFieldAnimated::VolumeSizeX offset is not 5c");
	auto constexpr UVectorFieldAnimated_VolumeSizeY_Offset = offsetof(UVectorFieldAnimated, VolumeSizeY);
	static_assert(UVectorFieldAnimated_VolumeSizeY_Offset == 0x60, "UVectorFieldAnimated::VolumeSizeY offset is not 60");
	auto constexpr UVectorFieldAnimated_VolumeSizeZ_Offset = offsetof(UVectorFieldAnimated, VolumeSizeZ);
	static_assert(UVectorFieldAnimated_VolumeSizeZ_Offset == 0x64, "UVectorFieldAnimated::VolumeSizeZ offset is not 64");
	auto constexpr UVectorFieldAnimated_SubImagesX_Offset = offsetof(UVectorFieldAnimated, SubImagesX);
	static_assert(UVectorFieldAnimated_SubImagesX_Offset == 0x68, "UVectorFieldAnimated::SubImagesX offset is not 68");
	auto constexpr UVectorFieldAnimated_SubImagesY_Offset = offsetof(UVectorFieldAnimated, SubImagesY);
	static_assert(UVectorFieldAnimated_SubImagesY_Offset == 0x6c, "UVectorFieldAnimated::SubImagesY offset is not 6c");
	auto constexpr UVectorFieldAnimated_FrameCount_Offset = offsetof(UVectorFieldAnimated, FrameCount);
	static_assert(UVectorFieldAnimated_FrameCount_Offset == 0x70, "UVectorFieldAnimated::FrameCount offset is not 70");
	auto constexpr UVectorFieldAnimated_FramesPerSecond_Offset = offsetof(UVectorFieldAnimated, FramesPerSecond);
	static_assert(UVectorFieldAnimated_FramesPerSecond_Offset == 0x74, "UVectorFieldAnimated::FramesPerSecond offset is not 74");
	auto constexpr UVectorFieldAnimated_boolField78_Offset = offsetof(UVectorFieldAnimated, boolField78);
	static_assert(UVectorFieldAnimated_boolField78_Offset == 0x78, "UVectorFieldAnimated::boolField78 offset is not 78");
	auto constexpr UVectorFieldAnimated_NoiseField_Offset = offsetof(UVectorFieldAnimated, NoiseField);
	static_assert(UVectorFieldAnimated_NoiseField_Offset == 0x80, "UVectorFieldAnimated::NoiseField offset is not 80");
	auto constexpr UVectorFieldAnimated_NoiseScale_Offset = offsetof(UVectorFieldAnimated, NoiseScale);
	static_assert(UVectorFieldAnimated_NoiseScale_Offset == 0x88, "UVectorFieldAnimated::NoiseScale offset is not 88");
	auto constexpr UVectorFieldAnimated_NoiseMax_Offset = offsetof(UVectorFieldAnimated, NoiseMax);
	static_assert(UVectorFieldAnimated_NoiseMax_Offset == 0x8c, "UVectorFieldAnimated::NoiseMax offset is not 8c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
