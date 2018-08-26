#pragma once
#include "UBlueprint.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimBlueprint // Size: 0x1C0
	: public UBlueprint // Size: 0x1A0
{
private:
	typedef UAnimBlueprint t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(290); // id32("Class Engine.AnimBlueprint")
		return ptr;
	}
//	ExternalPtr<struct USkeleton> TargetSkeleton; /* Ofs: 0x198 Size: 0x8 - ObjectProperty Engine.AnimBlueprint.TargetSkeleton */
	TArray<struct FAnimGroupInfo> Groups; /* Ofs: 0x1A0 Size: 0x10 - ArrayProperty Engine.AnimBlueprint.Groups */
	uint8_t boolField1B0;
	uint8_t boolField1B1;
	uint8_t UnknownData1B2[0xE];


//	inline bool SetTargetSkeleton(t_structHelper inst, ExternalPtr<struct USkeleton> value) { inst.WriteOffset(0x198, value); }
	inline bool SetGroups(t_structHelper inst, TArray<struct FAnimGroupInfo> value) { inst.WriteOffset(0x1A0, value); }
	inline bool bUseMultiThreadedAnimationUpdate()
	{
		return boolField1B0& 0x1;
	}
	inline bool SetbUseMultiThreadedAnimationUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWarnAboutBlueprintUsage()
	{
		return boolField1B1& 0x1;
	}
	inline bool SetbWarnAboutBlueprintUsage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimBlueprint = sizeof(UAnimBlueprint); // 448
    static_assert(sizeof(UAnimBlueprint) == 0x1C0, "Size of UAnimBlueprint is not correct.");
//	auto constexpr UAnimBlueprint_TargetSkeleton_Offset = offsetof(UAnimBlueprint, TargetSkeleton);
//	static_assert(UAnimBlueprint_TargetSkeleton_Offset == 0x198, "UAnimBlueprint::TargetSkeleton offset is not 198");
	auto constexpr UAnimBlueprint_Groups_Offset = offsetof(UAnimBlueprint, Groups);
	static_assert(UAnimBlueprint_Groups_Offset == 0x1a0, "UAnimBlueprint::Groups offset is not 1a0");
	auto constexpr UAnimBlueprint_boolField1B0_Offset = offsetof(UAnimBlueprint, boolField1B0);
	static_assert(UAnimBlueprint_boolField1B0_Offset == 0x1b0, "UAnimBlueprint::boolField1B0 offset is not 1b0");
	auto constexpr UAnimBlueprint_boolField1B1_Offset = offsetof(UAnimBlueprint, boolField1B1);
	static_assert(UAnimBlueprint_boolField1B1_Offset == 0x1b1, "UAnimBlueprint::boolField1B1 offset is not 1b1");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
