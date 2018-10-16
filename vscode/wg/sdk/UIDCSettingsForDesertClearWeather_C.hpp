#pragma once
#include "UConsoleCommandExecutor_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UIDCSettingsForDesertClearWeather_C // Size: 0x431
	: public UConsoleCommandExecutor_C // Size: 0x431
{
private:
	typedef UIDCSettingsForDesertClearWeather_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(162260); // id32("BlueprintGeneratedClass IDCSettingsForDesertClearWeather.IDCSettingsForDesertClearWeather_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUIDCSettingsForDesertClearWeather_C = sizeof(UIDCSettingsForDesertClearWeather_C); // 1073
    static_assert(sizeof(UIDCSettingsForDesertClearWeather_C) == 0x431, "Size of UIDCSettingsForDesertClearWeather_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
