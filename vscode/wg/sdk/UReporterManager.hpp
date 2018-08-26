#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReporterManager // Size: 0xE8
	: public UObject // Size: 0x30
{
private:
	typedef UReporterManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1944); // id32("Class TslGame.ReporterManager")
		return ptr;
	}
	uint8_t UnknownData30[0xB8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReporterManager = sizeof(UReporterManager); // 232
    static_assert(sizeof(UReporterManager) == 0xE8, "Size of UReporterManager is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
