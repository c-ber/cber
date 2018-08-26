#pragma once
#include "UMovieSceneSequencePlayer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UActorSequencePlayer // Size: 0x700
	: public UMovieSceneSequencePlayer // Size: 0x700
{
private:
	typedef UActorSequencePlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(427); // id32("Class ActorSequence.ActorSequencePlayer")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUActorSequencePlayer = sizeof(UActorSequencePlayer); // 1792
    static_assert(sizeof(UActorSequencePlayer) == 0x700, "Size of UActorSequencePlayer is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
