#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBehaviorTreeManager // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UBehaviorTreeManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(554); // id32("Class AIModule.BehaviorTreeManager")
		return ptr;
	}
	int32_t MaxDebuggerSteps; /* Ofs: 0x30 Size: 0x4 - IntProperty AIModule.BehaviorTreeManager.MaxDebuggerSteps */
	uint8_t UnknownData34[0x4];
	TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; /* Ofs: 0x38 Size: 0x10 - ArrayProperty AIModule.BehaviorTreeManager.LoadedTemplates */
	TArray<ExternalPtr<struct UBehaviorTreeComponent>> ActiveComponents; /* Ofs: 0x48 Size: 0x10 - ArrayProperty AIModule.BehaviorTreeManager.ActiveComponents */


	inline bool SetMaxDebuggerSteps(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetLoadedTemplates(t_structHelper inst, TArray<struct FBehaviorTreeTemplateInfo> value) { inst.WriteOffset(0x38, value); }
	inline bool SetActiveComponents(t_structHelper inst, TArray<ExternalPtr<struct UBehaviorTreeComponent>> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBehaviorTreeManager = sizeof(UBehaviorTreeManager); // 88
    static_assert(sizeof(UBehaviorTreeManager) == 0x58, "Size of UBehaviorTreeManager is not correct.");
	auto constexpr UBehaviorTreeManager_MaxDebuggerSteps_Offset = offsetof(UBehaviorTreeManager, MaxDebuggerSteps);
	static_assert(UBehaviorTreeManager_MaxDebuggerSteps_Offset == 0x30, "UBehaviorTreeManager::MaxDebuggerSteps offset is not 30");
	auto constexpr UBehaviorTreeManager_LoadedTemplates_Offset = offsetof(UBehaviorTreeManager, LoadedTemplates);
	static_assert(UBehaviorTreeManager_LoadedTemplates_Offset == 0x38, "UBehaviorTreeManager::LoadedTemplates offset is not 38");
	auto constexpr UBehaviorTreeManager_ActiveComponents_Offset = offsetof(UBehaviorTreeManager, ActiveComponents);
	static_assert(UBehaviorTreeManager_ActiveComponents_Offset == 0x48, "UBehaviorTreeManager::ActiveComponents offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
