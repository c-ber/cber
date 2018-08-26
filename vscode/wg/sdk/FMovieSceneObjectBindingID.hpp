#pragma once
#include "EMovieSceneObjectBindingSpace.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneObjectBindingID // Size: 0x18
{
public:
    int32_t SequenceID; /* Ofs: 0x0 Size: 0x4 IntProperty MovieScene.MovieSceneObjectBindingID.SequenceID */
    TEnumAsByte<enum EMovieSceneObjectBindingSpace> Space; /* Ofs: 0x4 Size: 0x1 EnumProperty MovieScene.MovieSceneObjectBindingID.Space */
    uint8_t UnknownData5[0x3];
    FGuid Guid; /* Ofs: 0x8 Size: 0x10 StructProperty MovieScene.MovieSceneObjectBindingID.Guid */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneObjectBindingID = sizeof(FMovieSceneObjectBindingID); // 24
    static_assert(sizeof(FMovieSceneObjectBindingID) == 0x18, "Size of FMovieSceneObjectBindingID is not correct.");
	auto constexpr FMovieSceneObjectBindingID_SequenceID_Offset = offsetof(FMovieSceneObjectBindingID, SequenceID);
	static_assert(FMovieSceneObjectBindingID_SequenceID_Offset == 0x0, "FMovieSceneObjectBindingID::SequenceID offset is not 0");
	auto constexpr FMovieSceneObjectBindingID_Space_Offset = offsetof(FMovieSceneObjectBindingID, Space);
	static_assert(FMovieSceneObjectBindingID_Space_Offset == 0x4, "FMovieSceneObjectBindingID::Space offset is not 4");
	auto constexpr FMovieSceneObjectBindingID_Guid_Offset = offsetof(FMovieSceneObjectBindingID, Guid);
	static_assert(FMovieSceneObjectBindingID_Guid_Offset == 0x8, "FMovieSceneObjectBindingID::Guid offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
