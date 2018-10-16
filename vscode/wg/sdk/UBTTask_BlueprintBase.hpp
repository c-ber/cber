#pragma once
#include "UBTTaskNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_BlueprintBase // Size: 0xA8
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_BlueprintBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(600); // id32("Class AIModule.BTTask_BlueprintBase")
		return ptr;
	}
	ExternalPtr<struct UAIController> AIOwner; /* Ofs: 0x78 Size: 0x8 - ObjectProperty AIModule.BTTask_BlueprintBase.AIOwner */
	ExternalPtr<struct UActor> ActorOwner; /* Ofs: 0x80 Size: 0x8 - ObjectProperty AIModule.BTTask_BlueprintBase.ActorOwner */
	uint8_t UnknownData88[0x18];
	uint8_t boolFieldA0;
	uint8_t UnknownDataA1[0x7];


	inline bool SetAIOwner(t_structHelper inst, ExternalPtr<struct UAIController> value) { inst.WriteOffset(0x78, value); }
	inline bool SetActorOwner(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x80, value); }
	inline bool bShowPropertyDetails()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetbShowPropertyDetails(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_BlueprintBase = sizeof(UBTTask_BlueprintBase); // 168
    static_assert(sizeof(UBTTask_BlueprintBase) == 0xA8, "Size of UBTTask_BlueprintBase is not correct.");
	auto constexpr UBTTask_BlueprintBase_AIOwner_Offset = offsetof(UBTTask_BlueprintBase, AIOwner);
	static_assert(UBTTask_BlueprintBase_AIOwner_Offset == 0x78, "UBTTask_BlueprintBase::AIOwner offset is not 78");
	auto constexpr UBTTask_BlueprintBase_ActorOwner_Offset = offsetof(UBTTask_BlueprintBase, ActorOwner);
	static_assert(UBTTask_BlueprintBase_ActorOwner_Offset == 0x80, "UBTTask_BlueprintBase::ActorOwner offset is not 80");
	auto constexpr UBTTask_BlueprintBase_boolFieldA0_Offset = offsetof(UBTTask_BlueprintBase, boolFieldA0);
	static_assert(UBTTask_BlueprintBase_boolFieldA0_Offset == 0xa0, "UBTTask_BlueprintBase::boolFieldA0 offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
