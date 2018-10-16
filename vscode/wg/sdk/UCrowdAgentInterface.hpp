#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCrowdAgentInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UCrowdAgentInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(612); // id32("Class AIModule.CrowdAgentInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCrowdAgentInterface = sizeof(UCrowdAgentInterface); // 48
    static_assert(sizeof(UCrowdAgentInterface) == 0x30, "Size of UCrowdAgentInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
