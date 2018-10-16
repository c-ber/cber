#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterface_PostProcessVolume // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UInterface_PostProcessVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1724); // id32("Class Engine.Interface_PostProcessVolume")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterface_PostProcessVolume = sizeof(UInterface_PostProcessVolume); // 48
    static_assert(sizeof(UInterface_PostProcessVolume) == 0x30, "Size of UInterface_PostProcessVolume is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
