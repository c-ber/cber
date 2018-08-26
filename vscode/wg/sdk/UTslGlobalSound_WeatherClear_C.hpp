#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGlobalSound_WeatherClear_C // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UTslGlobalSound_WeatherClear_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(162280); // id32("BlueprintGeneratedClass TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.UberGraphFrame */
	ExternalPtr<struct UAkComponent> Ak; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.Ak */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetAk(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGlobalSound_WeatherClear_C = sizeof(UTslGlobalSound_WeatherClear_C); // 1056
    static_assert(sizeof(UTslGlobalSound_WeatherClear_C) == 0x420, "Size of UTslGlobalSound_WeatherClear_C is not correct.");
	auto constexpr UTslGlobalSound_WeatherClear_C_UberGraphFrame_Offset = offsetof(UTslGlobalSound_WeatherClear_C, UberGraphFrame);
	static_assert(UTslGlobalSound_WeatherClear_C_UberGraphFrame_Offset == 0x410, "UTslGlobalSound_WeatherClear_C::UberGraphFrame offset is not 410");
	auto constexpr UTslGlobalSound_WeatherClear_C_Ak_Offset = offsetof(UTslGlobalSound_WeatherClear_C, Ak);
	static_assert(UTslGlobalSound_WeatherClear_C_Ak_Offset == 0x418, "UTslGlobalSound_WeatherClear_C::Ak offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
