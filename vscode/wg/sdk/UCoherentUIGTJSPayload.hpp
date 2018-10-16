#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTJSPayload // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UCoherentUIGTJSPayload t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2069); // id32("Class CoherentUIGTPlugin.CoherentUIGTJSPayload")
		return ptr;
	}
	FString EventName; /* Ofs: 0x30 Size: 0x10 - StrProperty CoherentUIGTPlugin.CoherentUIGTJSPayload.EventName */
	uint8_t UnknownData40[0x8];


	inline bool SetEventName(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTJSPayload = sizeof(UCoherentUIGTJSPayload); // 72
    static_assert(sizeof(UCoherentUIGTJSPayload) == 0x48, "Size of UCoherentUIGTJSPayload is not correct.");
	auto constexpr UCoherentUIGTJSPayload_EventName_Offset = offsetof(UCoherentUIGTJSPayload, EventName);
	static_assert(UCoherentUIGTJSPayload_EventName_Offset == 0x30, "UCoherentUIGTJSPayload::EventName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
