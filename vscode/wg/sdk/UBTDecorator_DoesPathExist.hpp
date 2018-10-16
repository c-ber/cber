#pragma once
#include "UBTDecorator.hpp"
#include "FBlackboardKeySelector.hpp"
#include "EPathExistanceQueryType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_DoesPathExist // Size: 0xD0
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_DoesPathExist t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(580); // id32("Class AIModule.BTDecorator_DoesPathExist")
		return ptr;
	}
	FBlackboardKeySelector BlackboardKeyA; /* Ofs: 0x70 Size: 0x28 - StructProperty AIModule.BTDecorator_DoesPathExist.BlackboardKeyA */
	FBlackboardKeySelector BlackboardKeyB; /* Ofs: 0x98 Size: 0x28 - StructProperty AIModule.BTDecorator_DoesPathExist.BlackboardKeyB */
	uint8_t boolFieldC0;
	uint8_t UnknownDataC1[0x3];
	TEnumAsByte<enum EPathExistanceQueryType> PathQueryType; /* Ofs: 0xC4 Size: 0x1 - ByteProperty AIModule.BTDecorator_DoesPathExist.PathQueryType */
	uint8_t UnknownDataC5[0x3];
	ExternalPtr<struct UClass> FilterClass; /* Ofs: 0xC8 Size: 0x8 - ClassProperty AIModule.BTDecorator_DoesPathExist.FilterClass */


	inline bool SetBlackboardKeyA(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x70, value); }
	inline bool SetBlackboardKeyB(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x98, value); }
	inline bool bUseSelf()
	{
		return boolFieldC0& 0x1;
	}
	inline bool SetbUseSelf(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPathQueryType(t_structHelper inst, TEnumAsByte<enum EPathExistanceQueryType> value) { inst.WriteOffset(0xC4, value); }
	inline bool SetFilterClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_DoesPathExist = sizeof(UBTDecorator_DoesPathExist); // 208
    static_assert(sizeof(UBTDecorator_DoesPathExist) == 0xD0, "Size of UBTDecorator_DoesPathExist is not correct.");
	auto constexpr UBTDecorator_DoesPathExist_BlackboardKeyA_Offset = offsetof(UBTDecorator_DoesPathExist, BlackboardKeyA);
	static_assert(UBTDecorator_DoesPathExist_BlackboardKeyA_Offset == 0x70, "UBTDecorator_DoesPathExist::BlackboardKeyA offset is not 70");
	auto constexpr UBTDecorator_DoesPathExist_BlackboardKeyB_Offset = offsetof(UBTDecorator_DoesPathExist, BlackboardKeyB);
	static_assert(UBTDecorator_DoesPathExist_BlackboardKeyB_Offset == 0x98, "UBTDecorator_DoesPathExist::BlackboardKeyB offset is not 98");
	auto constexpr UBTDecorator_DoesPathExist_boolFieldC0_Offset = offsetof(UBTDecorator_DoesPathExist, boolFieldC0);
	static_assert(UBTDecorator_DoesPathExist_boolFieldC0_Offset == 0xc0, "UBTDecorator_DoesPathExist::boolFieldC0 offset is not c0");
	auto constexpr UBTDecorator_DoesPathExist_PathQueryType_Offset = offsetof(UBTDecorator_DoesPathExist, PathQueryType);
	static_assert(UBTDecorator_DoesPathExist_PathQueryType_Offset == 0xc4, "UBTDecorator_DoesPathExist::PathQueryType offset is not c4");
	auto constexpr UBTDecorator_DoesPathExist_FilterClass_Offset = offsetof(UBTDecorator_DoesPathExist, FilterClass);
	static_assert(UBTDecorator_DoesPathExist_FilterClass_Offset == 0xc8, "UBTDecorator_DoesPathExist::FilterClass offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
