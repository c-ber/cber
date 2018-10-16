#pragma once
#include "UBTTaskNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_GameplayTaskBase // Size: 0x80
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_GameplayTaskBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(601); // id32("Class AIModule.BTTask_GameplayTaskBase")
		return ptr;
	}
	uint8_t boolField78;
	uint8_t UnknownData79[0x7];


	inline bool bWaitForGameplayTask()
	{
		return boolField78& 0x1;
	}
	inline bool SetbWaitForGameplayTask(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x78, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_GameplayTaskBase = sizeof(UBTTask_GameplayTaskBase); // 128
    static_assert(sizeof(UBTTask_GameplayTaskBase) == 0x80, "Size of UBTTask_GameplayTaskBase is not correct.");
	auto constexpr UBTTask_GameplayTaskBase_boolField78_Offset = offsetof(UBTTask_GameplayTaskBase, boolField78);
	static_assert(UBTTask_GameplayTaskBase_boolField78_Offset == 0x78, "UBTTask_GameplayTaskBase::boolField78 offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
