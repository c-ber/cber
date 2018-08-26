#pragma once
#include "UPawnAction.hpp"
#include "EPawnActionFailHandling.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnAction_Sequence // Size: 0x100
	: public UPawnAction // Size: 0xD0
{
private:
	typedef UPawnAction_Sequence t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(663); // id32("Class AIModule.PawnAction_Sequence")
		return ptr;
	}
	TArray<ExternalPtr<struct UPawnAction>> ActionSequence; /* Ofs: 0xD0 Size: 0x10 - ArrayProperty AIModule.PawnAction_Sequence.ActionSequence */
	TEnumAsByte<enum EPawnActionFailHandling> ChildFailureHandlingMode; /* Ofs: 0xE0 Size: 0x1 - ByteProperty AIModule.PawnAction_Sequence.ChildFailureHandlingMode */
	uint8_t UnknownDataE1[0x7];
	ExternalPtr<struct UPawnAction> RecentActionCopy; /* Ofs: 0xE8 Size: 0x8 - ObjectProperty AIModule.PawnAction_Sequence.RecentActionCopy */
	uint8_t UnknownDataF0[0x10];


	inline bool SetActionSequence(t_structHelper inst, TArray<ExternalPtr<struct UPawnAction>> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetChildFailureHandlingMode(t_structHelper inst, TEnumAsByte<enum EPawnActionFailHandling> value) { inst.WriteOffset(0xE0, value); }
	inline bool SetRecentActionCopy(t_structHelper inst, ExternalPtr<struct UPawnAction> value) { inst.WriteOffset(0xE8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnAction_Sequence = sizeof(UPawnAction_Sequence); // 256
    static_assert(sizeof(UPawnAction_Sequence) == 0x100, "Size of UPawnAction_Sequence is not correct.");
	auto constexpr UPawnAction_Sequence_ActionSequence_Offset = offsetof(UPawnAction_Sequence, ActionSequence);
	static_assert(UPawnAction_Sequence_ActionSequence_Offset == 0xd0, "UPawnAction_Sequence::ActionSequence offset is not d0");
	auto constexpr UPawnAction_Sequence_ChildFailureHandlingMode_Offset = offsetof(UPawnAction_Sequence, ChildFailureHandlingMode);
	static_assert(UPawnAction_Sequence_ChildFailureHandlingMode_Offset == 0xe0, "UPawnAction_Sequence::ChildFailureHandlingMode offset is not e0");
	auto constexpr UPawnAction_Sequence_RecentActionCopy_Offset = offsetof(UPawnAction_Sequence, RecentActionCopy);
	static_assert(UPawnAction_Sequence_RecentActionCopy_Offset == 0xe8, "UPawnAction_Sequence::RecentActionCopy offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
