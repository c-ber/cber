#pragma once
#include "UBTDecorator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_Cooldown // Size: 0x78
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_Cooldown t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(579); // id32("Class AIModule.BTDecorator_Cooldown")
		return ptr;
	}
	float CoolDownTime; /* Ofs: 0x70 Size: 0x4 - FloatProperty AIModule.BTDecorator_Cooldown.CoolDownTime */
	uint8_t UnknownData74[0x4];


	inline bool SetCoolDownTime(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_Cooldown = sizeof(UBTDecorator_Cooldown); // 120
    static_assert(sizeof(UBTDecorator_Cooldown) == 0x78, "Size of UBTDecorator_Cooldown is not correct.");
	auto constexpr UBTDecorator_Cooldown_CoolDownTime_Offset = offsetof(UBTDecorator_Cooldown, CoolDownTime);
	static_assert(UBTDecorator_Cooldown_CoolDownTime_Offset == 0x70, "UBTDecorator_Cooldown::CoolDownTime offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
