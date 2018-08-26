#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneBindingOverridesInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UMovieSceneBindingOverridesInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(319); // id32("Class MovieScene.MovieSceneBindingOverridesInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneBindingOverridesInterface = sizeof(UMovieSceneBindingOverridesInterface); // 48
    static_assert(sizeof(UMovieSceneBindingOverridesInterface) == 0x30, "Size of UMovieSceneBindingOverridesInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
