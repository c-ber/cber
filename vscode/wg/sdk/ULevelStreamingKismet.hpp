#pragma once
#include "ULevelStreaming.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelStreamingKismet // Size: 0x180
	: public ULevelStreaming // Size: 0x170
{
private:
	typedef ULevelStreamingKismet t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(850); // id32("Class Engine.LevelStreamingKismet")
		return ptr;
	}
	uint8_t boolField170;
	uint8_t UnknownData171[0xF];


	inline bool bInitiallyLoaded()
	{
		return boolField170& 0x1;
	}
	inline bool SetbInitiallyLoaded(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x170, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bInitiallyVisible()
	{
		return boolField170& 0x2;
	}
	inline bool SetbInitiallyVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x170, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelStreamingKismet = sizeof(ULevelStreamingKismet); // 384
    static_assert(sizeof(ULevelStreamingKismet) == 0x180, "Size of ULevelStreamingKismet is not correct.");
	auto constexpr ULevelStreamingKismet_boolField170_Offset = offsetof(ULevelStreamingKismet, boolField170);
	static_assert(ULevelStreamingKismet_boolField170_Offset == 0x170, "ULevelStreamingKismet::boolField170 offset is not 170");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
