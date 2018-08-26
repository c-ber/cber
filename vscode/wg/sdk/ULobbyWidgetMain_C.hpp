#pragma once
#include "ULobbyWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULobbyWidgetMain_C // Size: 0x258
	: public ULobbyWidget // Size: 0x248
{
private:
	typedef ULobbyWidgetMain_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(45954); // id32("WidgetBlueprintGeneratedClass LobbyWidgetMain.LobbyWidgetMain_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty LobbyWidgetMain.LobbyWidgetMain_C.UberGraphFrame */
	ExternalPtr<struct UTslCoherentWidget> WebWidget; /* Ofs: 0x250 Size: 0x8 - ObjectProperty LobbyWidgetMain.LobbyWidgetMain_C.WebWidget */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetWebWidget(t_structHelper inst, ExternalPtr<struct UTslCoherentWidget> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULobbyWidgetMain_C = sizeof(ULobbyWidgetMain_C); // 600
    static_assert(sizeof(ULobbyWidgetMain_C) == 0x258, "Size of ULobbyWidgetMain_C is not correct.");
	auto constexpr ULobbyWidgetMain_C_UberGraphFrame_Offset = offsetof(ULobbyWidgetMain_C, UberGraphFrame);
	static_assert(ULobbyWidgetMain_C_UberGraphFrame_Offset == 0x248, "ULobbyWidgetMain_C::UberGraphFrame offset is not 248");
	auto constexpr ULobbyWidgetMain_C_WebWidget_Offset = offsetof(ULobbyWidgetMain_C, WebWidget);
	static_assert(ULobbyWidgetMain_C_WebWidget_Offset == 0x250, "ULobbyWidgetMain_C::WebWidget offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
