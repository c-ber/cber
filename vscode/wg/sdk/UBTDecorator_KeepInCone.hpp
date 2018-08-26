#pragma once
#include "UBTDecorator.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_KeepInCone // Size: 0xD0
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_KeepInCone t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(582); // id32("Class AIModule.BTDecorator_KeepInCone")
		return ptr;
	}
	float ConeHalfAngle; /* Ofs: 0x70 Size: 0x4 - FloatProperty AIModule.BTDecorator_KeepInCone.ConeHalfAngle */
	uint8_t UnknownData74[0x4];
	FBlackboardKeySelector ConeOrigin; /* Ofs: 0x78 Size: 0x28 - StructProperty AIModule.BTDecorator_KeepInCone.ConeOrigin */
	FBlackboardKeySelector Observed; /* Ofs: 0xA0 Size: 0x28 - StructProperty AIModule.BTDecorator_KeepInCone.Observed */
	uint8_t boolFieldC8;
	uint8_t UnknownDataC9[0x7];


	inline bool SetConeHalfAngle(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetConeOrigin(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x78, value); }
	inline bool SetObserved(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0xA0, value); }
	inline bool bUseSelfAsOrigin()
	{
		return boolFieldC8& 0x1;
	}
	inline bool SetbUseSelfAsOrigin(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseSelfAsObserved()
	{
		return boolFieldC8& 0x2;
	}
	inline bool SetbUseSelfAsObserved(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_KeepInCone = sizeof(UBTDecorator_KeepInCone); // 208
    static_assert(sizeof(UBTDecorator_KeepInCone) == 0xD0, "Size of UBTDecorator_KeepInCone is not correct.");
	auto constexpr UBTDecorator_KeepInCone_ConeHalfAngle_Offset = offsetof(UBTDecorator_KeepInCone, ConeHalfAngle);
	static_assert(UBTDecorator_KeepInCone_ConeHalfAngle_Offset == 0x70, "UBTDecorator_KeepInCone::ConeHalfAngle offset is not 70");
	auto constexpr UBTDecorator_KeepInCone_ConeOrigin_Offset = offsetof(UBTDecorator_KeepInCone, ConeOrigin);
	static_assert(UBTDecorator_KeepInCone_ConeOrigin_Offset == 0x78, "UBTDecorator_KeepInCone::ConeOrigin offset is not 78");
	auto constexpr UBTDecorator_KeepInCone_Observed_Offset = offsetof(UBTDecorator_KeepInCone, Observed);
	static_assert(UBTDecorator_KeepInCone_Observed_Offset == 0xa0, "UBTDecorator_KeepInCone::Observed offset is not a0");
	auto constexpr UBTDecorator_KeepInCone_boolFieldC8_Offset = offsetof(UBTDecorator_KeepInCone, boolFieldC8);
	static_assert(UBTDecorator_KeepInCone_boolFieldC8_Offset == 0xc8, "UBTDecorator_KeepInCone::boolFieldC8 offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
