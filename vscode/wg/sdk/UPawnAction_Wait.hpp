#pragma once
#include "UPawnAction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnAction_Wait // Size: 0xE0
	: public UPawnAction // Size: 0xD0
{
private:
	typedef UPawnAction_Wait t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(664); // id32("Class AIModule.PawnAction_Wait")
		return ptr;
	}
	float TimeToWait; /* Ofs: 0xD0 Size: 0x4 - FloatProperty AIModule.PawnAction_Wait.TimeToWait */
	uint8_t UnknownDataD4[0xC];


	inline bool SetTimeToWait(t_structHelper inst, float value) { inst.WriteOffset(0xD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnAction_Wait = sizeof(UPawnAction_Wait); // 224
    static_assert(sizeof(UPawnAction_Wait) == 0xE0, "Size of UPawnAction_Wait is not correct.");
	auto constexpr UPawnAction_Wait_TimeToWait_Offset = offsetof(UPawnAction_Wait, TimeToWait);
	static_assert(UPawnAction_Wait_TimeToWait_Offset == 0xd0, "UPawnAction_Wait::TimeToWait offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
