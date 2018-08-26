#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerInput // Size: 0x3D0
	: public UObject // Size: 0x30
{
private:
	typedef UPlayerInput t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(783); // id32("Class Engine.PlayerInput")
		return ptr;
	}
	uint8_t UnknownData30[0xF8];
	TArray<struct FKeyBind> DebugExecBindings; /* Ofs: 0x128 Size: 0x10 - ArrayProperty Engine.PlayerInput.DebugExecBindings */
	uint8_t UnknownData138[0x30];
	TArray<struct FName> InvertedAxis; /* Ofs: 0x168 Size: 0x10 - ArrayProperty Engine.PlayerInput.InvertedAxis */
	uint8_t UnknownData178[0x258];


	inline bool SetDebugExecBindings(t_structHelper inst, TArray<struct FKeyBind> value) { inst.WriteOffset(0x128, value); }
	inline bool SetInvertedAxis(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x168, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerInput = sizeof(UPlayerInput); // 976
    static_assert(sizeof(UPlayerInput) == 0x3D0, "Size of UPlayerInput is not correct.");
	auto constexpr UPlayerInput_DebugExecBindings_Offset = offsetof(UPlayerInput, DebugExecBindings);
	static_assert(UPlayerInput_DebugExecBindings_Offset == 0x128, "UPlayerInput::DebugExecBindings offset is not 128");
	auto constexpr UPlayerInput_InvertedAxis_Offset = offsetof(UPlayerInput, InvertedAxis);
	static_assert(UPlayerInput_InvertedAxis_Offset == 0x168, "UPlayerInput::InvertedAxis offset is not 168");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
