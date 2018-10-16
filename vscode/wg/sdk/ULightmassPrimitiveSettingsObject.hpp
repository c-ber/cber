#pragma once
#include "FLightmassPrimitiveSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULightmassPrimitiveSettingsObject // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef ULightmassPrimitiveSettingsObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(853); // id32("Class Engine.LightmassPrimitiveSettingsObject")
		return ptr;
	}
	FLightmassPrimitiveSettings LightmassSettings; /* Ofs: 0x30 Size: 0x18 - StructProperty Engine.LightmassPrimitiveSettingsObject.LightmassSettings */


	inline bool SetLightmassSettings(t_structHelper inst, FLightmassPrimitiveSettings value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULightmassPrimitiveSettingsObject = sizeof(ULightmassPrimitiveSettingsObject); // 72
    static_assert(sizeof(ULightmassPrimitiveSettingsObject) == 0x48, "Size of ULightmassPrimitiveSettingsObject is not correct.");
	auto constexpr ULightmassPrimitiveSettingsObject_LightmassSettings_Offset = offsetof(ULightmassPrimitiveSettingsObject, LightmassSettings);
	static_assert(ULightmassPrimitiveSettingsObject_LightmassSettings_Offset == 0x30, "ULightmassPrimitiveSettingsObject::LightmassSettings offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
