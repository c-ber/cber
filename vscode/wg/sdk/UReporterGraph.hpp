#pragma once
#include "UReporterBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReporterGraph // Size: 0xB0
	: public UReporterBase // Size: 0x38
{
private:
	typedef UReporterGraph t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1188); // id32("Class Engine.ReporterGraph")
		return ptr;
	}
	uint8_t UnknownData38[0x78];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReporterGraph = sizeof(UReporterGraph); // 176
    static_assert(sizeof(UReporterGraph) == 0xB0, "Size of UReporterGraph is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
