#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UConsole // Size: 0x138
	: public UObject // Size: 0x30
{
private:
	typedef UConsole t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(703); // id32("Class Engine.Console")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
	ExternalPtr<struct ULocalPlayer> ConsoleTargetPlayer; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.Console.ConsoleTargetPlayer */
	ExternalPtr<struct UTexture2D> DefaultTexture_Black; /* Ofs: 0x48 Size: 0x8 - ObjectProperty Engine.Console.DefaultTexture_Black */
	ExternalPtr<struct UTexture2D> DefaultTexture_White; /* Ofs: 0x50 Size: 0x8 - ObjectProperty Engine.Console.DefaultTexture_White */
	uint8_t UnknownData58[0x18];
	TArray<struct FString> HistoryBuffer; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.Console.HistoryBuffer */
	uint8_t UnknownData80[0xB8];


	inline bool SetConsoleTargetPlayer(t_structHelper inst, ExternalPtr<struct ULocalPlayer> value) { inst.WriteOffset(0x40, value); }
	inline bool SetDefaultTexture_Black(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x48, value); }
	inline bool SetDefaultTexture_White(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x50, value); }
	inline bool SetHistoryBuffer(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUConsole = sizeof(UConsole); // 312
    static_assert(sizeof(UConsole) == 0x138, "Size of UConsole is not correct.");
	auto constexpr UConsole_ConsoleTargetPlayer_Offset = offsetof(UConsole, ConsoleTargetPlayer);
	static_assert(UConsole_ConsoleTargetPlayer_Offset == 0x40, "UConsole::ConsoleTargetPlayer offset is not 40");
	auto constexpr UConsole_DefaultTexture_Black_Offset = offsetof(UConsole, DefaultTexture_Black);
	static_assert(UConsole_DefaultTexture_Black_Offset == 0x48, "UConsole::DefaultTexture_Black offset is not 48");
	auto constexpr UConsole_DefaultTexture_White_Offset = offsetof(UConsole, DefaultTexture_White);
	static_assert(UConsole_DefaultTexture_White_Offset == 0x50, "UConsole::DefaultTexture_White offset is not 50");
	auto constexpr UConsole_HistoryBuffer_Offset = offsetof(UConsole, HistoryBuffer);
	static_assert(UConsole_HistoryBuffer_Offset == 0x70, "UConsole::HistoryBuffer offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
