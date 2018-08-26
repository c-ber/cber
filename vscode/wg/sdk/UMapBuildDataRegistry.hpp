#pragma once
#include "ELightingBuildQuality.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMapBuildDataRegistry // Size: 0x128
	: public UObject // Size: 0x30
{
private:
	typedef UMapBuildDataRegistry t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(856); // id32("Class Engine.MapBuildDataRegistry")
		return ptr;
	}
	TEnumAsByte<enum ELightingBuildQuality> LevelLightingQuality; /* Ofs: 0x30 Size: 0x1 - ByteProperty Engine.MapBuildDataRegistry.LevelLightingQuality */
	uint8_t UnknownData31[0xF7];


	inline bool SetLevelLightingQuality(t_structHelper inst, TEnumAsByte<enum ELightingBuildQuality> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMapBuildDataRegistry = sizeof(UMapBuildDataRegistry); // 296
    static_assert(sizeof(UMapBuildDataRegistry) == 0x128, "Size of UMapBuildDataRegistry is not correct.");
	auto constexpr UMapBuildDataRegistry_LevelLightingQuality_Offset = offsetof(UMapBuildDataRegistry, LevelLightingQuality);
	static_assert(UMapBuildDataRegistry_LevelLightingQuality_Offset == 0x30, "UMapBuildDataRegistry::LevelLightingQuality offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
