#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavRelevantComponent // Size: 0x220
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UNavRelevantComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1805); // id32("Class Engine.NavRelevantComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x1C];
	uint8_t boolField20C;
	uint8_t UnknownData20D[0x3];
	ExternalPtr<struct UObject> CachedNavParent; /* Ofs: 0x210 Size: 0x8 - ObjectProperty Engine.NavRelevantComponent.CachedNavParent */
	uint8_t UnknownData218[0x8];


	inline bool bAttachToOwnersRoot()
	{
		return boolField20C& 0x1;
	}
	inline bool SetbAttachToOwnersRoot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x20C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCachedNavParent(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0x210, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavRelevantComponent = sizeof(UNavRelevantComponent); // 544
    static_assert(sizeof(UNavRelevantComponent) == 0x220, "Size of UNavRelevantComponent is not correct.");
	auto constexpr UNavRelevantComponent_boolField20C_Offset = offsetof(UNavRelevantComponent, boolField20C);
	static_assert(UNavRelevantComponent_boolField20C_Offset == 0x20c, "UNavRelevantComponent::boolField20C offset is not 20c");
	auto constexpr UNavRelevantComponent_CachedNavParent_Offset = offsetof(UNavRelevantComponent, CachedNavParent);
	static_assert(UNavRelevantComponent_CachedNavParent_Offset == 0x210, "UNavRelevantComponent::CachedNavParent offset is not 210");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
