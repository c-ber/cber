#pragma once
#include "UNavArea.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavArea_Obstacle // Size: 0x48
	: public UNavArea // Size: 0x48
{
private:
	typedef UNavArea_Obstacle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1031); // id32("Class Engine.NavArea_Obstacle")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavArea_Obstacle = sizeof(UNavArea_Obstacle); // 72
    static_assert(sizeof(UNavArea_Obstacle) == 0x48, "Size of UNavArea_Obstacle is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
