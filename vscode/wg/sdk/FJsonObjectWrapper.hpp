#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FJsonObjectWrapper // Size: 0x20
{
public:
    FString JsonString; /* Ofs: 0x0 Size: 0x10 StrProperty JsonUtilities.JsonObjectWrapper.JsonString */
    uint8_t UnknownData10[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFJsonObjectWrapper = sizeof(FJsonObjectWrapper); // 32
    static_assert(sizeof(FJsonObjectWrapper) == 0x20, "Size of FJsonObjectWrapper is not correct.");
	auto constexpr FJsonObjectWrapper_JsonString_Offset = offsetof(FJsonObjectWrapper, JsonString);
	static_assert(FJsonObjectWrapper_JsonString_Offset == 0x0, "FJsonObjectWrapper::JsonString offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
