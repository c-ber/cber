#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCheatManager // Size: 0x80
	: public UObject // Size: 0x30
{
private:
	typedef UCheatManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(698); // id32("Class Engine.CheatManager")
		return ptr;
	}
	ExternalPtr<struct UDebugCameraController> DebugCameraControllerRef; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.CheatManager.DebugCameraControllerRef */
	ExternalPtr<struct UClass> DebugCameraControllerClass; /* Ofs: 0x38 Size: 0x8 - ClassProperty Engine.CheatManager.DebugCameraControllerClass */
	uint8_t UnknownData40[0x40];


	inline bool SetDebugCameraControllerRef(t_structHelper inst, ExternalPtr<struct UDebugCameraController> value) { inst.WriteOffset(0x30, value); }
	inline bool SetDebugCameraControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCheatManager = sizeof(UCheatManager); // 128
    static_assert(sizeof(UCheatManager) == 0x80, "Size of UCheatManager is not correct.");
	auto constexpr UCheatManager_DebugCameraControllerRef_Offset = offsetof(UCheatManager, DebugCameraControllerRef);
	static_assert(UCheatManager_DebugCameraControllerRef_Offset == 0x30, "UCheatManager::DebugCameraControllerRef offset is not 30");
	auto constexpr UCheatManager_DebugCameraControllerClass_Offset = offsetof(UCheatManager, DebugCameraControllerClass);
	static_assert(UCheatManager_DebugCameraControllerClass_Offset == 0x38, "UCheatManager::DebugCameraControllerClass offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
