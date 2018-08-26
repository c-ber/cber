#pragma once
#include "UParticleModuleLocationBase.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModulePivotOffset // Size: 0x40
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModulePivotOffset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1110); // id32("Class Engine.ParticleModulePivotOffset")
		return ptr;
	}
	FVector2D PivotOffset; /* Ofs: 0x38 Size: 0x8 - StructProperty Engine.ParticleModulePivotOffset.PivotOffset */


	inline bool SetPivotOffset(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModulePivotOffset = sizeof(UParticleModulePivotOffset); // 64
    static_assert(sizeof(UParticleModulePivotOffset) == 0x40, "Size of UParticleModulePivotOffset is not correct.");
	auto constexpr UParticleModulePivotOffset_PivotOffset_Offset = offsetof(UParticleModulePivotOffset, PivotOffset);
	static_assert(UParticleModulePivotOffset_PivotOffset_Offset == 0x38, "UParticleModulePivotOffset::PivotOffset offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
