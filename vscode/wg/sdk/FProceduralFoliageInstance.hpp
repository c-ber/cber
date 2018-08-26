#pragma once
#include "FVector.hpp"
#include "FQuat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FProceduralFoliageInstance // Size: 0x60
{
public:
    FVector Location; /* Ofs: 0x0 Size: 0xC StructProperty Foliage.ProceduralFoliageInstance.Location */
    uint8_t UnknownDataC[0x4];
    FQuat Rotation; /* Ofs: 0x10 Size: 0x10 StructProperty Foliage.ProceduralFoliageInstance.Rotation */
    FVector Normal; /* Ofs: 0x20 Size: 0xC StructProperty Foliage.ProceduralFoliageInstance.Normal */
    float Age; /* Ofs: 0x2C Size: 0x4 FloatProperty Foliage.ProceduralFoliageInstance.Age */
    float Scale; /* Ofs: 0x30 Size: 0x4 FloatProperty Foliage.ProceduralFoliageInstance.Scale */
    uint8_t UnknownData34[0x4];
    ExternalPtr<struct UFoliageType_InstancedStaticMesh> Type; /* Ofs: 0x38 Size: 0x8 ObjectProperty Foliage.ProceduralFoliageInstance.Type */
    uint8_t UnknownData40[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFProceduralFoliageInstance = sizeof(FProceduralFoliageInstance); // 96
    static_assert(sizeof(FProceduralFoliageInstance) == 0x60, "Size of FProceduralFoliageInstance is not correct.");
	auto constexpr FProceduralFoliageInstance_Location_Offset = offsetof(FProceduralFoliageInstance, Location);
	static_assert(FProceduralFoliageInstance_Location_Offset == 0x0, "FProceduralFoliageInstance::Location offset is not 0");
	auto constexpr FProceduralFoliageInstance_Rotation_Offset = offsetof(FProceduralFoliageInstance, Rotation);
	static_assert(FProceduralFoliageInstance_Rotation_Offset == 0x10, "FProceduralFoliageInstance::Rotation offset is not 10");
	auto constexpr FProceduralFoliageInstance_Normal_Offset = offsetof(FProceduralFoliageInstance, Normal);
	static_assert(FProceduralFoliageInstance_Normal_Offset == 0x20, "FProceduralFoliageInstance::Normal offset is not 20");
	auto constexpr FProceduralFoliageInstance_Age_Offset = offsetof(FProceduralFoliageInstance, Age);
	static_assert(FProceduralFoliageInstance_Age_Offset == 0x2c, "FProceduralFoliageInstance::Age offset is not 2c");
	auto constexpr FProceduralFoliageInstance_Scale_Offset = offsetof(FProceduralFoliageInstance, Scale);
	static_assert(FProceduralFoliageInstance_Scale_Offset == 0x30, "FProceduralFoliageInstance::Scale offset is not 30");
	auto constexpr FProceduralFoliageInstance_Type_Offset = offsetof(FProceduralFoliageInstance, Type);
	static_assert(FProceduralFoliageInstance_Type_Offset == 0x38, "FProceduralFoliageInstance::Type offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
