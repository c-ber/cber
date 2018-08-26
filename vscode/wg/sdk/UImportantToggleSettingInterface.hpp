#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UImportantToggleSettingInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UImportantToggleSettingInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(767); // id32("Class Engine.ImportantToggleSettingInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUImportantToggleSettingInterface = sizeof(UImportantToggleSettingInterface); // 48
    static_assert(sizeof(UImportantToggleSettingInterface) == 0x30, "Size of UImportantToggleSettingInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
