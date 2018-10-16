#pragma once
#include "UConsoleSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslConsoleSetting // Size: 0x108
	: public UConsoleSettings // Size: 0x78
{
private:
	typedef UTslConsoleSetting t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1354); // id32("Class TslGame.TslConsoleSetting")
		return ptr;
	}
	TArray<struct FString> AutoCompleteItemPaths; /* Ofs: 0x78 Size: 0x10 - ArrayProperty TslGame.TslConsoleSetting.AutoCompleteItemPaths */
	TArray<struct FString> AutoCompleteItemKinds; /* Ofs: 0x88 Size: 0x10 - ArrayProperty TslGame.TslConsoleSetting.AutoCompleteItemKinds */
	TArray<struct FAutoCompleteVehiclePaths> AutoCompleteVehiclePaths; /* Ofs: 0x98 Size: 0x10 - ArrayProperty TslGame.TslConsoleSetting.AutoCompleteVehiclePaths */
	TArray<struct FString> AutoCompleteMaleBody; /* Ofs: 0xA8 Size: 0x10 - ArrayProperty TslGame.TslConsoleSetting.AutoCompleteMaleBody */
	TArray<struct FString> AutoCompleteMaleHair; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty TslGame.TslConsoleSetting.AutoCompleteMaleHair */
	TArray<struct FString> AutoCompleteMaleFace; /* Ofs: 0xC8 Size: 0x10 - ArrayProperty TslGame.TslConsoleSetting.AutoCompleteMaleFace */
	TArray<struct FString> AutoCompleteFemaleBody; /* Ofs: 0xD8 Size: 0x10 - ArrayProperty TslGame.TslConsoleSetting.AutoCompleteFemaleBody */
	TArray<struct FString> AutoCompleteFemaleHair; /* Ofs: 0xE8 Size: 0x10 - ArrayProperty TslGame.TslConsoleSetting.AutoCompleteFemaleHair */
	TArray<struct FString> AutoCompleteFemaleFace; /* Ofs: 0xF8 Size: 0x10 - ArrayProperty TslGame.TslConsoleSetting.AutoCompleteFemaleFace */


	inline bool SetAutoCompleteItemPaths(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x78, value); }
	inline bool SetAutoCompleteItemKinds(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x88, value); }
	inline bool SetAutoCompleteVehiclePaths(t_structHelper inst, TArray<struct FAutoCompleteVehiclePaths> value) { inst.WriteOffset(0x98, value); }
	inline bool SetAutoCompleteMaleBody(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetAutoCompleteMaleHair(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetAutoCompleteMaleFace(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetAutoCompleteFemaleBody(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0xD8, value); }
	inline bool SetAutoCompleteFemaleHair(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0xE8, value); }
	inline bool SetAutoCompleteFemaleFace(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0xF8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslConsoleSetting = sizeof(UTslConsoleSetting); // 264
    static_assert(sizeof(UTslConsoleSetting) == 0x108, "Size of UTslConsoleSetting is not correct.");
	auto constexpr UTslConsoleSetting_AutoCompleteItemPaths_Offset = offsetof(UTslConsoleSetting, AutoCompleteItemPaths);
	static_assert(UTslConsoleSetting_AutoCompleteItemPaths_Offset == 0x78, "UTslConsoleSetting::AutoCompleteItemPaths offset is not 78");
	auto constexpr UTslConsoleSetting_AutoCompleteItemKinds_Offset = offsetof(UTslConsoleSetting, AutoCompleteItemKinds);
	static_assert(UTslConsoleSetting_AutoCompleteItemKinds_Offset == 0x88, "UTslConsoleSetting::AutoCompleteItemKinds offset is not 88");
	auto constexpr UTslConsoleSetting_AutoCompleteVehiclePaths_Offset = offsetof(UTslConsoleSetting, AutoCompleteVehiclePaths);
	static_assert(UTslConsoleSetting_AutoCompleteVehiclePaths_Offset == 0x98, "UTslConsoleSetting::AutoCompleteVehiclePaths offset is not 98");
	auto constexpr UTslConsoleSetting_AutoCompleteMaleBody_Offset = offsetof(UTslConsoleSetting, AutoCompleteMaleBody);
	static_assert(UTslConsoleSetting_AutoCompleteMaleBody_Offset == 0xa8, "UTslConsoleSetting::AutoCompleteMaleBody offset is not a8");
	auto constexpr UTslConsoleSetting_AutoCompleteMaleHair_Offset = offsetof(UTslConsoleSetting, AutoCompleteMaleHair);
	static_assert(UTslConsoleSetting_AutoCompleteMaleHair_Offset == 0xb8, "UTslConsoleSetting::AutoCompleteMaleHair offset is not b8");
	auto constexpr UTslConsoleSetting_AutoCompleteMaleFace_Offset = offsetof(UTslConsoleSetting, AutoCompleteMaleFace);
	static_assert(UTslConsoleSetting_AutoCompleteMaleFace_Offset == 0xc8, "UTslConsoleSetting::AutoCompleteMaleFace offset is not c8");
	auto constexpr UTslConsoleSetting_AutoCompleteFemaleBody_Offset = offsetof(UTslConsoleSetting, AutoCompleteFemaleBody);
	static_assert(UTslConsoleSetting_AutoCompleteFemaleBody_Offset == 0xd8, "UTslConsoleSetting::AutoCompleteFemaleBody offset is not d8");
	auto constexpr UTslConsoleSetting_AutoCompleteFemaleHair_Offset = offsetof(UTslConsoleSetting, AutoCompleteFemaleHair);
	static_assert(UTslConsoleSetting_AutoCompleteFemaleHair_Offset == 0xe8, "UTslConsoleSetting::AutoCompleteFemaleHair offset is not e8");
	auto constexpr UTslConsoleSetting_AutoCompleteFemaleFace_Offset = offsetof(UTslConsoleSetting, AutoCompleteFemaleFace);
	static_assert(UTslConsoleSetting_AutoCompleteFemaleFace_Offset == 0xf8, "UTslConsoleSetting::AutoCompleteFemaleFace offset is not f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
