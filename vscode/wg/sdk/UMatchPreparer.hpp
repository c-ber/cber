#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMatchPreparer // Size: 0x60
	: public UObject // Size: 0x30
{
private:
	typedef UMatchPreparer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1926); // id32("Class TslGame.MatchPreparer")
		return ptr;
	}
	int32_t WarmupTime; /* Ofs: 0x30 Size: 0x4 - IntProperty TslGame.MatchPreparer.WarmupTime */
	int32_t WarmupTimeInPIE; /* Ofs: 0x34 Size: 0x4 - IntProperty TslGame.MatchPreparer.WarmupTimeInPIE */
	uint8_t UnknownData38[0x28];


	inline bool SetWarmupTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetWarmupTimeInPIE(t_structHelper inst, int32_t value) { inst.WriteOffset(0x34, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMatchPreparer = sizeof(UMatchPreparer); // 96
    static_assert(sizeof(UMatchPreparer) == 0x60, "Size of UMatchPreparer is not correct.");
	auto constexpr UMatchPreparer_WarmupTime_Offset = offsetof(UMatchPreparer, WarmupTime);
	static_assert(UMatchPreparer_WarmupTime_Offset == 0x30, "UMatchPreparer::WarmupTime offset is not 30");
	auto constexpr UMatchPreparer_WarmupTimeInPIE_Offset = offsetof(UMatchPreparer, WarmupTimeInPIE);
	static_assert(UMatchPreparer_WarmupTimeInPIE_Offset == 0x34, "UMatchPreparer::WarmupTimeInPIE offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
