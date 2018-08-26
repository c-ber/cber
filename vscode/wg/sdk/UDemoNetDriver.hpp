#pragma once
#include "UNetDriver.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDemoNetDriver // Size: 0x9F0
	: public UNetDriver // Size: 0x450
{
private:
	typedef UDemoNetDriver t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(721); // id32("Class Engine.DemoNetDriver")
		return ptr;
	}
	uint8_t UnknownData450[0xF8];
	TMap<struct FString, struct FRollbackNetStartupActorInfo> RollbackNetStartupActors; /* Ofs: 0x548 Size: 0x50 - MapProperty Engine.DemoNetDriver.RollbackNetStartupActors */
	uint8_t UnknownData598[0x3E0];
	uint8_t boolField978;
	uint8_t UnknownData979[0x77];


	inline bool SetRollbackNetStartupActors(t_structHelper inst, TMap<struct FString, struct FRollbackNetStartupActorInfo> value) { inst.WriteOffset(0x548, value); }
	inline bool bIsLocalReplay()
	{
		return boolField978& 0x1;
	}
	inline bool SetbIsLocalReplay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x978, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDemoNetDriver = sizeof(UDemoNetDriver); // 2544
    static_assert(sizeof(UDemoNetDriver) == 0x9F0, "Size of UDemoNetDriver is not correct.");
	auto constexpr UDemoNetDriver_RollbackNetStartupActors_Offset = offsetof(UDemoNetDriver, RollbackNetStartupActors);
	static_assert(UDemoNetDriver_RollbackNetStartupActors_Offset == 0x548, "UDemoNetDriver::RollbackNetStartupActors offset is not 548");
	auto constexpr UDemoNetDriver_boolField978_Offset = offsetof(UDemoNetDriver, boolField978);
	static_assert(UDemoNetDriver_boolField978_Offset == 0x978, "UDemoNetDriver::boolField978 offset is not 978");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
