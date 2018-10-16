#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReverbPluginSourceSettingsBase // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UReverbPluginSourceSettingsBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1816); // id32("Class Engine.ReverbPluginSourceSettingsBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReverbPluginSourceSettingsBase = sizeof(UReverbPluginSourceSettingsBase); // 48
    static_assert(sizeof(UReverbPluginSourceSettingsBase) == 0x30, "Size of UReverbPluginSourceSettingsBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
