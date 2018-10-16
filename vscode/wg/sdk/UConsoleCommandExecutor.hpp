#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UConsoleCommandExecutor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UConsoleCommandExecutor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1835); // id32("Class TslGame.ConsoleCommandExecutor")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUConsoleCommandExecutor = sizeof(UConsoleCommandExecutor); // 1040
    static_assert(sizeof(UConsoleCommandExecutor) == 0x410, "Size of UConsoleCommandExecutor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
