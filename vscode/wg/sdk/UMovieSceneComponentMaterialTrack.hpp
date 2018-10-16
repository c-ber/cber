#pragma once
#include "UMovieSceneMaterialTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneComponentMaterialTrack // Size: 0xD0
	: public UMovieSceneMaterialTrack // Size: 0xD0
{
private:
	typedef UMovieSceneComponentMaterialTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114); // id32("Class MovieSceneTracks.MovieSceneComponentMaterialTrack")
		return ptr;
	}
//	int32_t MaterialIndex; /* Ofs: 0xC8 Size: 0x4 - IntProperty MovieSceneTracks.MovieSceneComponentMaterialTrack.MaterialIndex */


//	inline bool SetMaterialIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneComponentMaterialTrack = sizeof(UMovieSceneComponentMaterialTrack); // 208
    static_assert(sizeof(UMovieSceneComponentMaterialTrack) == 0xD0, "Size of UMovieSceneComponentMaterialTrack is not correct.");
//	auto constexpr UMovieSceneComponentMaterialTrack_MaterialIndex_Offset = offsetof(UMovieSceneComponentMaterialTrack, MaterialIndex);
//	static_assert(UMovieSceneComponentMaterialTrack_MaterialIndex_Offset == 0xc8, "UMovieSceneComponentMaterialTrack::MaterialIndex offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
