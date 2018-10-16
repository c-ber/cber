#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleReactionInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UTslVehicleReactionInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1609); // id32("Class TslGame.TslVehicleReactionInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleReactionInterface = sizeof(UTslVehicleReactionInterface); // 48
    static_assert(sizeof(UTslVehicleReactionInterface) == 0x30, "Size of UTslVehicleReactionInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
