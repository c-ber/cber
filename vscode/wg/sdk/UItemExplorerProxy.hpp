#pragma once
#include "UItemExplorer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemExplorerProxy // Size: 0x490
	: public UItemExplorer // Size: 0x470
{
private:
	typedef UItemExplorerProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1967); // id32("Class TslGame.ItemExplorerProxy")
		return ptr;
	}
	FScriptDelegate OnChangeItemExplorerProxy; /* Ofs: 0x470 Size: 0x10 - DelegateProperty TslGame.ItemExplorerProxy.OnChangeItemExplorerProxy */
	uint8_t UnknownData480[0x10];


	inline bool SetOnChangeItemExplorerProxy(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x470, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemExplorerProxy = sizeof(UItemExplorerProxy); // 1168
    static_assert(sizeof(UItemExplorerProxy) == 0x490, "Size of UItemExplorerProxy is not correct.");
	auto constexpr UItemExplorerProxy_OnChangeItemExplorerProxy_Offset = offsetof(UItemExplorerProxy, OnChangeItemExplorerProxy);
	static_assert(UItemExplorerProxy_OnChangeItemExplorerProxy_Offset == 0x470, "UItemExplorerProxy::OnChangeItemExplorerProxy offset is not 470");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
