#pragma once
#include "ULevelScriptActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslLobbyLevelScriptActor // Size: 0x420
	: public ULevelScriptActor // Size: 0x410
{
private:
	typedef UTslLobbyLevelScriptActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1425); // id32("Class TslGame.TslLobbyLevelScriptActor")
		return ptr;
	}
	FName MainMenuStreamingLevelName; /* Ofs: 0x410 Size: 0x8 - NameProperty TslGame.TslLobbyLevelScriptActor.MainMenuStreamingLevelName */
	FName CustomizationStreamingLevelName; /* Ofs: 0x418 Size: 0x8 - NameProperty TslGame.TslLobbyLevelScriptActor.CustomizationStreamingLevelName */


	inline bool SetMainMenuStreamingLevelName(t_structHelper inst, FName value) { inst.WriteOffset(0x410, value); }
	inline bool SetCustomizationStreamingLevelName(t_structHelper inst, FName value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslLobbyLevelScriptActor = sizeof(UTslLobbyLevelScriptActor); // 1056
    static_assert(sizeof(UTslLobbyLevelScriptActor) == 0x420, "Size of UTslLobbyLevelScriptActor is not correct.");
	auto constexpr UTslLobbyLevelScriptActor_MainMenuStreamingLevelName_Offset = offsetof(UTslLobbyLevelScriptActor, MainMenuStreamingLevelName);
	static_assert(UTslLobbyLevelScriptActor_MainMenuStreamingLevelName_Offset == 0x410, "UTslLobbyLevelScriptActor::MainMenuStreamingLevelName offset is not 410");
	auto constexpr UTslLobbyLevelScriptActor_CustomizationStreamingLevelName_Offset = offsetof(UTslLobbyLevelScriptActor, CustomizationStreamingLevelName);
	static_assert(UTslLobbyLevelScriptActor_CustomizationStreamingLevelName_Offset == 0x418, "UTslLobbyLevelScriptActor::CustomizationStreamingLevelName offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
