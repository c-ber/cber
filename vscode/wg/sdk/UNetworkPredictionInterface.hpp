#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNetworkPredictionInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UNetworkPredictionInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1801); // id32("Class Engine.NetworkPredictionInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNetworkPredictionInterface = sizeof(UNetworkPredictionInterface); // 48
    static_assert(sizeof(UNetworkPredictionInterface) == 0x30, "Size of UNetworkPredictionInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
