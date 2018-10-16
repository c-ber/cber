#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlatformInterfaceWebResponse // Size: 0xB8
	: public UObject // Size: 0x30
{
private:
	typedef UPlatformInterfaceWebResponse t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1183); // id32("Class Engine.PlatformInterfaceWebResponse")
		return ptr;
	}
	FString OriginalURL; /* Ofs: 0x30 Size: 0x10 - StrProperty Engine.PlatformInterfaceWebResponse.OriginalURL */
	int32_t ResponseCode; /* Ofs: 0x40 Size: 0x4 - IntProperty Engine.PlatformInterfaceWebResponse.ResponseCode */
	int32_t Tag; /* Ofs: 0x44 Size: 0x4 - IntProperty Engine.PlatformInterfaceWebResponse.Tag */
	FString StringResponse; /* Ofs: 0x48 Size: 0x10 - StrProperty Engine.PlatformInterfaceWebResponse.StringResponse */
	TArray<uint8_t> BinaryResponse; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.PlatformInterfaceWebResponse.BinaryResponse */
	uint8_t UnknownData68[0x50];


	inline bool SetOriginalURL(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool SetResponseCode(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40, value); }
	inline bool SetTag(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44, value); }
	inline bool SetStringResponse(t_structHelper inst, FString value) { inst.WriteOffset(0x48, value); }
	inline bool SetBinaryResponse(t_structHelper inst, TArray<uint8_t> value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlatformInterfaceWebResponse = sizeof(UPlatformInterfaceWebResponse); // 184
    static_assert(sizeof(UPlatformInterfaceWebResponse) == 0xB8, "Size of UPlatformInterfaceWebResponse is not correct.");
	auto constexpr UPlatformInterfaceWebResponse_OriginalURL_Offset = offsetof(UPlatformInterfaceWebResponse, OriginalURL);
	static_assert(UPlatformInterfaceWebResponse_OriginalURL_Offset == 0x30, "UPlatformInterfaceWebResponse::OriginalURL offset is not 30");
	auto constexpr UPlatformInterfaceWebResponse_ResponseCode_Offset = offsetof(UPlatformInterfaceWebResponse, ResponseCode);
	static_assert(UPlatformInterfaceWebResponse_ResponseCode_Offset == 0x40, "UPlatformInterfaceWebResponse::ResponseCode offset is not 40");
	auto constexpr UPlatformInterfaceWebResponse_Tag_Offset = offsetof(UPlatformInterfaceWebResponse, Tag);
	static_assert(UPlatformInterfaceWebResponse_Tag_Offset == 0x44, "UPlatformInterfaceWebResponse::Tag offset is not 44");
	auto constexpr UPlatformInterfaceWebResponse_StringResponse_Offset = offsetof(UPlatformInterfaceWebResponse, StringResponse);
	static_assert(UPlatformInterfaceWebResponse_StringResponse_Offset == 0x48, "UPlatformInterfaceWebResponse::StringResponse offset is not 48");
	auto constexpr UPlatformInterfaceWebResponse_BinaryResponse_Offset = offsetof(UPlatformInterfaceWebResponse, BinaryResponse);
	static_assert(UPlatformInterfaceWebResponse_BinaryResponse_Offset == 0x58, "UPlatformInterfaceWebResponse::BinaryResponse offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
