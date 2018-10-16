#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeneralEngineSettings // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UGeneralEngineSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1277); // id32("Class EngineSettings.GeneralEngineSettings")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeneralEngineSettings = sizeof(UGeneralEngineSettings); // 48
    static_assert(sizeof(UGeneralEngineSettings) == 0x30, "Size of UGeneralEngineSettings is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
