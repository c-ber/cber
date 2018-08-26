#pragma once
#include "UTableGeneralItemSpawner.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UModePresetItemSpawner // Size: 0xF8
	: public UTableGeneralItemSpawner // Size: 0xF0
{
private:
	typedef UModePresetItemSpawner t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1895); // id32("Class TslGame.ModePresetItemSpawner")
		return ptr;
	}
	uint8_t UnknownDataF0[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUModePresetItemSpawner = sizeof(UModePresetItemSpawner); // 248
    static_assert(sizeof(UModePresetItemSpawner) == 0xF8, "Size of UModePresetItemSpawner is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
