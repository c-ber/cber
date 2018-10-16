#pragma once
#include "UPawnAction.hpp"
#include "EPawnActionFailHandling.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnAction_Repeat // Size: 0xF0
	: public UPawnAction // Size: 0xD0
{
private:
	typedef UPawnAction_Repeat t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(662); // id32("Class AIModule.PawnAction_Repeat")
		return ptr;
	}
	ExternalPtr<struct UPawnAction> ActionToRepeat; /* Ofs: 0xD0 Size: 0x8 - ObjectProperty AIModule.PawnAction_Repeat.ActionToRepeat */
	ExternalPtr<struct UPawnAction> RecentActionCopy; /* Ofs: 0xD8 Size: 0x8 - ObjectProperty AIModule.PawnAction_Repeat.RecentActionCopy */
	TEnumAsByte<enum EPawnActionFailHandling> ChildFailureHandlingMode; /* Ofs: 0xE0 Size: 0x1 - ByteProperty AIModule.PawnAction_Repeat.ChildFailureHandlingMode */
	uint8_t UnknownDataE1[0xF];


	inline bool SetActionToRepeat(t_structHelper inst, ExternalPtr<struct UPawnAction> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetRecentActionCopy(t_structHelper inst, ExternalPtr<struct UPawnAction> value) { inst.WriteOffset(0xD8, value); }
	inline bool SetChildFailureHandlingMode(t_structHelper inst, TEnumAsByte<enum EPawnActionFailHandling> value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnAction_Repeat = sizeof(UPawnAction_Repeat); // 240
    static_assert(sizeof(UPawnAction_Repeat) == 0xF0, "Size of UPawnAction_Repeat is not correct.");
	auto constexpr UPawnAction_Repeat_ActionToRepeat_Offset = offsetof(UPawnAction_Repeat, ActionToRepeat);
	static_assert(UPawnAction_Repeat_ActionToRepeat_Offset == 0xd0, "UPawnAction_Repeat::ActionToRepeat offset is not d0");
	auto constexpr UPawnAction_Repeat_RecentActionCopy_Offset = offsetof(UPawnAction_Repeat, RecentActionCopy);
	static_assert(UPawnAction_Repeat_RecentActionCopy_Offset == 0xd8, "UPawnAction_Repeat::RecentActionCopy offset is not d8");
	auto constexpr UPawnAction_Repeat_ChildFailureHandlingMode_Offset = offsetof(UPawnAction_Repeat, ChildFailureHandlingMode);
	static_assert(UPawnAction_Repeat_ChildFailureHandlingMode_Offset == 0xe0, "UPawnAction_Repeat::ChildFailureHandlingMode offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
