#pragma once
#include "ULevelScriptActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslLevelScriptActor // Size: 0x4C0
	: public ULevelScriptActor // Size: 0x410
{
private:
	typedef UTslLevelScriptActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1424); // id32("Class TslGame.TslLevelScriptActor")
		return ptr;
	}
	TArray<struct FWeatherLevelInfo> WeatherLevelInfos; /* Ofs: 0x410 Size: 0x10 - ArrayProperty TslGame.TslLevelScriptActor.WeatherLevelInfos */
	ExternalPtr<struct UMaterialParameterCollection> GlobalMPC; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.TslLevelScriptActor.GlobalMPC */
	int32_t SelectedWeatherLevelIndex; /* Ofs: 0x428 Size: 0x4 - IntProperty TslGame.TslLevelScriptActor.SelectedWeatherLevelIndex */
	uint8_t UnknownData42C[0x94];


	inline bool SetWeatherLevelInfos(t_structHelper inst, TArray<struct FWeatherLevelInfo> value) { inst.WriteOffset(0x410, value); }
	inline bool SetGlobalMPC(t_structHelper inst, ExternalPtr<struct UMaterialParameterCollection> value) { inst.WriteOffset(0x420, value); }
	inline bool SetSelectedWeatherLevelIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslLevelScriptActor = sizeof(UTslLevelScriptActor); // 1216
    static_assert(sizeof(UTslLevelScriptActor) == 0x4C0, "Size of UTslLevelScriptActor is not correct.");
	auto constexpr UTslLevelScriptActor_WeatherLevelInfos_Offset = offsetof(UTslLevelScriptActor, WeatherLevelInfos);
	static_assert(UTslLevelScriptActor_WeatherLevelInfos_Offset == 0x410, "UTslLevelScriptActor::WeatherLevelInfos offset is not 410");
	auto constexpr UTslLevelScriptActor_GlobalMPC_Offset = offsetof(UTslLevelScriptActor, GlobalMPC);
	static_assert(UTslLevelScriptActor_GlobalMPC_Offset == 0x420, "UTslLevelScriptActor::GlobalMPC offset is not 420");
	auto constexpr UTslLevelScriptActor_SelectedWeatherLevelIndex_Offset = offsetof(UTslLevelScriptActor, SelectedWeatherLevelIndex);
	static_assert(UTslLevelScriptActor_SelectedWeatherLevelIndex_Offset == 0x428, "UTslLevelScriptActor::SelectedWeatherLevelIndex offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
