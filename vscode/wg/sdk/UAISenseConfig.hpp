#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseConfig // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UAISenseConfig t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1689); // id32("Class AIModule.AISenseConfig")
		return ptr;
	}
	FColor DebugColor; /* Ofs: 0x30 Size: 0x4 - StructProperty AIModule.AISenseConfig.DebugColor */
	float MaxAge; /* Ofs: 0x34 Size: 0x4 - FloatProperty AIModule.AISenseConfig.MaxAge */
	uint8_t boolField38;
	uint8_t UnknownData39[0x17];


	inline bool SetDebugColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x30, value); }
	inline bool SetMaxAge(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool bStartsEnabled()
	{
		return boolField38& 0x1;
	}
	inline bool SetbStartsEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseConfig = sizeof(UAISenseConfig); // 80
    static_assert(sizeof(UAISenseConfig) == 0x50, "Size of UAISenseConfig is not correct.");
	auto constexpr UAISenseConfig_DebugColor_Offset = offsetof(UAISenseConfig, DebugColor);
	static_assert(UAISenseConfig_DebugColor_Offset == 0x30, "UAISenseConfig::DebugColor offset is not 30");
	auto constexpr UAISenseConfig_MaxAge_Offset = offsetof(UAISenseConfig, MaxAge);
	static_assert(UAISenseConfig_MaxAge_Offset == 0x34, "UAISenseConfig::MaxAge offset is not 34");
	auto constexpr UAISenseConfig_boolField38_Offset = offsetof(UAISenseConfig, boolField38);
	static_assert(UAISenseConfig_boolField38_Offset == 0x38, "UAISenseConfig::boolField38 offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
