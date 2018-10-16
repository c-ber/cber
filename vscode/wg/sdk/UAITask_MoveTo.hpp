#pragma once
#include "UAITask.hpp"
#include "FAIMoveRequest.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAITask_MoveTo // Size: 0x118
	: public UAITask // Size: 0x78
{
private:
	typedef UAITask_MoveTo t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(544); // id32("Class AIModule.AITask_MoveTo")
		return ptr;
	}
	FScriptMulticastDelegate OnRequestFailed; /* Ofs: 0x78 Size: 0x10 - MulticastDelegateProperty AIModule.AITask_MoveTo.OnRequestFailed */
	FScriptMulticastDelegate OnMoveFinished; /* Ofs: 0x88 Size: 0x10 - MulticastDelegateProperty AIModule.AITask_MoveTo.OnMoveFinished */
	FAIMoveRequest MoveRequest; /* Ofs: 0x98 Size: 0x40 - StructProperty AIModule.AITask_MoveTo.MoveRequest */
	uint8_t UnknownDataD8[0x40];


	inline bool SetOnRequestFailed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x78, value); }
	inline bool SetOnMoveFinished(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x88, value); }
	inline bool SetMoveRequest(t_structHelper inst, FAIMoveRequest value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAITask_MoveTo = sizeof(UAITask_MoveTo); // 280
    static_assert(sizeof(UAITask_MoveTo) == 0x118, "Size of UAITask_MoveTo is not correct.");
	auto constexpr UAITask_MoveTo_OnRequestFailed_Offset = offsetof(UAITask_MoveTo, OnRequestFailed);
	static_assert(UAITask_MoveTo_OnRequestFailed_Offset == 0x78, "UAITask_MoveTo::OnRequestFailed offset is not 78");
	auto constexpr UAITask_MoveTo_OnMoveFinished_Offset = offsetof(UAITask_MoveTo, OnMoveFinished);
	static_assert(UAITask_MoveTo_OnMoveFinished_Offset == 0x88, "UAITask_MoveTo::OnMoveFinished offset is not 88");
	auto constexpr UAITask_MoveTo_MoveRequest_Offset = offsetof(UAITask_MoveTo, MoveRequest);
	static_assert(UAITask_MoveTo_MoveRequest_Offset == 0x98, "UAITask_MoveTo::MoveRequest offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
