#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UChannel // Size: 0x70
	: public UObject // Size: 0x30
{
private:
	typedef UChannel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(691); // id32("Class Engine.Channel")
		return ptr;
	}
	ExternalPtr<struct UNetConnection> Connection; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.Channel.Connection */
	uint8_t UnknownData38[0x38];


	inline bool SetConnection(t_structHelper inst, ExternalPtr<struct UNetConnection> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUChannel = sizeof(UChannel); // 112
    static_assert(sizeof(UChannel) == 0x70, "Size of UChannel is not correct.");
	auto constexpr UChannel_Connection_Offset = offsetof(UChannel, Connection);
	static_assert(UChannel_Connection_Offset == 0x30, "UChannel::Connection offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
