#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UTslVehicleInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1939); // id32("Class TslGame.TslVehicleInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleInterface = sizeof(UTslVehicleInterface); // 48
    static_assert(sizeof(UTslVehicleInterface) == 0x30, "Size of UTslVehicleInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
