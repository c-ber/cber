#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULODActor // Size: 0x440
	: public UActor // Size: 0x410
{
private:
	typedef ULODActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1754); // id32("Class Engine.LODActor")
		return ptr;
	}
//	ExternalPtr<struct UStaticMeshComponent> StaticMeshComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.LODActor.StaticMeshComponent */
	TArray<ExternalPtr<struct UActor>> SubActors; /* Ofs: 0x410 Size: 0x10 - ArrayProperty Engine.LODActor.SubActors */
	float LODDrawDistance; /* Ofs: 0x420 Size: 0x4 - FloatProperty Engine.LODActor.LODDrawDistance */
	int32_t LODLevel; /* Ofs: 0x424 Size: 0x4 - IntProperty Engine.LODActor.LODLevel */
	TArray<ExternalPtr<struct UObject>> SubObjects; /* Ofs: 0x428 Size: 0x10 - ArrayProperty Engine.LODActor.SubObjects */
	uint8_t UnknownData438[0x8];


//	inline bool SetStaticMeshComponent(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetSubActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x410, value); }
	inline bool SetLODDrawDistance(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool SetLODLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x424, value); }
	inline bool SetSubObjects(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULODActor = sizeof(ULODActor); // 1088
    static_assert(sizeof(ULODActor) == 0x440, "Size of ULODActor is not correct.");
//	auto constexpr ULODActor_StaticMeshComponent_Offset = offsetof(ULODActor, StaticMeshComponent);
//	static_assert(ULODActor_StaticMeshComponent_Offset == 0x408, "ULODActor::StaticMeshComponent offset is not 408");
	auto constexpr ULODActor_SubActors_Offset = offsetof(ULODActor, SubActors);
	static_assert(ULODActor_SubActors_Offset == 0x410, "ULODActor::SubActors offset is not 410");
	auto constexpr ULODActor_LODDrawDistance_Offset = offsetof(ULODActor, LODDrawDistance);
	static_assert(ULODActor_LODDrawDistance_Offset == 0x420, "ULODActor::LODDrawDistance offset is not 420");
	auto constexpr ULODActor_LODLevel_Offset = offsetof(ULODActor, LODLevel);
	static_assert(ULODActor_LODLevel_Offset == 0x424, "ULODActor::LODLevel offset is not 424");
	auto constexpr ULODActor_SubObjects_Offset = offsetof(ULODActor, SubObjects);
	static_assert(ULODActor_SubObjects_Offset == 0x428, "ULODActor::SubObjects offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
