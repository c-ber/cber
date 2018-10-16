#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneBindingOverrides // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UMovieSceneBindingOverrides t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(320); // id32("Class MovieScene.MovieSceneBindingOverrides")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	TArray<struct FMovieSceneBindingOverrideData> BindingData; /* Ofs: 0x38 Size: 0x10 - ArrayProperty MovieScene.MovieSceneBindingOverrides.BindingData */
	uint8_t UnknownData48[0x58];


	inline bool SetBindingData(t_structHelper inst, TArray<struct FMovieSceneBindingOverrideData> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneBindingOverrides = sizeof(UMovieSceneBindingOverrides); // 160
    static_assert(sizeof(UMovieSceneBindingOverrides) == 0xA0, "Size of UMovieSceneBindingOverrides is not correct.");
	auto constexpr UMovieSceneBindingOverrides_BindingData_Offset = offsetof(UMovieSceneBindingOverrides, BindingData);
	static_assert(UMovieSceneBindingOverrides_BindingData_Offset == 0x38, "UMovieSceneBindingOverrides::BindingData offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
