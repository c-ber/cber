#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClientReceiveData // Size: 0x40
{
public:
    ExternalPtr<struct UPlayerController> LocalPC; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.ClientReceiveData.LocalPC */
    FName MessageType; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.ClientReceiveData.MessageType */
    int32_t MessageIndex; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.ClientReceiveData.MessageIndex */
    uint8_t UnknownData14[0x4];
    FString MessageString; /* Ofs: 0x18 Size: 0x10 StrProperty Engine.ClientReceiveData.MessageString */
    ExternalPtr<struct UPlayerState> RelatedPlayerState_2; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.ClientReceiveData.RelatedPlayerState_2 */
    ExternalPtr<struct UPlayerState> RelatedPlayerState_3; /* Ofs: 0x30 Size: 0x8 ObjectProperty Engine.ClientReceiveData.RelatedPlayerState_3 */
    ExternalPtr<struct UObject> OptionalObject; /* Ofs: 0x38 Size: 0x8 ObjectProperty Engine.ClientReceiveData.OptionalObject */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClientReceiveData = sizeof(FClientReceiveData); // 64
    static_assert(sizeof(FClientReceiveData) == 0x40, "Size of FClientReceiveData is not correct.");
	auto constexpr FClientReceiveData_LocalPC_Offset = offsetof(FClientReceiveData, LocalPC);
	static_assert(FClientReceiveData_LocalPC_Offset == 0x0, "FClientReceiveData::LocalPC offset is not 0");
	auto constexpr FClientReceiveData_MessageType_Offset = offsetof(FClientReceiveData, MessageType);
	static_assert(FClientReceiveData_MessageType_Offset == 0x8, "FClientReceiveData::MessageType offset is not 8");
	auto constexpr FClientReceiveData_MessageIndex_Offset = offsetof(FClientReceiveData, MessageIndex);
	static_assert(FClientReceiveData_MessageIndex_Offset == 0x10, "FClientReceiveData::MessageIndex offset is not 10");
	auto constexpr FClientReceiveData_MessageString_Offset = offsetof(FClientReceiveData, MessageString);
	static_assert(FClientReceiveData_MessageString_Offset == 0x18, "FClientReceiveData::MessageString offset is not 18");
	auto constexpr FClientReceiveData_RelatedPlayerState_2_Offset = offsetof(FClientReceiveData, RelatedPlayerState_2);
	static_assert(FClientReceiveData_RelatedPlayerState_2_Offset == 0x28, "FClientReceiveData::RelatedPlayerState_2 offset is not 28");
	auto constexpr FClientReceiveData_RelatedPlayerState_3_Offset = offsetof(FClientReceiveData, RelatedPlayerState_3);
	static_assert(FClientReceiveData_RelatedPlayerState_3_Offset == 0x30, "FClientReceiveData::RelatedPlayerState_3 offset is not 30");
	auto constexpr FClientReceiveData_OptionalObject_Offset = offsetof(FClientReceiveData, OptionalObject);
	static_assert(FClientReceiveData_OptionalObject_Offset == 0x38, "FClientReceiveData::OptionalObject offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
