#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGenericTeamAgentInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UGenericTeamAgentInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1667); // id32("Class AIModule.GenericTeamAgentInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGenericTeamAgentInterface = sizeof(UGenericTeamAgentInterface); // 48
    static_assert(sizeof(UGenericTeamAgentInterface) == 0x30, "Size of UGenericTeamAgentInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
