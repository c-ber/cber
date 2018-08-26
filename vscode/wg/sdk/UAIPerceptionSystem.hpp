#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIPerceptionSystem // Size: 0x138
	: public UObject // Size: 0x30
{
private:
	typedef UAIPerceptionSystem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1675); // id32("Class AIModule.AIPerceptionSystem")
		return ptr;
	}
	uint8_t UnknownData30[0x58];
	TArray<ExternalPtr<struct UAISense>> Senses; /* Ofs: 0x88 Size: 0x10 - ArrayProperty AIModule.AIPerceptionSystem.Senses */
	float PerceptionAgingRate; /* Ofs: 0x98 Size: 0x4 - FloatProperty AIModule.AIPerceptionSystem.PerceptionAgingRate */
	uint8_t UnknownData9C[0x9C];


	inline bool SetSenses(t_structHelper inst, TArray<ExternalPtr<struct UAISense>> value) { inst.WriteOffset(0x88, value); }
	inline bool SetPerceptionAgingRate(t_structHelper inst, float value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIPerceptionSystem = sizeof(UAIPerceptionSystem); // 312
    static_assert(sizeof(UAIPerceptionSystem) == 0x138, "Size of UAIPerceptionSystem is not correct.");
	auto constexpr UAIPerceptionSystem_Senses_Offset = offsetof(UAIPerceptionSystem, Senses);
	static_assert(UAIPerceptionSystem_Senses_Offset == 0x88, "UAIPerceptionSystem::Senses offset is not 88");
	auto constexpr UAIPerceptionSystem_PerceptionAgingRate_Offset = offsetof(UAIPerceptionSystem, PerceptionAgingRate);
	static_assert(UAIPerceptionSystem_PerceptionAgingRate_Offset == 0x98, "UAIPerceptionSystem::PerceptionAgingRate offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
