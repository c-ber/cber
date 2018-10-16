#pragma once
#include "UMovieSceneMaterialTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneMaterialParameterCollectionTrack // Size: 0xD0
	: public UMovieSceneMaterialTrack // Size: 0xD0
{
private:
	typedef UMovieSceneMaterialParameterCollectionTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115); // id32("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack")
		return ptr;
	}
//	ExternalPtr<struct UMaterialParameterCollection> MPC; /* Ofs: 0xC8 Size: 0x8 - ObjectProperty MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack.MPC */


//	inline bool SetMPC(t_structHelper inst, ExternalPtr<struct UMaterialParameterCollection> value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneMaterialParameterCollectionTrack = sizeof(UMovieSceneMaterialParameterCollectionTrack); // 208
    static_assert(sizeof(UMovieSceneMaterialParameterCollectionTrack) == 0xD0, "Size of UMovieSceneMaterialParameterCollectionTrack is not correct.");
//	auto constexpr UMovieSceneMaterialParameterCollectionTrack_MPC_Offset = offsetof(UMovieSceneMaterialParameterCollectionTrack, MPC);
//	static_assert(UMovieSceneMaterialParameterCollectionTrack_MPC_Offset == 0xc8, "UMovieSceneMaterialParameterCollectionTrack::MPC offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
