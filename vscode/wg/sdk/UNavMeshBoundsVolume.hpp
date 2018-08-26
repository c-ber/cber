#pragma once
#include "UVolume.hpp"
#include "FNavAgentSelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavMeshBoundsVolume // Size: 0x450
	: public UVolume // Size: 0x440
{
private:
	typedef UNavMeshBoundsVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1716); // id32("Class Engine.NavMeshBoundsVolume")
		return ptr;
	}
	FNavAgentSelector SupportedAgents; /* Ofs: 0x440 Size: 0x4 - StructProperty Engine.NavMeshBoundsVolume.SupportedAgents */
	uint8_t UnknownData444[0xC];


	inline bool SetSupportedAgents(t_structHelper inst, FNavAgentSelector value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavMeshBoundsVolume = sizeof(UNavMeshBoundsVolume); // 1104
    static_assert(sizeof(UNavMeshBoundsVolume) == 0x450, "Size of UNavMeshBoundsVolume is not correct.");
	auto constexpr UNavMeshBoundsVolume_SupportedAgents_Offset = offsetof(UNavMeshBoundsVolume, SupportedAgents);
	static_assert(UNavMeshBoundsVolume_SupportedAgents_Offset == 0x440, "UNavMeshBoundsVolume::SupportedAgents offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
