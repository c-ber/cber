#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTurnBasedMatchInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UTurnBasedMatchInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2166); // id32("Class OnlineSubsystem.TurnBasedMatchInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTurnBasedMatchInterface = sizeof(UTurnBasedMatchInterface); // 48
    static_assert(sizeof(UTurnBasedMatchInterface) == 0x30, "Size of UTurnBasedMatchInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
