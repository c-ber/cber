#pragma once
#include "UActorComponent.hpp"
#include "FSkinMessageFormat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkinHelperComponent // Size: 0x260
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef USkinHelperComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1958); // id32("Class TslGame.SkinHelperComponent")
		return ptr;
	}
//	FSkinMessageFormat MsgFormatForWeapon; /* Ofs: 0x1E8 Size: 0x78 - StructProperty TslGame.SkinHelperComponent.MsgFormatForWeapon */
	uint8_t UnknownData1F0[0x70];


//	inline bool SetMsgFormatForWeapon(t_structHelper inst, FSkinMessageFormat value) { inst.WriteOffset(0x1E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkinHelperComponent = sizeof(USkinHelperComponent); // 608
    static_assert(sizeof(USkinHelperComponent) == 0x260, "Size of USkinHelperComponent is not correct.");
//	auto constexpr USkinHelperComponent_MsgFormatForWeapon_Offset = offsetof(USkinHelperComponent, MsgFormatForWeapon);
//	static_assert(USkinHelperComponent_MsgFormatForWeapon_Offset == 0x1e8, "USkinHelperComponent::MsgFormatForWeapon offset is not 1e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
