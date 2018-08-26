#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeGrassType // Size: 0x68
	: public UObject // Size: 0x30
{
private:
	typedef ULandscapeGrassType t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1286); // id32("Class Landscape.LandscapeGrassType")
		return ptr;
	}
	TArray<struct FGrassVariety> GrassVarieties; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Landscape.LandscapeGrassType.GrassVarieties */
	ExternalPtr<struct UStaticMesh> GrassMesh; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Landscape.LandscapeGrassType.GrassMesh */
	float GrassDensity; /* Ofs: 0x48 Size: 0x4 - FloatProperty Landscape.LandscapeGrassType.GrassDensity */
	float PlacementJitter; /* Ofs: 0x4C Size: 0x4 - FloatProperty Landscape.LandscapeGrassType.PlacementJitter */
	int32_t StartCullDistance; /* Ofs: 0x50 Size: 0x4 - IntProperty Landscape.LandscapeGrassType.StartCullDistance */
	int32_t EndCullDistance; /* Ofs: 0x54 Size: 0x4 - IntProperty Landscape.LandscapeGrassType.EndCullDistance */
	uint8_t boolField58;
	uint8_t boolField59;
	uint8_t UnknownData5A[0xE];


	inline bool SetGrassVarieties(t_structHelper inst, TArray<struct FGrassVariety> value) { inst.WriteOffset(0x30, value); }
	inline bool SetGrassMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x40, value); }
	inline bool SetGrassDensity(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetPlacementJitter(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetStartCullDistance(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool SetEndCullDistance(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
	inline bool RandomRotation()
	{
		return boolField58& 0x1;
	}
	inline bool SetRandomRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AlignToSurface()
	{
		return boolField59& 0x1;
	}
	inline bool SetAlignToSurface(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x59, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeGrassType = sizeof(ULandscapeGrassType); // 104
    static_assert(sizeof(ULandscapeGrassType) == 0x68, "Size of ULandscapeGrassType is not correct.");
	auto constexpr ULandscapeGrassType_GrassVarieties_Offset = offsetof(ULandscapeGrassType, GrassVarieties);
	static_assert(ULandscapeGrassType_GrassVarieties_Offset == 0x30, "ULandscapeGrassType::GrassVarieties offset is not 30");
	auto constexpr ULandscapeGrassType_GrassMesh_Offset = offsetof(ULandscapeGrassType, GrassMesh);
	static_assert(ULandscapeGrassType_GrassMesh_Offset == 0x40, "ULandscapeGrassType::GrassMesh offset is not 40");
	auto constexpr ULandscapeGrassType_GrassDensity_Offset = offsetof(ULandscapeGrassType, GrassDensity);
	static_assert(ULandscapeGrassType_GrassDensity_Offset == 0x48, "ULandscapeGrassType::GrassDensity offset is not 48");
	auto constexpr ULandscapeGrassType_PlacementJitter_Offset = offsetof(ULandscapeGrassType, PlacementJitter);
	static_assert(ULandscapeGrassType_PlacementJitter_Offset == 0x4c, "ULandscapeGrassType::PlacementJitter offset is not 4c");
	auto constexpr ULandscapeGrassType_StartCullDistance_Offset = offsetof(ULandscapeGrassType, StartCullDistance);
	static_assert(ULandscapeGrassType_StartCullDistance_Offset == 0x50, "ULandscapeGrassType::StartCullDistance offset is not 50");
	auto constexpr ULandscapeGrassType_EndCullDistance_Offset = offsetof(ULandscapeGrassType, EndCullDistance);
	static_assert(ULandscapeGrassType_EndCullDistance_Offset == 0x54, "ULandscapeGrassType::EndCullDistance offset is not 54");
	auto constexpr ULandscapeGrassType_boolField58_Offset = offsetof(ULandscapeGrassType, boolField58);
	static_assert(ULandscapeGrassType_boolField58_Offset == 0x58, "ULandscapeGrassType::boolField58 offset is not 58");
	auto constexpr ULandscapeGrassType_boolField59_Offset = offsetof(ULandscapeGrassType, boolField59);
	static_assert(ULandscapeGrassType_boolField59_Offset == 0x59, "ULandscapeGrassType::boolField59 offset is not 59");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
