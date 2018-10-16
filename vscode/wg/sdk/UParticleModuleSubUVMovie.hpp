#pragma once
#include "UParticleModuleSubUV.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSubUVMovie // Size: 0xC8
	: public UParticleModuleSubUV // Size: 0x80
{
private:
	typedef UParticleModuleSubUVMovie t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1148); // id32("Class Engine.ParticleModuleSubUVMovie")
		return ptr;
	}
	uint8_t boolField80;
	uint8_t UnknownData81[0x7];
	FRawDistributionFloat FrameRate; /* Ofs: 0x88 Size: 0x38 - StructProperty Engine.ParticleModuleSubUVMovie.FrameRate */
	int32_t StartingFrame; /* Ofs: 0xC0 Size: 0x4 - IntProperty Engine.ParticleModuleSubUVMovie.StartingFrame */
	uint8_t UnknownDataC4[0x4];


	inline bool bUseEmitterTime()
	{
		return boolField80& 0x1;
	}
	inline bool SetbUseEmitterTime(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFrameRate(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x88, value); }
	inline bool SetStartingFrame(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSubUVMovie = sizeof(UParticleModuleSubUVMovie); // 200
    static_assert(sizeof(UParticleModuleSubUVMovie) == 0xC8, "Size of UParticleModuleSubUVMovie is not correct.");
	auto constexpr UParticleModuleSubUVMovie_boolField80_Offset = offsetof(UParticleModuleSubUVMovie, boolField80);
	static_assert(UParticleModuleSubUVMovie_boolField80_Offset == 0x80, "UParticleModuleSubUVMovie::boolField80 offset is not 80");
	auto constexpr UParticleModuleSubUVMovie_FrameRate_Offset = offsetof(UParticleModuleSubUVMovie, FrameRate);
	static_assert(UParticleModuleSubUVMovie_FrameRate_Offset == 0x88, "UParticleModuleSubUVMovie::FrameRate offset is not 88");
	auto constexpr UParticleModuleSubUVMovie_StartingFrame_Offset = offsetof(UParticleModuleSubUVMovie, StartingFrame);
	static_assert(UParticleModuleSubUVMovie_StartingFrame_Offset == 0xc0, "UParticleModuleSubUVMovie::StartingFrame offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
