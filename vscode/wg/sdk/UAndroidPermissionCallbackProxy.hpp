#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAndroidPermissionCallbackProxy // Size: 0x80
	: public UObject // Size: 0x30
{
private:
	typedef UAndroidPermissionCallbackProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2157); // id32("Class AndroidPermission.AndroidPermissionCallbackProxy")
		return ptr;
	}
	FScriptMulticastDelegate OnPermissionsGrantedDynamicDelegate; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty AndroidPermission.AndroidPermissionCallbackProxy.OnPermissionsGrantedDynamicDelegate */
	uint8_t UnknownData40[0x40];


	inline bool SetOnPermissionsGrantedDynamicDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAndroidPermissionCallbackProxy = sizeof(UAndroidPermissionCallbackProxy); // 128
    static_assert(sizeof(UAndroidPermissionCallbackProxy) == 0x80, "Size of UAndroidPermissionCallbackProxy is not correct.");
	auto constexpr UAndroidPermissionCallbackProxy_OnPermissionsGrantedDynamicDelegate_Offset = offsetof(UAndroidPermissionCallbackProxy, OnPermissionsGrantedDynamicDelegate);
	static_assert(UAndroidPermissionCallbackProxy_OnPermissionsGrantedDynamicDelegate_Offset == 0x30, "UAndroidPermissionCallbackProxy::OnPermissionsGrantedDynamicDelegate offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
