#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSignedObject // Size: 0xB0
	: public UObject // Size: 0x30
{
private:
	typedef UMovieSceneSignedObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(76); // id32("Class MovieScene.MovieSceneSignedObject")
		return ptr;
	}
	FGuid Signature; /* Ofs: 0x30 Size: 0x10 - StructProperty MovieScene.MovieSceneSignedObject.Signature */
	uint8_t UnknownData40[0x70];


	inline bool SetSignature(t_structHelper inst, FGuid value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSignedObject = sizeof(UMovieSceneSignedObject); // 176
    static_assert(sizeof(UMovieSceneSignedObject) == 0xB0, "Size of UMovieSceneSignedObject is not correct.");
	auto constexpr UMovieSceneSignedObject_Signature_Offset = offsetof(UMovieSceneSignedObject, Signature);
	static_assert(UMovieSceneSignedObject_Signature_Offset == 0x30, "UMovieSceneSignedObject::Signature offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
