#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryInstanceBlueprintWrapper // Size: 0x80
	: public UObject // Size: 0x30
{
private:
	typedef UEnvQueryInstanceBlueprintWrapper t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(620); // id32("Class AIModule.EnvQueryInstanceBlueprintWrapper")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	int32_t QueryID; /* Ofs: 0x38 Size: 0x4 - IntProperty AIModule.EnvQueryInstanceBlueprintWrapper.QueryID */
	uint8_t UnknownData3C[0x24];
	ExternalPtr<struct UClass> ItemType; /* Ofs: 0x60 Size: 0x8 - ClassProperty AIModule.EnvQueryInstanceBlueprintWrapper.ItemType */
	int32_t OptionIndex; /* Ofs: 0x68 Size: 0x4 - IntProperty AIModule.EnvQueryInstanceBlueprintWrapper.OptionIndex */
	uint8_t UnknownData6C[0x4];
	FScriptMulticastDelegate OnQueryFinishedEvent; /* Ofs: 0x70 Size: 0x10 - MulticastDelegateProperty AIModule.EnvQueryInstanceBlueprintWrapper.OnQueryFinishedEvent */


	inline bool SetQueryID(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetItemType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x60, value); }
	inline bool SetOptionIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x68, value); }
	inline bool SetOnQueryFinishedEvent(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryInstanceBlueprintWrapper = sizeof(UEnvQueryInstanceBlueprintWrapper); // 128
    static_assert(sizeof(UEnvQueryInstanceBlueprintWrapper) == 0x80, "Size of UEnvQueryInstanceBlueprintWrapper is not correct.");
	auto constexpr UEnvQueryInstanceBlueprintWrapper_QueryID_Offset = offsetof(UEnvQueryInstanceBlueprintWrapper, QueryID);
	static_assert(UEnvQueryInstanceBlueprintWrapper_QueryID_Offset == 0x38, "UEnvQueryInstanceBlueprintWrapper::QueryID offset is not 38");
	auto constexpr UEnvQueryInstanceBlueprintWrapper_ItemType_Offset = offsetof(UEnvQueryInstanceBlueprintWrapper, ItemType);
	static_assert(UEnvQueryInstanceBlueprintWrapper_ItemType_Offset == 0x60, "UEnvQueryInstanceBlueprintWrapper::ItemType offset is not 60");
	auto constexpr UEnvQueryInstanceBlueprintWrapper_OptionIndex_Offset = offsetof(UEnvQueryInstanceBlueprintWrapper, OptionIndex);
	static_assert(UEnvQueryInstanceBlueprintWrapper_OptionIndex_Offset == 0x68, "UEnvQueryInstanceBlueprintWrapper::OptionIndex offset is not 68");
	auto constexpr UEnvQueryInstanceBlueprintWrapper_OnQueryFinishedEvent_Offset = offsetof(UEnvQueryInstanceBlueprintWrapper, OnQueryFinishedEvent);
	static_assert(UEnvQueryInstanceBlueprintWrapper_OnQueryFinishedEvent_Offset == 0x70, "UEnvQueryInstanceBlueprintWrapper::OnQueryFinishedEvent offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
