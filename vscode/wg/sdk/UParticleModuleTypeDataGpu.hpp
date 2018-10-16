#pragma once
#include "UParticleModuleTypeDataBase.hpp"
#include "FGPUSpriteEmitterInfo.hpp"
#include "FGPUSpriteResourceData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleTypeDataGpu // Size: 0x470
	: public UParticleModuleTypeDataBase // Size: 0x38
{
private:
	typedef UParticleModuleTypeDataGpu t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1154); // id32("Class Engine.ParticleModuleTypeDataGpu")
		return ptr;
	}
	uint8_t UnknownData38[0x8];
	FGPUSpriteEmitterInfo EmitterInfo; /* Ofs: 0x40 Size: 0x2C0 - StructProperty Engine.ParticleModuleTypeDataGpu.EmitterInfo */
	FGPUSpriteResourceData ResourceData; /* Ofs: 0x300 Size: 0x160 - StructProperty Engine.ParticleModuleTypeDataGpu.ResourceData */
	float CameraMotionBlurAmount; /* Ofs: 0x460 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataGpu.CameraMotionBlurAmount */
	uint8_t boolField464;
	uint8_t UnknownData465[0xB];


	inline bool SetEmitterInfo(t_structHelper inst, FGPUSpriteEmitterInfo value) { inst.WriteOffset(0x40, value); }
	inline bool SetResourceData(t_structHelper inst, FGPUSpriteResourceData value) { inst.WriteOffset(0x300, value); }
	inline bool SetCameraMotionBlurAmount(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool bClearExistingParticlesOnInit()
	{
		return boolField464& 0x1;
	}
	inline bool SetbClearExistingParticlesOnInit(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x464, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleTypeDataGpu = sizeof(UParticleModuleTypeDataGpu); // 1136
    static_assert(sizeof(UParticleModuleTypeDataGpu) == 0x470, "Size of UParticleModuleTypeDataGpu is not correct.");
	auto constexpr UParticleModuleTypeDataGpu_EmitterInfo_Offset = offsetof(UParticleModuleTypeDataGpu, EmitterInfo);
	static_assert(UParticleModuleTypeDataGpu_EmitterInfo_Offset == 0x40, "UParticleModuleTypeDataGpu::EmitterInfo offset is not 40");
	auto constexpr UParticleModuleTypeDataGpu_ResourceData_Offset = offsetof(UParticleModuleTypeDataGpu, ResourceData);
	static_assert(UParticleModuleTypeDataGpu_ResourceData_Offset == 0x300, "UParticleModuleTypeDataGpu::ResourceData offset is not 300");
	auto constexpr UParticleModuleTypeDataGpu_CameraMotionBlurAmount_Offset = offsetof(UParticleModuleTypeDataGpu, CameraMotionBlurAmount);
	static_assert(UParticleModuleTypeDataGpu_CameraMotionBlurAmount_Offset == 0x460, "UParticleModuleTypeDataGpu::CameraMotionBlurAmount offset is not 460");
	auto constexpr UParticleModuleTypeDataGpu_boolField464_Offset = offsetof(UParticleModuleTypeDataGpu, boolField464);
	static_assert(UParticleModuleTypeDataGpu_boolField464_Offset == 0x464, "UParticleModuleTypeDataGpu::boolField464 offset is not 464");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
