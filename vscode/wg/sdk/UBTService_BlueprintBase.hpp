#pragma once
#include "UBTService.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTService_BlueprintBase // Size: 0xA0
	: public UBTService // Size: 0x78
{
private:
	typedef UBTService_BlueprintBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(592); // id32("Class AIModule.BTService_BlueprintBase")
		return ptr;
	}
	ExternalPtr<struct UAIController> AIOwner; /* Ofs: 0x78 Size: 0x8 - ObjectProperty AIModule.BTService_BlueprintBase.AIOwner */
	ExternalPtr<struct UActor> ActorOwner; /* Ofs: 0x80 Size: 0x8 - ObjectProperty AIModule.BTService_BlueprintBase.ActorOwner */
	uint8_t UnknownData88[0x10];
	uint8_t boolField98;
	uint8_t UnknownData99[0x7];


	inline bool SetAIOwner(t_structHelper inst, ExternalPtr<struct UAIController> value) { inst.WriteOffset(0x78, value); }
	inline bool SetActorOwner(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x80, value); }
	inline bool bShowPropertyDetails()
	{
		return boolField98& 0x1;
	}
	inline bool SetbShowPropertyDetails(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShowEventDetails()
	{
		return boolField98& 0x2;
	}
	inline bool SetbShowEventDetails(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTService_BlueprintBase = sizeof(UBTService_BlueprintBase); // 160
    static_assert(sizeof(UBTService_BlueprintBase) == 0xA0, "Size of UBTService_BlueprintBase is not correct.");
	auto constexpr UBTService_BlueprintBase_AIOwner_Offset = offsetof(UBTService_BlueprintBase, AIOwner);
	static_assert(UBTService_BlueprintBase_AIOwner_Offset == 0x78, "UBTService_BlueprintBase::AIOwner offset is not 78");
	auto constexpr UBTService_BlueprintBase_ActorOwner_Offset = offsetof(UBTService_BlueprintBase, ActorOwner);
	static_assert(UBTService_BlueprintBase_ActorOwner_Offset == 0x80, "UBTService_BlueprintBase::ActorOwner offset is not 80");
	auto constexpr UBTService_BlueprintBase_boolField98_Offset = offsetof(UBTService_BlueprintBase, boolField98);
	static_assert(UBTService_BlueprintBase_boolField98_Offset == 0x98, "UBTService_BlueprintBase::boolField98 offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
