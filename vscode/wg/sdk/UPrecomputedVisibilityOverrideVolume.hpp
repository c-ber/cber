#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPrecomputedVisibilityOverrideVolume // Size: 0x470
	: public UVolume // Size: 0x440
{
private:
	typedef UPrecomputedVisibilityOverrideVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1726); // id32("Class Engine.PrecomputedVisibilityOverrideVolume")
		return ptr;
	}
	TArray<ExternalPtr<struct UActor>> OverrideVisibleActors; /* Ofs: 0x440 Size: 0x10 - ArrayProperty Engine.PrecomputedVisibilityOverrideVolume.OverrideVisibleActors */
	TArray<ExternalPtr<struct UActor>> OverrideInvisibleActors; /* Ofs: 0x450 Size: 0x10 - ArrayProperty Engine.PrecomputedVisibilityOverrideVolume.OverrideInvisibleActors */
	TArray<struct FName> OverrideInvisibleLevels; /* Ofs: 0x460 Size: 0x10 - ArrayProperty Engine.PrecomputedVisibilityOverrideVolume.OverrideInvisibleLevels */


	inline bool SetOverrideVisibleActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x440, value); }
	inline bool SetOverrideInvisibleActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x450, value); }
	inline bool SetOverrideInvisibleLevels(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPrecomputedVisibilityOverrideVolume = sizeof(UPrecomputedVisibilityOverrideVolume); // 1136
    static_assert(sizeof(UPrecomputedVisibilityOverrideVolume) == 0x470, "Size of UPrecomputedVisibilityOverrideVolume is not correct.");
	auto constexpr UPrecomputedVisibilityOverrideVolume_OverrideVisibleActors_Offset = offsetof(UPrecomputedVisibilityOverrideVolume, OverrideVisibleActors);
	static_assert(UPrecomputedVisibilityOverrideVolume_OverrideVisibleActors_Offset == 0x440, "UPrecomputedVisibilityOverrideVolume::OverrideVisibleActors offset is not 440");
	auto constexpr UPrecomputedVisibilityOverrideVolume_OverrideInvisibleActors_Offset = offsetof(UPrecomputedVisibilityOverrideVolume, OverrideInvisibleActors);
	static_assert(UPrecomputedVisibilityOverrideVolume_OverrideInvisibleActors_Offset == 0x450, "UPrecomputedVisibilityOverrideVolume::OverrideInvisibleActors offset is not 450");
	auto constexpr UPrecomputedVisibilityOverrideVolume_OverrideInvisibleLevels_Offset = offsetof(UPrecomputedVisibilityOverrideVolume, OverrideInvisibleLevels);
	static_assert(UPrecomputedVisibilityOverrideVolume_OverrideInvisibleLevels_Offset == 0x460, "UPrecomputedVisibilityOverrideVolume::OverrideInvisibleLevels offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
