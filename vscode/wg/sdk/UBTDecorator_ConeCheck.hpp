#pragma once
#include "UBTDecorator.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_ConeCheck // Size: 0xF8
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_ConeCheck t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(578); // id32("Class AIModule.BTDecorator_ConeCheck")
		return ptr;
	}
	float ConeHalfAngle; /* Ofs: 0x70 Size: 0x4 - FloatProperty AIModule.BTDecorator_ConeCheck.ConeHalfAngle */
	uint8_t UnknownData74[0x4];
	FBlackboardKeySelector ConeOrigin; /* Ofs: 0x78 Size: 0x28 - StructProperty AIModule.BTDecorator_ConeCheck.ConeOrigin */
	FBlackboardKeySelector ConeDirection; /* Ofs: 0xA0 Size: 0x28 - StructProperty AIModule.BTDecorator_ConeCheck.ConeDirection */
	FBlackboardKeySelector Observed; /* Ofs: 0xC8 Size: 0x28 - StructProperty AIModule.BTDecorator_ConeCheck.Observed */
	uint8_t UnknownDataF0[0x8];


	inline bool SetConeHalfAngle(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetConeOrigin(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x78, value); }
	inline bool SetConeDirection(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0xA0, value); }
	inline bool SetObserved(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_ConeCheck = sizeof(UBTDecorator_ConeCheck); // 248
    static_assert(sizeof(UBTDecorator_ConeCheck) == 0xF8, "Size of UBTDecorator_ConeCheck is not correct.");
	auto constexpr UBTDecorator_ConeCheck_ConeHalfAngle_Offset = offsetof(UBTDecorator_ConeCheck, ConeHalfAngle);
	static_assert(UBTDecorator_ConeCheck_ConeHalfAngle_Offset == 0x70, "UBTDecorator_ConeCheck::ConeHalfAngle offset is not 70");
	auto constexpr UBTDecorator_ConeCheck_ConeOrigin_Offset = offsetof(UBTDecorator_ConeCheck, ConeOrigin);
	static_assert(UBTDecorator_ConeCheck_ConeOrigin_Offset == 0x78, "UBTDecorator_ConeCheck::ConeOrigin offset is not 78");
	auto constexpr UBTDecorator_ConeCheck_ConeDirection_Offset = offsetof(UBTDecorator_ConeCheck, ConeDirection);
	static_assert(UBTDecorator_ConeCheck_ConeDirection_Offset == 0xa0, "UBTDecorator_ConeCheck::ConeDirection offset is not a0");
	auto constexpr UBTDecorator_ConeCheck_Observed_Offset = offsetof(UBTDecorator_ConeCheck, Observed);
	static_assert(UBTDecorator_ConeCheck_Observed_Offset == 0xc8, "UBTDecorator_ConeCheck::Observed offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
