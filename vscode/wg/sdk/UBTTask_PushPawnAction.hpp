#pragma once
#include "UBTTask_PawnActionBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_PushPawnAction // Size: 0x80
	: public UBTTask_PawnActionBase // Size: 0x78
{
private:
	typedef UBTTask_PushPawnAction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(604); // id32("Class AIModule.BTTask_PushPawnAction")
		return ptr;
	}
	ExternalPtr<struct UPawnAction> Action; /* Ofs: 0x78 Size: 0x8 - ObjectProperty AIModule.BTTask_PushPawnAction.Action */


	inline bool SetAction(t_structHelper inst, ExternalPtr<struct UPawnAction> value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_PushPawnAction = sizeof(UBTTask_PushPawnAction); // 128
    static_assert(sizeof(UBTTask_PushPawnAction) == 0x80, "Size of UBTTask_PushPawnAction is not correct.");
	auto constexpr UBTTask_PushPawnAction_Action_Offset = offsetof(UBTTask_PushPawnAction, Action);
	static_assert(UBTTask_PushPawnAction_Action_Offset == 0x78, "UBTTask_PushPawnAction::Action offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
