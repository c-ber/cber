#pragma once
#include "FMovieSceneObjectBindingID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneBindingOverrideData // Size: 0x24
{
public:
    FMovieSceneObjectBindingID ObjectBindingId; /* Ofs: 0x0 Size: 0x18 StructProperty MovieScene.MovieSceneBindingOverrideData.ObjectBindingId */
    TWeakObjectPtr<ExternalPtr<struct UObject>> Object; /* Ofs: 0x18 Size: 0x8 WeakObjectProperty MovieScene.MovieSceneBindingOverrideData.Object */
    bool bOverridesDefault; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneBindingOverrideData.bOverridesDefault */
    uint8_t UnknownData21[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneBindingOverrideData = sizeof(FMovieSceneBindingOverrideData); // 36
    static_assert(sizeof(FMovieSceneBindingOverrideData) == 0x24, "Size of FMovieSceneBindingOverrideData is not correct.");
	auto constexpr FMovieSceneBindingOverrideData_ObjectBindingId_Offset = offsetof(FMovieSceneBindingOverrideData, ObjectBindingId);
	static_assert(FMovieSceneBindingOverrideData_ObjectBindingId_Offset == 0x0, "FMovieSceneBindingOverrideData::ObjectBindingId offset is not 0");
	auto constexpr FMovieSceneBindingOverrideData_Object_Offset = offsetof(FMovieSceneBindingOverrideData, Object);
	static_assert(FMovieSceneBindingOverrideData_Object_Offset == 0x18, "FMovieSceneBindingOverrideData::Object offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
