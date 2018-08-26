#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneBindingOwnerInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UMovieSceneBindingOwnerInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(321); // id32("Class MovieScene.MovieSceneBindingOwnerInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneBindingOwnerInterface = sizeof(UMovieSceneBindingOwnerInterface); // 48
    static_assert(sizeof(UMovieSceneBindingOwnerInterface) == 0x30, "Size of UMovieSceneBindingOwnerInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
