#pragma once
#include "UGameMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGame_Menu // Size: 0x4E0
	: public UGameMode // Size: 0x4E0
{
private:
	typedef UTslGame_Menu t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1386); // id32("Class TslGame.TslGame_Menu")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGame_Menu = sizeof(UTslGame_Menu); // 1248
    static_assert(sizeof(UTslGame_Menu) == 0x4E0, "Size of UTslGame_Menu is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
