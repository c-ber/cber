#pragma once
#include "UParticleModuleAttractorBase.hpp"
#include "FVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAttractorLine // Size: 0xC0
	: public UParticleModuleAttractorBase // Size: 0x38
{
private:
	typedef UParticleModuleAttractorLine t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1061); // id32("Class Engine.ParticleModuleAttractorLine")
		return ptr;
	}
	FVector EndPoint0; /* Ofs: 0x38 Size: 0xC - StructProperty Engine.ParticleModuleAttractorLine.EndPoint0 */
	FVector EndPoint1; /* Ofs: 0x44 Size: 0xC - StructProperty Engine.ParticleModuleAttractorLine.EndPoint1 */
	FRawDistributionFloat Range; /* Ofs: 0x50 Size: 0x38 - StructProperty Engine.ParticleModuleAttractorLine.Range */
	FRawDistributionFloat Strength; /* Ofs: 0x88 Size: 0x38 - StructProperty Engine.ParticleModuleAttractorLine.Strength */


	inline bool SetEndPoint0(t_structHelper inst, FVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetEndPoint1(t_structHelper inst, FVector value) { inst.WriteOffset(0x44, value); }
	inline bool SetRange(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x50, value); }
	inline bool SetStrength(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAttractorLine = sizeof(UParticleModuleAttractorLine); // 192
    static_assert(sizeof(UParticleModuleAttractorLine) == 0xC0, "Size of UParticleModuleAttractorLine is not correct.");
	auto constexpr UParticleModuleAttractorLine_EndPoint0_Offset = offsetof(UParticleModuleAttractorLine, EndPoint0);
	static_assert(UParticleModuleAttractorLine_EndPoint0_Offset == 0x38, "UParticleModuleAttractorLine::EndPoint0 offset is not 38");
	auto constexpr UParticleModuleAttractorLine_EndPoint1_Offset = offsetof(UParticleModuleAttractorLine, EndPoint1);
	static_assert(UParticleModuleAttractorLine_EndPoint1_Offset == 0x44, "UParticleModuleAttractorLine::EndPoint1 offset is not 44");
	auto constexpr UParticleModuleAttractorLine_Range_Offset = offsetof(UParticleModuleAttractorLine, Range);
	static_assert(UParticleModuleAttractorLine_Range_Offset == 0x50, "UParticleModuleAttractorLine::Range offset is not 50");
	auto constexpr UParticleModuleAttractorLine_Strength_Offset = offsetof(UParticleModuleAttractorLine, Strength);
	static_assert(UParticleModuleAttractorLine_Strength_Offset == 0x88, "UParticleModuleAttractorLine::Strength offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
