#pragma once
#include "UGameplayTask.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTask_SpawnActor // Size: 0xB0
	: public UGameplayTask // Size: 0x70
{
private:
	typedef UGameplayTask_SpawnActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2007); // id32("Class GameplayTasks.GameplayTask_SpawnActor")
		return ptr;
	}
	FScriptMulticastDelegate SUCCESS; /* Ofs: 0x70 Size: 0x10 - MulticastDelegateProperty GameplayTasks.GameplayTask_SpawnActor.SUCCESS */
	FScriptMulticastDelegate DidNotSpawn; /* Ofs: 0x80 Size: 0x10 - MulticastDelegateProperty GameplayTasks.GameplayTask_SpawnActor.DidNotSpawn */
	uint8_t UnknownData90[0x18];
	ExternalPtr<struct UClass> ClassToSpawn; /* Ofs: 0xA8 Size: 0x8 - ClassProperty GameplayTasks.GameplayTask_SpawnActor.ClassToSpawn */


	inline bool SetSUCCESS(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x70, value); }
	inline bool SetDidNotSpawn(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x80, value); }
	inline bool SetClassToSpawn(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTask_SpawnActor = sizeof(UGameplayTask_SpawnActor); // 176
    static_assert(sizeof(UGameplayTask_SpawnActor) == 0xB0, "Size of UGameplayTask_SpawnActor is not correct.");
	auto constexpr UGameplayTask_SpawnActor_SUCCESS_Offset = offsetof(UGameplayTask_SpawnActor, SUCCESS);
	static_assert(UGameplayTask_SpawnActor_SUCCESS_Offset == 0x70, "UGameplayTask_SpawnActor::SUCCESS offset is not 70");
	auto constexpr UGameplayTask_SpawnActor_DidNotSpawn_Offset = offsetof(UGameplayTask_SpawnActor, DidNotSpawn);
	static_assert(UGameplayTask_SpawnActor_DidNotSpawn_Offset == 0x80, "UGameplayTask_SpawnActor::DidNotSpawn offset is not 80");
	auto constexpr UGameplayTask_SpawnActor_ClassToSpawn_Offset = offsetof(UGameplayTask_SpawnActor, ClassToSpawn);
	static_assert(UGameplayTask_SpawnActor_ClassToSpawn_Offset == 0xa8, "UGameplayTask_SpawnActor::ClassToSpawn offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
