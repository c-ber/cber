#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDPICustomScalingRule // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UDPICustomScalingRule t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(753); // id32("Class Engine.DPICustomScalingRule")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDPICustomScalingRule = sizeof(UDPICustomScalingRule); // 48
    static_assert(sizeof(UDPICustomScalingRule) == 0x30, "Size of UDPICustomScalingRule is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
