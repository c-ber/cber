#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScenePropertySectionData // Size: 0x28
{
public:
    FName PropertyName; /* Ofs: 0x0 Size: 0x8 NameProperty MovieScene.MovieScenePropertySectionData.PropertyName */
    FString PropertyPath; /* Ofs: 0x8 Size: 0x10 StrProperty MovieScene.MovieScenePropertySectionData.PropertyPath */
    FName FunctionName; /* Ofs: 0x18 Size: 0x8 NameProperty MovieScene.MovieScenePropertySectionData.FunctionName */
    FName NotifyFunctionName; /* Ofs: 0x20 Size: 0x8 NameProperty MovieScene.MovieScenePropertySectionData.NotifyFunctionName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScenePropertySectionData = sizeof(FMovieScenePropertySectionData); // 40
    static_assert(sizeof(FMovieScenePropertySectionData) == 0x28, "Size of FMovieScenePropertySectionData is not correct.");
	auto constexpr FMovieScenePropertySectionData_PropertyName_Offset = offsetof(FMovieScenePropertySectionData, PropertyName);
	static_assert(FMovieScenePropertySectionData_PropertyName_Offset == 0x0, "FMovieScenePropertySectionData::PropertyName offset is not 0");
	auto constexpr FMovieScenePropertySectionData_PropertyPath_Offset = offsetof(FMovieScenePropertySectionData, PropertyPath);
	static_assert(FMovieScenePropertySectionData_PropertyPath_Offset == 0x8, "FMovieScenePropertySectionData::PropertyPath offset is not 8");
	auto constexpr FMovieScenePropertySectionData_FunctionName_Offset = offsetof(FMovieScenePropertySectionData, FunctionName);
	static_assert(FMovieScenePropertySectionData_FunctionName_Offset == 0x18, "FMovieScenePropertySectionData::FunctionName offset is not 18");
	auto constexpr FMovieScenePropertySectionData_NotifyFunctionName_Offset = offsetof(FMovieScenePropertySectionData, NotifyFunctionName);
	static_assert(FMovieScenePropertySectionData_NotifyFunctionName_Offset == 0x20, "FMovieScenePropertySectionData::NotifyFunctionName offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
