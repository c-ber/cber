#pragma once
#include "UTslBasePlayerController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEntryPlayerController // Size: 0x7A0
	: public UTslBasePlayerController // Size: 0x790
{
private:
	typedef UTslEntryPlayerController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1325); // id32("Class TslGame.TslEntryPlayerController")
		return ptr;
	}
	ExternalPtr<struct UVivoxLobbyComponent> VivoxComponent; /* Ofs: 0x790 Size: 0x8 - ObjectProperty TslGame.TslEntryPlayerController.VivoxComponent */
	uint8_t UnknownData798[0x8];


	inline bool SetVivoxComponent(t_structHelper inst, ExternalPtr<struct UVivoxLobbyComponent> value) { inst.WriteOffset(0x790, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEntryPlayerController = sizeof(UTslEntryPlayerController); // 1952
    static_assert(sizeof(UTslEntryPlayerController) == 0x7A0, "Size of UTslEntryPlayerController is not correct.");
	auto constexpr UTslEntryPlayerController_VivoxComponent_Offset = offsetof(UTslEntryPlayerController, VivoxComponent);
	static_assert(UTslEntryPlayerController_VivoxComponent_Offset == 0x790, "UTslEntryPlayerController::VivoxComponent offset is not 790");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
