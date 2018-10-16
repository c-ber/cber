#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOcclusionPluginSourceSettingsBase // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UOcclusionPluginSourceSettingsBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1815); // id32("Class Engine.OcclusionPluginSourceSettingsBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOcclusionPluginSourceSettingsBase = sizeof(UOcclusionPluginSourceSettingsBase); // 48
    static_assert(sizeof(UOcclusionPluginSourceSettingsBase) == 0x30, "Size of UOcclusionPluginSourceSettingsBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
