#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULocationServicesImpl // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef ULocationServicesImpl t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2129); // id32("Class LocationServicesBPLibrary.LocationServicesImpl")
		return ptr;
	}
	FScriptMulticastDelegate OnLocationChanged; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty LocationServicesBPLibrary.LocationServicesImpl.OnLocationChanged */


	inline bool SetOnLocationChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULocationServicesImpl = sizeof(ULocationServicesImpl); // 64
    static_assert(sizeof(ULocationServicesImpl) == 0x40, "Size of ULocationServicesImpl is not correct.");
	auto constexpr ULocationServicesImpl_OnLocationChanged_Offset = offsetof(ULocationServicesImpl, OnLocationChanged);
	static_assert(ULocationServicesImpl_OnLocationChanged_Offset == 0x30, "ULocationServicesImpl::OnLocationChanged offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
