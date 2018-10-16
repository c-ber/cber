#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentCommonBinder // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UCoherentCommonBinder t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1831); // id32("Class TslGame.CoherentCommonBinder")
		return ptr;
	}
	uint8_t UnknownData30[0x58];
	FString DefaultLobbyUrl; /* Ofs: 0x88 Size: 0x10 - StrProperty TslGame.CoherentCommonBinder.DefaultLobbyUrl */
	uint8_t UnknownData98[0x8];


	inline bool SetDefaultLobbyUrl(t_structHelper inst, FString value) { inst.WriteOffset(0x88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentCommonBinder = sizeof(UCoherentCommonBinder); // 160
    static_assert(sizeof(UCoherentCommonBinder) == 0xA0, "Size of UCoherentCommonBinder is not correct.");
	auto constexpr UCoherentCommonBinder_DefaultLobbyUrl_Offset = offsetof(UCoherentCommonBinder, DefaultLobbyUrl);
	static_assert(UCoherentCommonBinder_DefaultLobbyUrl_Offset == 0x88, "UCoherentCommonBinder::DefaultLobbyUrl offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
