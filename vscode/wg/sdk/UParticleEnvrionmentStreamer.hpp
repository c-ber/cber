#pragma once
#include "UTslStreamer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleEnvrionmentStreamer // Size: 0x68
	: public UTslStreamer // Size: 0x50
{
private:
	typedef UParticleEnvrionmentStreamer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1508); // id32("Class TslGame.ParticleEnvrionmentStreamer")
		return ptr;
	}
	uint8_t boolField50;
	uint8_t UnknownData51[0x3];
	float ToleranceDeactiveDistance; /* Ofs: 0x54 Size: 0x4 - FloatProperty TslGame.ParticleEnvrionmentStreamer.ToleranceDeactiveDistance */
	uint8_t UnknownData58[0x10];


	inline bool bEnabled()
	{
		return boolField50& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetToleranceDeactiveDistance(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleEnvrionmentStreamer = sizeof(UParticleEnvrionmentStreamer); // 104
    static_assert(sizeof(UParticleEnvrionmentStreamer) == 0x68, "Size of UParticleEnvrionmentStreamer is not correct.");
	auto constexpr UParticleEnvrionmentStreamer_boolField50_Offset = offsetof(UParticleEnvrionmentStreamer, boolField50);
	static_assert(UParticleEnvrionmentStreamer_boolField50_Offset == 0x50, "UParticleEnvrionmentStreamer::boolField50 offset is not 50");
	auto constexpr UParticleEnvrionmentStreamer_ToleranceDeactiveDistance_Offset = offsetof(UParticleEnvrionmentStreamer, ToleranceDeactiveDistance);
	static_assert(UParticleEnvrionmentStreamer_ToleranceDeactiveDistance_Offset == 0x54, "UParticleEnvrionmentStreamer::ToleranceDeactiveDistance offset is not 54");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
