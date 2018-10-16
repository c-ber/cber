#pragma once
#include "UMovieSceneSequence.hpp"
#include "FLevelSequenceObjectReferenceMap.hpp"
#include "FLevelSequenceBindingReferences.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelSequence // Size: 0x430
	: public UMovieSceneSequence // Size: 0x330
{
private:
	typedef ULevelSequence t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1620); // id32("Class LevelSequence.LevelSequence")
		return ptr;
	}
	ExternalPtr<struct UMovieScene> MovieScene; /* Ofs: 0x330 Size: 0x8 - ObjectProperty LevelSequence.LevelSequence.MovieScene */
	FLevelSequenceObjectReferenceMap ObjectReferences; /* Ofs: 0x338 Size: 0x50 - StructProperty LevelSequence.LevelSequence.ObjectReferences */
	FLevelSequenceBindingReferences BindingReferences; /* Ofs: 0x388 Size: 0x50 - StructProperty LevelSequence.LevelSequence.BindingReferences */
	TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; /* Ofs: 0x3D8 Size: 0x50 - MapProperty LevelSequence.LevelSequence.PossessedObjects */
	uint8_t UnknownData428[0x8];


	inline bool SetMovieScene(t_structHelper inst, ExternalPtr<struct UMovieScene> value) { inst.WriteOffset(0x330, value); }
	inline bool SetObjectReferences(t_structHelper inst, FLevelSequenceObjectReferenceMap value) { inst.WriteOffset(0x338, value); }
	inline bool SetBindingReferences(t_structHelper inst, FLevelSequenceBindingReferences value) { inst.WriteOffset(0x388, value); }
	inline bool SetPossessedObjects(t_structHelper inst, TMap<struct FString, struct FLevelSequenceObject> value) { inst.WriteOffset(0x3D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelSequence = sizeof(ULevelSequence); // 1072
    static_assert(sizeof(ULevelSequence) == 0x430, "Size of ULevelSequence is not correct.");
	auto constexpr ULevelSequence_MovieScene_Offset = offsetof(ULevelSequence, MovieScene);
	static_assert(ULevelSequence_MovieScene_Offset == 0x330, "ULevelSequence::MovieScene offset is not 330");
	auto constexpr ULevelSequence_ObjectReferences_Offset = offsetof(ULevelSequence, ObjectReferences);
	static_assert(ULevelSequence_ObjectReferences_Offset == 0x338, "ULevelSequence::ObjectReferences offset is not 338");
	auto constexpr ULevelSequence_BindingReferences_Offset = offsetof(ULevelSequence, BindingReferences);
	static_assert(ULevelSequence_BindingReferences_Offset == 0x388, "ULevelSequence::BindingReferences offset is not 388");
	auto constexpr ULevelSequence_PossessedObjects_Offset = offsetof(ULevelSequence, PossessedObjects);
	static_assert(ULevelSequence_PossessedObjects_Offset == 0x3d8, "ULevelSequence::PossessedObjects offset is not 3d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
