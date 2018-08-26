#pragma once
#include "UNavigationDataChunk.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URecastNavMeshDataChunk // Size: 0x48
	: public UNavigationDataChunk // Size: 0x38
{
private:
	typedef URecastNavMeshDataChunk t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1037); // id32("Class Engine.RecastNavMeshDataChunk")
		return ptr;
	}
	uint8_t UnknownData38[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURecastNavMeshDataChunk = sizeof(URecastNavMeshDataChunk); // 72
    static_assert(sizeof(URecastNavMeshDataChunk) == 0x48, "Size of URecastNavMeshDataChunk is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
