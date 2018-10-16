#pragma once
#include "UParticleModuleSubUVBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSubUV // Size: 0x80
	: public UParticleModuleSubUVBase // Size: 0x38
{
private:
	typedef UParticleModuleSubUV t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1147); // id32("Class Engine.ParticleModuleSubUV")
		return ptr;
	}
	ExternalPtr<struct USubUVAnimation> Animation; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.ParticleModuleSubUV.Animation */
	FRawDistributionFloat SubImageIndex; /* Ofs: 0x40 Size: 0x38 - StructProperty Engine.ParticleModuleSubUV.SubImageIndex */
	uint8_t boolField78;
	uint8_t UnknownData79[0x7];


	inline bool SetAnimation(t_structHelper inst, ExternalPtr<struct USubUVAnimation> value) { inst.WriteOffset(0x38, value); }
	inline bool SetSubImageIndex(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x40, value); }
	inline bool bUseRealTime()
	{
		return boolField78& 0x1;
	}
	inline bool SetbUseRealTime(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x78, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSubUV = sizeof(UParticleModuleSubUV); // 128
    static_assert(sizeof(UParticleModuleSubUV) == 0x80, "Size of UParticleModuleSubUV is not correct.");
	auto constexpr UParticleModuleSubUV_Animation_Offset = offsetof(UParticleModuleSubUV, Animation);
	static_assert(UParticleModuleSubUV_Animation_Offset == 0x38, "UParticleModuleSubUV::Animation offset is not 38");
	auto constexpr UParticleModuleSubUV_SubImageIndex_Offset = offsetof(UParticleModuleSubUV, SubImageIndex);
	static_assert(UParticleModuleSubUV_SubImageIndex_Offset == 0x40, "UParticleModuleSubUV::SubImageIndex offset is not 40");
	auto constexpr UParticleModuleSubUV_boolField78_Offset = offsetof(UParticleModuleSubUV, boolField78);
	static_assert(UParticleModuleSubUV_boolField78_Offset == 0x78, "UParticleModuleSubUV::boolField78 offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
