#pragma once
#include "UGeometryCacheTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeometryCacheTrack_FlipbookAnimation // Size: 0x80
	: public UGeometryCacheTrack // Size: 0x58
{
private:
	typedef UGeometryCacheTrack_FlipbookAnimation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1997); // id32("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation")
		return ptr;
	}
	uint32_t NumMeshSamples; /* Ofs: 0x58 Size: 0x4 - UInt32Property GeometryCache.GeometryCacheTrack_FlipbookAnimation.NumMeshSamples */
	uint8_t UnknownData5C[0x24];


	inline bool SetNumMeshSamples(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeometryCacheTrack_FlipbookAnimation = sizeof(UGeometryCacheTrack_FlipbookAnimation); // 128
    static_assert(sizeof(UGeometryCacheTrack_FlipbookAnimation) == 0x80, "Size of UGeometryCacheTrack_FlipbookAnimation is not correct.");
	auto constexpr UGeometryCacheTrack_FlipbookAnimation_NumMeshSamples_Offset = offsetof(UGeometryCacheTrack_FlipbookAnimation, NumMeshSamples);
	static_assert(UGeometryCacheTrack_FlipbookAnimation_NumMeshSamples_Offset == 0x58, "UGeometryCacheTrack_FlipbookAnimation::NumMeshSamples offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
