#pragma once
#include "UMovieSceneCapture.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelCapture // Size: 0x270
	: public UMovieSceneCapture // Size: 0x250
{
private:
	typedef ULevelCapture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(159); // id32("Class MovieSceneCapture.LevelCapture")
		return ptr;
	}
//	uint8_t boolField248;
	uint8_t UnknownData250[0x4];
	FGuid PrerequisiteActorId; /* Ofs: 0x254 Size: 0x10 - StructProperty MovieSceneCapture.LevelCapture.PrerequisiteActorId */
	uint8_t UnknownData264[0xC];


	inline bool SetPrerequisiteActorId(t_structHelper inst, FGuid value) { inst.WriteOffset(0x254, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelCapture = sizeof(ULevelCapture); // 624
    static_assert(sizeof(ULevelCapture) == 0x270, "Size of ULevelCapture is not correct.");
//	auto constexpr ULevelCapture_boolField248_Offset = offsetof(ULevelCapture, boolField248);
//	static_assert(ULevelCapture_boolField248_Offset == 0x248, "ULevelCapture::boolField248 offset is not 248");
	auto constexpr ULevelCapture_PrerequisiteActorId_Offset = offsetof(ULevelCapture, PrerequisiteActorId);
	static_assert(ULevelCapture_PrerequisiteActorId_Offset == 0x254, "ULevelCapture::PrerequisiteActorId offset is not 254");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
