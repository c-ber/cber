#pragma once
#include "UParticleModuleCameraBase.hpp"
#include "FRawDistributionFloat.hpp"
#include "EParticleCameraOffsetUpdateMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleCameraOffset // Size: 0x78
	: public UParticleModuleCameraBase // Size: 0x38
{
private:
	typedef UParticleModuleCameraOffset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1071); // id32("Class Engine.ParticleModuleCameraOffset")
		return ptr;
	}
	FRawDistributionFloat CameraOffset; /* Ofs: 0x38 Size: 0x38 - StructProperty Engine.ParticleModuleCameraOffset.CameraOffset */
	uint8_t boolField70;
	uint8_t UnknownData71[0x3];
	TEnumAsByte<enum EParticleCameraOffsetUpdateMethod> UpdateMethod; /* Ofs: 0x74 Size: 0x1 - ByteProperty Engine.ParticleModuleCameraOffset.UpdateMethod */
	uint8_t UnknownData75[0x3];


	inline bool SetCameraOffset(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x38, value); }
	inline bool bSpawnTimeOnly()
	{
		return boolField70& 0x1;
	}
	inline bool SetbSpawnTimeOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetUpdateMethod(t_structHelper inst, TEnumAsByte<enum EParticleCameraOffsetUpdateMethod> value) { inst.WriteOffset(0x74, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleCameraOffset = sizeof(UParticleModuleCameraOffset); // 120
    static_assert(sizeof(UParticleModuleCameraOffset) == 0x78, "Size of UParticleModuleCameraOffset is not correct.");
	auto constexpr UParticleModuleCameraOffset_CameraOffset_Offset = offsetof(UParticleModuleCameraOffset, CameraOffset);
	static_assert(UParticleModuleCameraOffset_CameraOffset_Offset == 0x38, "UParticleModuleCameraOffset::CameraOffset offset is not 38");
	auto constexpr UParticleModuleCameraOffset_boolField70_Offset = offsetof(UParticleModuleCameraOffset, boolField70);
	static_assert(UParticleModuleCameraOffset_boolField70_Offset == 0x70, "UParticleModuleCameraOffset::boolField70 offset is not 70");
	auto constexpr UParticleModuleCameraOffset_UpdateMethod_Offset = offsetof(UParticleModuleCameraOffset, UpdateMethod);
	static_assert(UParticleModuleCameraOffset_UpdateMethod_Offset == 0x74, "UParticleModuleCameraOffset::UpdateMethod offset is not 74");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
