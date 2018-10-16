#pragma once
#include "UMovementComponent.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URotatingMovementComponent // Size: 0x250
	: public UMovementComponent // Size: 0x230
{
private:
	typedef URotatingMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1803); // id32("Class Engine.RotatingMovementComponent")
		return ptr;
	}
	FRotator RotationRate; /* Ofs: 0x230 Size: 0xC - StructProperty Engine.RotatingMovementComponent.RotationRate */
	FVector PivotTranslation; /* Ofs: 0x23C Size: 0xC - StructProperty Engine.RotatingMovementComponent.PivotTranslation */
	uint8_t boolField248;
	uint8_t UnknownData249[0x7];


	inline bool SetRotationRate(t_structHelper inst, FRotator value) { inst.WriteOffset(0x230, value); }
	inline bool SetPivotTranslation(t_structHelper inst, FVector value) { inst.WriteOffset(0x23C, value); }
	inline bool bRotationInLocalSpace()
	{
		return boolField248& 0x1;
	}
	inline bool SetbRotationInLocalSpace(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x248, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURotatingMovementComponent = sizeof(URotatingMovementComponent); // 592
    static_assert(sizeof(URotatingMovementComponent) == 0x250, "Size of URotatingMovementComponent is not correct.");
	auto constexpr URotatingMovementComponent_RotationRate_Offset = offsetof(URotatingMovementComponent, RotationRate);
	static_assert(URotatingMovementComponent_RotationRate_Offset == 0x230, "URotatingMovementComponent::RotationRate offset is not 230");
	auto constexpr URotatingMovementComponent_PivotTranslation_Offset = offsetof(URotatingMovementComponent, PivotTranslation);
	static_assert(URotatingMovementComponent_PivotTranslation_Offset == 0x23c, "URotatingMovementComponent::PivotTranslation offset is not 23c");
	auto constexpr URotatingMovementComponent_boolField248_Offset = offsetof(URotatingMovementComponent, boolField248);
	static_assert(URotatingMovementComponent_boolField248_Offset == 0x248, "URotatingMovementComponent::boolField248 offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
