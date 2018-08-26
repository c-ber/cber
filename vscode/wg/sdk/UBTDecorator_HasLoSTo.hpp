#pragma once
#include "UBTDecorator.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_HasLoSTo // Size: 0x98
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_HasLoSTo t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(420); // id32("Class TslGame.BTDecorator_HasLoSTo")
		return ptr;
	}
	FBlackboardKeySelector EnemyKey; /* Ofs: 0x70 Size: 0x28 - StructProperty TslGame.BTDecorator_HasLoSTo.EnemyKey */


	inline bool SetEnemyKey(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_HasLoSTo = sizeof(UBTDecorator_HasLoSTo); // 152
    static_assert(sizeof(UBTDecorator_HasLoSTo) == 0x98, "Size of UBTDecorator_HasLoSTo is not correct.");
	auto constexpr UBTDecorator_HasLoSTo_EnemyKey_Offset = offsetof(UBTDecorator_HasLoSTo, EnemyKey);
	static_assert(UBTDecorator_HasLoSTo_EnemyKey_Offset == 0x70, "UBTDecorator_HasLoSTo::EnemyKey offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
