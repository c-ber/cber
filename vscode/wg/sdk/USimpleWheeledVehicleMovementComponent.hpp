#pragma once
#include "UWheeledVehicleMovementComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USimpleWheeledVehicleMovementComponent // Size: 0x3E0
	: public UWheeledVehicleMovementComponent // Size: 0x3E0
{
private:
	typedef USimpleWheeledVehicleMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2080); // id32("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSimpleWheeledVehicleMovementComponent = sizeof(USimpleWheeledVehicleMovementComponent); // 992
    static_assert(sizeof(USimpleWheeledVehicleMovementComponent) == 0x3E0, "Size of USimpleWheeledVehicleMovementComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
