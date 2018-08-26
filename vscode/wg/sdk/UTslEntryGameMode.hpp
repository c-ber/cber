#pragma once
#include "UGameMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEntryGameMode // Size: 0x4E0
	: public UGameMode // Size: 0x4E0
{
private:
	typedef UTslEntryGameMode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1372); // id32("Class TslGame.TslEntryGameMode")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEntryGameMode = sizeof(UTslEntryGameMode); // 1248
    static_assert(sizeof(UTslEntryGameMode) == 0x4E0, "Size of UTslEntryGameMode is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
