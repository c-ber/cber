#pragma once
#include "UHealOverTimeBuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_HealOverTime_C // Size: 0x488
	: public UHealOverTimeBuff // Size: 0x480
{
private:
	typedef UBuff_HealOverTime_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133426); // id32("BlueprintGeneratedClass Buff_HealOverTime.Buff_HealOverTime_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x480 Size: 0x8 - ObjectProperty Buff_HealOverTime.Buff_HealOverTime_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_HealOverTime_C = sizeof(UBuff_HealOverTime_C); // 1160
    static_assert(sizeof(UBuff_HealOverTime_C) == 0x488, "Size of UBuff_HealOverTime_C is not correct.");
	auto constexpr UBuff_HealOverTime_C_DefaultSceneRoot_Offset = offsetof(UBuff_HealOverTime_C, DefaultSceneRoot);
	static_assert(UBuff_HealOverTime_C_DefaultSceneRoot_Offset == 0x480, "UBuff_HealOverTime_C::DefaultSceneRoot offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
