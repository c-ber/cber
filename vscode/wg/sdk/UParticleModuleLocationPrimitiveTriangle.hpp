#pragma once
#include "UParticleModuleLocationBase.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationPrimitiveTriangle // Size: 0x130
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModuleLocationPrimitiveTriangle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1108); // id32("Class Engine.ParticleModuleLocationPrimitiveTriangle")
		return ptr;
	}
	FRawDistributionVector StartOffset; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleLocationPrimitiveTriangle.StartOffset */
	FRawDistributionFloat Height; /* Ofs: 0x88 Size: 0x38 - StructProperty Engine.ParticleModuleLocationPrimitiveTriangle.Height */
	FRawDistributionFloat Angle; /* Ofs: 0xC0 Size: 0x38 - StructProperty Engine.ParticleModuleLocationPrimitiveTriangle.Angle */
	FRawDistributionFloat Thickness; /* Ofs: 0xF8 Size: 0x38 - StructProperty Engine.ParticleModuleLocationPrimitiveTriangle.Thickness */


	inline bool SetStartOffset(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetHeight(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x88, value); }
	inline bool SetAngle(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xC0, value); }
	inline bool SetThickness(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xF8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationPrimitiveTriangle = sizeof(UParticleModuleLocationPrimitiveTriangle); // 304
    static_assert(sizeof(UParticleModuleLocationPrimitiveTriangle) == 0x130, "Size of UParticleModuleLocationPrimitiveTriangle is not correct.");
	auto constexpr UParticleModuleLocationPrimitiveTriangle_StartOffset_Offset = offsetof(UParticleModuleLocationPrimitiveTriangle, StartOffset);
	static_assert(UParticleModuleLocationPrimitiveTriangle_StartOffset_Offset == 0x38, "UParticleModuleLocationPrimitiveTriangle::StartOffset offset is not 38");
	auto constexpr UParticleModuleLocationPrimitiveTriangle_Height_Offset = offsetof(UParticleModuleLocationPrimitiveTriangle, Height);
	static_assert(UParticleModuleLocationPrimitiveTriangle_Height_Offset == 0x88, "UParticleModuleLocationPrimitiveTriangle::Height offset is not 88");
	auto constexpr UParticleModuleLocationPrimitiveTriangle_Angle_Offset = offsetof(UParticleModuleLocationPrimitiveTriangle, Angle);
	static_assert(UParticleModuleLocationPrimitiveTriangle_Angle_Offset == 0xc0, "UParticleModuleLocationPrimitiveTriangle::Angle offset is not c0");
	auto constexpr UParticleModuleLocationPrimitiveTriangle_Thickness_Offset = offsetof(UParticleModuleLocationPrimitiveTriangle, Thickness);
	static_assert(UParticleModuleLocationPrimitiveTriangle_Thickness_Offset == 0xf8, "UParticleModuleLocationPrimitiveTriangle::Thickness offset is not f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
