#pragma once
#include "UParticleModuleOrbitBase.hpp"
#include "EOrbitChainMode.hpp"
#include "FRawDistributionVector.hpp"
#include "FOrbitOptions.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleOrbit // Size: 0x150
	: public UParticleModuleOrbitBase // Size: 0x40
{
private:
	typedef UParticleModuleOrbit t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1115); // id32("Class Engine.ParticleModuleOrbit")
		return ptr;
	}
	TEnumAsByte<enum EOrbitChainMode> ChainMode; /* Ofs: 0x40 Size: 0x1 - ByteProperty Engine.ParticleModuleOrbit.ChainMode */
	uint8_t UnknownData41[0x7];
	FRawDistributionVector OffsetAmount; /* Ofs: 0x48 Size: 0x50 - StructProperty Engine.ParticleModuleOrbit.OffsetAmount */
	FOrbitOptions OffsetOptions; /* Ofs: 0x98 Size: 0x4 - StructProperty Engine.ParticleModuleOrbit.OffsetOptions */
	uint8_t UnknownData9C[0x4];
	FRawDistributionVector RotationAmount; /* Ofs: 0xA0 Size: 0x50 - StructProperty Engine.ParticleModuleOrbit.RotationAmount */
	FOrbitOptions RotationOptions; /* Ofs: 0xF0 Size: 0x4 - StructProperty Engine.ParticleModuleOrbit.RotationOptions */
	uint8_t UnknownDataF4[0x4];
	FRawDistributionVector RotationRateAmount; /* Ofs: 0xF8 Size: 0x50 - StructProperty Engine.ParticleModuleOrbit.RotationRateAmount */
	FOrbitOptions RotationRateOptions; /* Ofs: 0x148 Size: 0x4 - StructProperty Engine.ParticleModuleOrbit.RotationRateOptions */
	uint8_t UnknownData14C[0x4];


	inline bool SetChainMode(t_structHelper inst, TEnumAsByte<enum EOrbitChainMode> value) { inst.WriteOffset(0x40, value); }
	inline bool SetOffsetAmount(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x48, value); }
	inline bool SetOffsetOptions(t_structHelper inst, FOrbitOptions value) { inst.WriteOffset(0x98, value); }
	inline bool SetRotationAmount(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0xA0, value); }
	inline bool SetRotationOptions(t_structHelper inst, FOrbitOptions value) { inst.WriteOffset(0xF0, value); }
	inline bool SetRotationRateAmount(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0xF8, value); }
	inline bool SetRotationRateOptions(t_structHelper inst, FOrbitOptions value) { inst.WriteOffset(0x148, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleOrbit = sizeof(UParticleModuleOrbit); // 336
    static_assert(sizeof(UParticleModuleOrbit) == 0x150, "Size of UParticleModuleOrbit is not correct.");
	auto constexpr UParticleModuleOrbit_ChainMode_Offset = offsetof(UParticleModuleOrbit, ChainMode);
	static_assert(UParticleModuleOrbit_ChainMode_Offset == 0x40, "UParticleModuleOrbit::ChainMode offset is not 40");
	auto constexpr UParticleModuleOrbit_OffsetAmount_Offset = offsetof(UParticleModuleOrbit, OffsetAmount);
	static_assert(UParticleModuleOrbit_OffsetAmount_Offset == 0x48, "UParticleModuleOrbit::OffsetAmount offset is not 48");
	auto constexpr UParticleModuleOrbit_OffsetOptions_Offset = offsetof(UParticleModuleOrbit, OffsetOptions);
	static_assert(UParticleModuleOrbit_OffsetOptions_Offset == 0x98, "UParticleModuleOrbit::OffsetOptions offset is not 98");
	auto constexpr UParticleModuleOrbit_RotationAmount_Offset = offsetof(UParticleModuleOrbit, RotationAmount);
	static_assert(UParticleModuleOrbit_RotationAmount_Offset == 0xa0, "UParticleModuleOrbit::RotationAmount offset is not a0");
	auto constexpr UParticleModuleOrbit_RotationOptions_Offset = offsetof(UParticleModuleOrbit, RotationOptions);
	static_assert(UParticleModuleOrbit_RotationOptions_Offset == 0xf0, "UParticleModuleOrbit::RotationOptions offset is not f0");
	auto constexpr UParticleModuleOrbit_RotationRateAmount_Offset = offsetof(UParticleModuleOrbit, RotationRateAmount);
	static_assert(UParticleModuleOrbit_RotationRateAmount_Offset == 0xf8, "UParticleModuleOrbit::RotationRateAmount offset is not f8");
	auto constexpr UParticleModuleOrbit_RotationRateOptions_Offset = offsetof(UParticleModuleOrbit, RotationRateOptions);
	static_assert(UParticleModuleOrbit_RotationRateOptions_Offset == 0x148, "UParticleModuleOrbit::RotationRateOptions offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
