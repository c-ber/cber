#pragma once
#include "UBodySetup.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkeletalBodySetup // Size: 0x3D0
	: public UBodySetup // Size: 0x3C0
{
private:
	typedef USkeletalBodySetup t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(679); // id32("Class Engine.SkeletalBodySetup")
		return ptr;
	}
//	TArray<struct FPhysicalAnimationProfile> PhysicalAnimationData; /* Ofs: 0x3B8 Size: 0x10 - ArrayProperty Engine.SkeletalBodySetup.PhysicalAnimationData */
	uint8_t UnknownData3C0[0x10];


//	inline bool SetPhysicalAnimationData(t_structHelper inst, TArray<struct FPhysicalAnimationProfile> value) { inst.WriteOffset(0x3B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkeletalBodySetup = sizeof(USkeletalBodySetup); // 976
    static_assert(sizeof(USkeletalBodySetup) == 0x3D0, "Size of USkeletalBodySetup is not correct.");
//	auto constexpr USkeletalBodySetup_PhysicalAnimationData_Offset = offsetof(USkeletalBodySetup, PhysicalAnimationData);
//	static_assert(USkeletalBodySetup_PhysicalAnimationData_Offset == 0x3b8, "USkeletalBodySetup::PhysicalAnimationData offset is not 3b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
