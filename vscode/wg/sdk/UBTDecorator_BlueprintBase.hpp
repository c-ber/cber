#pragma once
#include "UBTDecorator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_BlueprintBase // Size: 0xA8
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_BlueprintBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(575); // id32("Class AIModule.BTDecorator_BlueprintBase")
		return ptr;
	}
	ExternalPtr<struct UAIController> AIOwner; /* Ofs: 0x70 Size: 0x8 - ObjectProperty AIModule.BTDecorator_BlueprintBase.AIOwner */
	ExternalPtr<struct UActor> ActorOwner; /* Ofs: 0x78 Size: 0x8 - ObjectProperty AIModule.BTDecorator_BlueprintBase.ActorOwner */
	TArray<struct FName> ObservedKeyNames; /* Ofs: 0x80 Size: 0x10 - ArrayProperty AIModule.BTDecorator_BlueprintBase.ObservedKeyNames */
	uint8_t UnknownData90[0x10];
	uint8_t boolFieldA0;
	uint8_t UnknownDataA1[0x7];


	inline bool SetAIOwner(t_structHelper inst, ExternalPtr<struct UAIController> value) { inst.WriteOffset(0x70, value); }
	inline bool SetActorOwner(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x78, value); }
	inline bool SetObservedKeyNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x80, value); }
	inline bool bShowPropertyDetails()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetbShowPropertyDetails(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCheckConditionOnlyBlackBoardChanges()
	{
		return boolFieldA0& 0x2;
	}
	inline bool SetbCheckConditionOnlyBlackBoardChanges(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIsObservingBB()
	{
		return boolFieldA0& 0x4;
	}
	inline bool SetbIsObservingBB(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_BlueprintBase = sizeof(UBTDecorator_BlueprintBase); // 168
    static_assert(sizeof(UBTDecorator_BlueprintBase) == 0xA8, "Size of UBTDecorator_BlueprintBase is not correct.");
	auto constexpr UBTDecorator_BlueprintBase_AIOwner_Offset = offsetof(UBTDecorator_BlueprintBase, AIOwner);
	static_assert(UBTDecorator_BlueprintBase_AIOwner_Offset == 0x70, "UBTDecorator_BlueprintBase::AIOwner offset is not 70");
	auto constexpr UBTDecorator_BlueprintBase_ActorOwner_Offset = offsetof(UBTDecorator_BlueprintBase, ActorOwner);
	static_assert(UBTDecorator_BlueprintBase_ActorOwner_Offset == 0x78, "UBTDecorator_BlueprintBase::ActorOwner offset is not 78");
	auto constexpr UBTDecorator_BlueprintBase_ObservedKeyNames_Offset = offsetof(UBTDecorator_BlueprintBase, ObservedKeyNames);
	static_assert(UBTDecorator_BlueprintBase_ObservedKeyNames_Offset == 0x80, "UBTDecorator_BlueprintBase::ObservedKeyNames offset is not 80");
	auto constexpr UBTDecorator_BlueprintBase_boolFieldA0_Offset = offsetof(UBTDecorator_BlueprintBase, boolFieldA0);
	static_assert(UBTDecorator_BlueprintBase_boolFieldA0_Offset == 0xa0, "UBTDecorator_BlueprintBase::boolFieldA0 offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
