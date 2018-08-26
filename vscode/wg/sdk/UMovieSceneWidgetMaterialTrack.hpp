#pragma once
#include "UMovieSceneMaterialTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneWidgetMaterialTrack // Size: 0xE0
	: public UMovieSceneMaterialTrack // Size: 0xD0
{
private:
	typedef UMovieSceneWidgetMaterialTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1632); // id32("Class UMG.MovieSceneWidgetMaterialTrack")
		return ptr;
	}
//	TArray<struct FName> BrushPropertyNamePath; /* Ofs: 0xC8 Size: 0x10 - ArrayProperty UMG.MovieSceneWidgetMaterialTrack.BrushPropertyNamePath */
	uint8_t UnknownDataD0[0x8];
	FName TrackName; /* Ofs: 0xD8 Size: 0x8 - NameProperty UMG.MovieSceneWidgetMaterialTrack.TrackName */


//	inline bool SetBrushPropertyNamePath(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetTrackName(t_structHelper inst, FName value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneWidgetMaterialTrack = sizeof(UMovieSceneWidgetMaterialTrack); // 224
    static_assert(sizeof(UMovieSceneWidgetMaterialTrack) == 0xE0, "Size of UMovieSceneWidgetMaterialTrack is not correct.");
//	auto constexpr UMovieSceneWidgetMaterialTrack_BrushPropertyNamePath_Offset = offsetof(UMovieSceneWidgetMaterialTrack, BrushPropertyNamePath);
//	static_assert(UMovieSceneWidgetMaterialTrack_BrushPropertyNamePath_Offset == 0xc8, "UMovieSceneWidgetMaterialTrack::BrushPropertyNamePath offset is not c8");
	auto constexpr UMovieSceneWidgetMaterialTrack_TrackName_Offset = offsetof(UMovieSceneWidgetMaterialTrack, TrackName);
	static_assert(UMovieSceneWidgetMaterialTrack_TrackName_Offset == 0xd8, "UMovieSceneWidgetMaterialTrack::TrackName offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
