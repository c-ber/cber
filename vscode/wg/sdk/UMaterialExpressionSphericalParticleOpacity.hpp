#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSphericalParticleOpacity // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSphericalParticleOpacity t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(986); // id32("Class Engine.MaterialExpressionSphericalParticleOpacity")
		return ptr;
	}
	FExpressionInput Density; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionSphericalParticleOpacity.Density */
	float ConstantDensity; /* Ofs: 0xA0 Size: 0x4 - FloatProperty Engine.MaterialExpressionSphericalParticleOpacity.ConstantDensity */
	uint8_t UnknownDataA4[0x4];


	inline bool SetDensity(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetConstantDensity(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSphericalParticleOpacity = sizeof(UMaterialExpressionSphericalParticleOpacity); // 168
    static_assert(sizeof(UMaterialExpressionSphericalParticleOpacity) == 0xA8, "Size of UMaterialExpressionSphericalParticleOpacity is not correct.");
	auto constexpr UMaterialExpressionSphericalParticleOpacity_Density_Offset = offsetof(UMaterialExpressionSphericalParticleOpacity, Density);
	static_assert(UMaterialExpressionSphericalParticleOpacity_Density_Offset == 0x68, "UMaterialExpressionSphericalParticleOpacity::Density offset is not 68");
	auto constexpr UMaterialExpressionSphericalParticleOpacity_ConstantDensity_Offset = offsetof(UMaterialExpressionSphericalParticleOpacity, ConstantDensity);
	static_assert(UMaterialExpressionSphericalParticleOpacity_ConstantDensity_Offset == 0xa0, "UMaterialExpressionSphericalParticleOpacity::ConstantDensity offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
