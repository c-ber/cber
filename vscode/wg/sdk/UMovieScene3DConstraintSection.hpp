#pragma once
#include "UMovieSceneSection.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene3DConstraintSection // Size: 0xE0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieScene3DConstraintSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(79); // id32("Class MovieSceneTracks.MovieScene3DConstraintSection")
		return ptr;
	}
	FGuid ConstraintId; /* Ofs: 0xD0 Size: 0x10 - StructProperty MovieSceneTracks.MovieScene3DConstraintSection.ConstraintId */


	inline bool SetConstraintId(t_structHelper inst, FGuid value) { inst.WriteOffset(0xD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene3DConstraintSection = sizeof(UMovieScene3DConstraintSection); // 224
    static_assert(sizeof(UMovieScene3DConstraintSection) == 0xE0, "Size of UMovieScene3DConstraintSection is not correct.");
	auto constexpr UMovieScene3DConstraintSection_ConstraintId_Offset = offsetof(UMovieScene3DConstraintSection, ConstraintId);
	static_assert(UMovieScene3DConstraintSection_ConstraintId_Offset == 0xd0, "UMovieScene3DConstraintSection::ConstraintId offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
