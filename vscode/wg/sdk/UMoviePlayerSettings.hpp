#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMoviePlayerSettings // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UMoviePlayerSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(153); // id32("Class MoviePlayer.MoviePlayerSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t boolField31;
	uint8_t UnknownData32[0x6];
	TArray<struct FString> StartupMovies; /* Ofs: 0x38 Size: 0x10 - ArrayProperty MoviePlayer.MoviePlayerSettings.StartupMovies */


	inline bool bWaitForMoviesToComplete()
	{
		return boolField30& 0x1;
	}
	inline bool SetbWaitForMoviesToComplete(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bMoviesAreSkippable()
	{
		return boolField31& 0x1;
	}
	inline bool SetbMoviesAreSkippable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStartupMovies(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMoviePlayerSettings = sizeof(UMoviePlayerSettings); // 72
    static_assert(sizeof(UMoviePlayerSettings) == 0x48, "Size of UMoviePlayerSettings is not correct.");
	auto constexpr UMoviePlayerSettings_boolField30_Offset = offsetof(UMoviePlayerSettings, boolField30);
	static_assert(UMoviePlayerSettings_boolField30_Offset == 0x30, "UMoviePlayerSettings::boolField30 offset is not 30");
	auto constexpr UMoviePlayerSettings_boolField31_Offset = offsetof(UMoviePlayerSettings, boolField31);
	static_assert(UMoviePlayerSettings_boolField31_Offset == 0x31, "UMoviePlayerSettings::boolField31 offset is not 31");
	auto constexpr UMoviePlayerSettings_StartupMovies_Offset = offsetof(UMoviePlayerSettings, StartupMovies);
	static_assert(UMoviePlayerSettings_StartupMovies_Offset == 0x38, "UMoviePlayerSettings::StartupMovies offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
