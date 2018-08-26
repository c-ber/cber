#pragma once
#include "UGameViewportClient.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGameViewportClient // Size: 0x6B0
	: public UGameViewportClient // Size: 0x660
{
private:
	typedef UTslGameViewportClient t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1397); // id32("Class TslGame.TslGameViewportClient")
		return ptr;
	}
	uint8_t UnknownData660[0x28];
	ExternalPtr<struct UTslConfirmationDialogWidget> DialogUMGWidget; /* Ofs: 0x688 Size: 0x8 - ObjectProperty TslGame.TslGameViewportClient.DialogUMGWidget */
	uint8_t UnknownData690[0x20];


	inline bool SetDialogUMGWidget(t_structHelper inst, ExternalPtr<struct UTslConfirmationDialogWidget> value) { inst.WriteOffset(0x688, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGameViewportClient = sizeof(UTslGameViewportClient); // 1712
    static_assert(sizeof(UTslGameViewportClient) == 0x6B0, "Size of UTslGameViewportClient is not correct.");
	auto constexpr UTslGameViewportClient_DialogUMGWidget_Offset = offsetof(UTslGameViewportClient, DialogUMGWidget);
	static_assert(UTslGameViewportClient_DialogUMGWidget_Offset == 0x688, "UTslGameViewportClient::DialogUMGWidget offset is not 688");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
