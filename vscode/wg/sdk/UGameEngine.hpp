#pragma once
#include "UEngine.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameEngine // Size: 0xDD0
	: public UEngine // Size: 0xD70
{
private:
	typedef UGameEngine t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(770); // id32("Class Engine.GameEngine")
		return ptr;
	}
	float MaxDeltaTime; /* Ofs: 0xD70 Size: 0x4 - FloatProperty Engine.GameEngine.MaxDeltaTime */
	float ServerFlushLogInterval; /* Ofs: 0xD74 Size: 0x4 - FloatProperty Engine.GameEngine.ServerFlushLogInterval */
	ExternalPtr<struct UGameInstance> GameInstance; /* Ofs: 0xD78 Size: 0x8 - ObjectProperty Engine.GameEngine.GameInstance */
	uint8_t UnknownDataD80[0x40];
	TArray<ExternalPtr<struct UWorld>> PendingDestroyWorldList; /* Ofs: 0xDC0 Size: 0x10 - ArrayProperty Engine.GameEngine.PendingDestroyWorldList */


	inline bool SetMaxDeltaTime(t_structHelper inst, float value) { inst.WriteOffset(0xD70, value); }
	inline bool SetServerFlushLogInterval(t_structHelper inst, float value) { inst.WriteOffset(0xD74, value); }
	inline bool SetGameInstance(t_structHelper inst, ExternalPtr<struct UGameInstance> value) { inst.WriteOffset(0xD78, value); }
	inline bool SetPendingDestroyWorldList(t_structHelper inst, TArray<ExternalPtr<struct UWorld>> value) { inst.WriteOffset(0xDC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameEngine = sizeof(UGameEngine); // 3536
    static_assert(sizeof(UGameEngine) == 0xDD0, "Size of UGameEngine is not correct.");
	auto constexpr UGameEngine_MaxDeltaTime_Offset = offsetof(UGameEngine, MaxDeltaTime);
	static_assert(UGameEngine_MaxDeltaTime_Offset == 0xd70, "UGameEngine::MaxDeltaTime offset is not d70");
	auto constexpr UGameEngine_ServerFlushLogInterval_Offset = offsetof(UGameEngine, ServerFlushLogInterval);
	static_assert(UGameEngine_ServerFlushLogInterval_Offset == 0xd74, "UGameEngine::ServerFlushLogInterval offset is not d74");
	auto constexpr UGameEngine_GameInstance_Offset = offsetof(UGameEngine, GameInstance);
	static_assert(UGameEngine_GameInstance_Offset == 0xd78, "UGameEngine::GameInstance offset is not d78");
	auto constexpr UGameEngine_PendingDestroyWorldList_Offset = offsetof(UGameEngine, PendingDestroyWorldList);
	static_assert(UGameEngine_PendingDestroyWorldList_Offset == 0xdc0, "UGameEngine::PendingDestroyWorldList offset is not dc0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
