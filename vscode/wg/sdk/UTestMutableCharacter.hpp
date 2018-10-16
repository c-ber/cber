#pragma once
#include "UMutableCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTestMutableCharacter // Size: 0x8C0
	: public UMutableCharacter // Size: 0x8C0
{
private:
	typedef UTestMutableCharacter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1935); // id32("Class TslGame.TestMutableCharacter")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTestMutableCharacter = sizeof(UTestMutableCharacter); // 2240
    static_assert(sizeof(UTestMutableCharacter) == 0x8C0, "Size of UTestMutableCharacter is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
