#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAkAmbientSound // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UAkAmbientSound t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2134); // id32("Class AkAudio.AkAmbientSound")
		return ptr;
	}
	uint8_t UnknownData410[0x8];
	ExternalPtr<struct UAkComponent> AkComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty AkAudio.AkAmbientSound.AkComponent */
	uint8_t boolField420;
	uint8_t UnknownData421[0x3];
	float AutoPlayDistance; /* Ofs: 0x424 Size: 0x4 - FloatProperty AkAudio.AkAmbientSound.AutoPlayDistance */
	uint8_t UnknownData428[0x8];


	inline bool SetAkComponent(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool AutoPost()
	{
		return boolField420& 0x1;
	}
	inline bool SetAutoPost(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x420, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAutoPlayDistance(t_structHelper inst, float value) { inst.WriteOffset(0x424, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAkAmbientSound = sizeof(UAkAmbientSound); // 1072
    static_assert(sizeof(UAkAmbientSound) == 0x430, "Size of UAkAmbientSound is not correct.");
	auto constexpr UAkAmbientSound_AkComponent_Offset = offsetof(UAkAmbientSound, AkComponent);
	static_assert(UAkAmbientSound_AkComponent_Offset == 0x418, "UAkAmbientSound::AkComponent offset is not 418");
	auto constexpr UAkAmbientSound_boolField420_Offset = offsetof(UAkAmbientSound, boolField420);
	static_assert(UAkAmbientSound_boolField420_Offset == 0x420, "UAkAmbientSound::boolField420 offset is not 420");
	auto constexpr UAkAmbientSound_AutoPlayDistance_Offset = offsetof(UAkAmbientSound, AutoPlayDistance);
	static_assert(UAkAmbientSound_AutoPlayDistance_Offset == 0x424, "UAkAmbientSound::AutoPlayDistance offset is not 424");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
