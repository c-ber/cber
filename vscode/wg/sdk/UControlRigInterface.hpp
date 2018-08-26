#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UControlRigInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UControlRigInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(704); // id32("Class Engine.ControlRigInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUControlRigInterface = sizeof(UControlRigInterface); // 48
    static_assert(sizeof(UControlRigInterface) == 0x30, "Size of UControlRigInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
