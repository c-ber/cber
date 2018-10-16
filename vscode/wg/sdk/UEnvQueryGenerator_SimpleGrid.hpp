#pragma once
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
#include "FAIDataProviderFloatValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_SimpleGrid // Size: 0xF0
	: public UEnvQueryGenerator_ProjectedPoints // Size: 0x88
{
private:
	typedef UEnvQueryGenerator_SimpleGrid t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(637); // id32("Class AIModule.EnvQueryGenerator_SimpleGrid")
		return ptr;
	}
	FAIDataProviderFloatValue GridSize; /* Ofs: 0x88 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_SimpleGrid.GridSize */
	FAIDataProviderFloatValue SpaceBetween; /* Ofs: 0xB8 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_SimpleGrid.SpaceBetween */
	ExternalPtr<struct UClass> GenerateAround; /* Ofs: 0xE8 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_SimpleGrid.GenerateAround */


	inline bool SetGridSize(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x88, value); }
	inline bool SetSpaceBetween(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0xB8, value); }
	inline bool SetGenerateAround(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xE8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_SimpleGrid = sizeof(UEnvQueryGenerator_SimpleGrid); // 240
    static_assert(sizeof(UEnvQueryGenerator_SimpleGrid) == 0xF0, "Size of UEnvQueryGenerator_SimpleGrid is not correct.");
	auto constexpr UEnvQueryGenerator_SimpleGrid_GridSize_Offset = offsetof(UEnvQueryGenerator_SimpleGrid, GridSize);
	static_assert(UEnvQueryGenerator_SimpleGrid_GridSize_Offset == 0x88, "UEnvQueryGenerator_SimpleGrid::GridSize offset is not 88");
	auto constexpr UEnvQueryGenerator_SimpleGrid_SpaceBetween_Offset = offsetof(UEnvQueryGenerator_SimpleGrid, SpaceBetween);
	static_assert(UEnvQueryGenerator_SimpleGrid_SpaceBetween_Offset == 0xb8, "UEnvQueryGenerator_SimpleGrid::SpaceBetween offset is not b8");
	auto constexpr UEnvQueryGenerator_SimpleGrid_GenerateAround_Offset = offsetof(UEnvQueryGenerator_SimpleGrid, GenerateAround);
	static_assert(UEnvQueryGenerator_SimpleGrid_GenerateAround_Offset == 0xe8, "UEnvQueryGenerator_SimpleGrid::GenerateAround offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
