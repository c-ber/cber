#pragma once
#include "FComponentKey.hpp"
#include "FBlueprintCookedComponentInstancingData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FComponentOverrideRecord // Size: 0x80
{
public:
    ExternalPtr<struct UClass> ComponentClass; /* Ofs: 0x0 Size: 0x8 ClassProperty Engine.ComponentOverrideRecord.ComponentClass */
    ExternalPtr<struct UActorComponent> ComponentTemplate; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.ComponentOverrideRecord.ComponentTemplate */
    FComponentKey ComponentKey; /* Ofs: 0x10 Size: 0x20 StructProperty Engine.ComponentOverrideRecord.ComponentKey */
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData; /* Ofs: 0x30 Size: 0x50 StructProperty Engine.ComponentOverrideRecord.CookedComponentInstancingData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFComponentOverrideRecord = sizeof(FComponentOverrideRecord); // 128
    static_assert(sizeof(FComponentOverrideRecord) == 0x80, "Size of FComponentOverrideRecord is not correct.");
	auto constexpr FComponentOverrideRecord_ComponentClass_Offset = offsetof(FComponentOverrideRecord, ComponentClass);
	static_assert(FComponentOverrideRecord_ComponentClass_Offset == 0x0, "FComponentOverrideRecord::ComponentClass offset is not 0");
	auto constexpr FComponentOverrideRecord_ComponentTemplate_Offset = offsetof(FComponentOverrideRecord, ComponentTemplate);
	static_assert(FComponentOverrideRecord_ComponentTemplate_Offset == 0x8, "FComponentOverrideRecord::ComponentTemplate offset is not 8");
	auto constexpr FComponentOverrideRecord_ComponentKey_Offset = offsetof(FComponentOverrideRecord, ComponentKey);
	static_assert(FComponentOverrideRecord_ComponentKey_Offset == 0x10, "FComponentOverrideRecord::ComponentKey offset is not 10");
	auto constexpr FComponentOverrideRecord_CookedComponentInstancingData_Offset = offsetof(FComponentOverrideRecord, CookedComponentInstancingData);
	static_assert(FComponentOverrideRecord_CookedComponentInstancingData_Offset == 0x30, "FComponentOverrideRecord::CookedComponentInstancingData offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
