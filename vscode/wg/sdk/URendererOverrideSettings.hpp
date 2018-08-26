#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URendererOverrideSettings // Size: 0x48
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef URendererOverrideSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(733); // id32("Class Engine.RendererOverrideSettings")
		return ptr;
	}
	uint8_t boolField40;
	uint8_t UnknownData41[0x7];


	inline bool bSupportAllShaderPermutations()
	{
		return boolField40& 0x1;
	}
	inline bool SetbSupportAllShaderPermutations(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bForceRecomputeTangents()
	{
		return boolField40& 0x2;
	}
	inline bool SetbForceRecomputeTangents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURendererOverrideSettings = sizeof(URendererOverrideSettings); // 72
    static_assert(sizeof(URendererOverrideSettings) == 0x48, "Size of URendererOverrideSettings is not correct.");
	auto constexpr URendererOverrideSettings_boolField40_Offset = offsetof(URendererOverrideSettings, boolField40);
	static_assert(URendererOverrideSettings_boolField40_Offset == 0x40, "URendererOverrideSettings::boolField40 offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
