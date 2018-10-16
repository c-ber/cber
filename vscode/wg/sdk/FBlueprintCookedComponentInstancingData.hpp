#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintCookedComponentInstancingData // Size: 0x50
{
public:
    bool bIsValid; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.BlueprintCookedComponentInstancingData.bIsValid */
    uint8_t UnknownData1[0x7];
    TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.BlueprintCookedComponentInstancingData.ChangedPropertyList */
    uint8_t UnknownData18[0x38];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintCookedComponentInstancingData = sizeof(FBlueprintCookedComponentInstancingData); // 80
    static_assert(sizeof(FBlueprintCookedComponentInstancingData) == 0x50, "Size of FBlueprintCookedComponentInstancingData is not correct.");
	auto constexpr FBlueprintCookedComponentInstancingData_ChangedPropertyList_Offset = offsetof(FBlueprintCookedComponentInstancingData, ChangedPropertyList);
	static_assert(FBlueprintCookedComponentInstancingData_ChangedPropertyList_Offset == 0x8, "FBlueprintCookedComponentInstancingData::ChangedPropertyList offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
