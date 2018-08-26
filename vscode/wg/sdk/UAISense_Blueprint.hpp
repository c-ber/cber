#pragma once
#include "UAISense.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISense_Blueprint // Size: 0x150
	: public UAISense // Size: 0x120
{
private:
	typedef UAISense_Blueprint t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1681); // id32("Class AIModule.AISense_Blueprint")
		return ptr;
	}
	ExternalPtr<struct UClass> ListenerDataType; /* Ofs: 0x120 Size: 0x8 - ClassProperty AIModule.AISense_Blueprint.ListenerDataType */
	TArray<ExternalPtr<struct UAIPerceptionComponent>> ListenerContainer; /* Ofs: 0x128 Size: 0x10 - ArrayProperty AIModule.AISense_Blueprint.ListenerContainer */
	TArray<ExternalPtr<struct UAISenseEvent>> UnprocessedEvents; /* Ofs: 0x138 Size: 0x10 - ArrayProperty AIModule.AISense_Blueprint.UnprocessedEvents */
	uint8_t UnknownData148[0x8];


	inline bool SetListenerDataType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x120, value); }
	inline bool SetListenerContainer(t_structHelper inst, TArray<ExternalPtr<struct UAIPerceptionComponent>> value) { inst.WriteOffset(0x128, value); }
	inline bool SetUnprocessedEvents(t_structHelper inst, TArray<ExternalPtr<struct UAISenseEvent>> value) { inst.WriteOffset(0x138, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISense_Blueprint = sizeof(UAISense_Blueprint); // 336
    static_assert(sizeof(UAISense_Blueprint) == 0x150, "Size of UAISense_Blueprint is not correct.");
	auto constexpr UAISense_Blueprint_ListenerDataType_Offset = offsetof(UAISense_Blueprint, ListenerDataType);
	static_assert(UAISense_Blueprint_ListenerDataType_Offset == 0x120, "UAISense_Blueprint::ListenerDataType offset is not 120");
	auto constexpr UAISense_Blueprint_ListenerContainer_Offset = offsetof(UAISense_Blueprint, ListenerContainer);
	static_assert(UAISense_Blueprint_ListenerContainer_Offset == 0x128, "UAISense_Blueprint::ListenerContainer offset is not 128");
	auto constexpr UAISense_Blueprint_UnprocessedEvents_Offset = offsetof(UAISense_Blueprint, UnprocessedEvents);
	static_assert(UAISense_Blueprint_UnprocessedEvents_Offset == 0x138, "UAISense_Blueprint::UnprocessedEvents offset is not 138");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
