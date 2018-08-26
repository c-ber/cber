#pragma once
#include "UStaticMeshActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCrossActor // Size: 0x450
	: public UStaticMeshActor // Size: 0x420
{
private:
	typedef UCrossActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2064); // id32("Class RoadRuntime.CrossActor")
		return ptr;
	}
//	FString UniqueKey; /* Ofs: 0x418 Size: 0x10 - StrProperty RoadRuntime.CrossActor.UniqueKey */
	uint8_t UnknownData420[0x8];
	TArray<struct FCrossActorManager> SideActors; /* Ofs: 0x428 Size: 0x10 - ArrayProperty RoadRuntime.CrossActor.SideActors */
	TArray<struct FCrossMeshManager> SideMeshes; /* Ofs: 0x438 Size: 0x10 - ArrayProperty RoadRuntime.CrossActor.SideMeshes */
	uint8_t UnknownData448[0x8];


//	inline bool SetUniqueKey(t_structHelper inst, FString value) { inst.WriteOffset(0x418, value); }
	inline bool SetSideActors(t_structHelper inst, TArray<struct FCrossActorManager> value) { inst.WriteOffset(0x428, value); }
	inline bool SetSideMeshes(t_structHelper inst, TArray<struct FCrossMeshManager> value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCrossActor = sizeof(UCrossActor); // 1104
    static_assert(sizeof(UCrossActor) == 0x450, "Size of UCrossActor is not correct.");
//	auto constexpr UCrossActor_UniqueKey_Offset = offsetof(UCrossActor, UniqueKey);
//	static_assert(UCrossActor_UniqueKey_Offset == 0x418, "UCrossActor::UniqueKey offset is not 418");
	auto constexpr UCrossActor_SideActors_Offset = offsetof(UCrossActor, SideActors);
	static_assert(UCrossActor_SideActors_Offset == 0x428, "UCrossActor::SideActors offset is not 428");
	auto constexpr UCrossActor_SideMeshes_Offset = offsetof(UCrossActor, SideMeshes);
	static_assert(UCrossActor_SideMeshes_Offset == 0x438, "UCrossActor::SideMeshes offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
