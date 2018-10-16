#pragma once
#include "UGameEngine.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEngine // Size: 0xDE0
	: public UGameEngine // Size: 0xDD0
{
private:
	typedef UTslEngine t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1367); // id32("Class TslGame.TslEngine")
		return ptr;
	}
	float ESportsServerMaxTickRate; /* Ofs: 0xDD0 Size: 0x4 - FloatProperty TslGame.TslEngine.ESportsServerMaxTickRate */
	float CustomGameServerMaxTickRate; /* Ofs: 0xDD4 Size: 0x4 - FloatProperty TslGame.TslEngine.CustomGameServerMaxTickRate */
	float FrameRateCap; /* Ofs: 0xDD8 Size: 0x4 - FloatProperty TslGame.TslEngine.FrameRateCap */
	uint8_t UnknownDataDDC[0x4];


	inline bool SetESportsServerMaxTickRate(t_structHelper inst, float value) { inst.WriteOffset(0xDD0, value); }
	inline bool SetCustomGameServerMaxTickRate(t_structHelper inst, float value) { inst.WriteOffset(0xDD4, value); }
	inline bool SetFrameRateCap(t_structHelper inst, float value) { inst.WriteOffset(0xDD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEngine = sizeof(UTslEngine); // 3552
    static_assert(sizeof(UTslEngine) == 0xDE0, "Size of UTslEngine is not correct.");
	auto constexpr UTslEngine_ESportsServerMaxTickRate_Offset = offsetof(UTslEngine, ESportsServerMaxTickRate);
	static_assert(UTslEngine_ESportsServerMaxTickRate_Offset == 0xdd0, "UTslEngine::ESportsServerMaxTickRate offset is not dd0");
	auto constexpr UTslEngine_CustomGameServerMaxTickRate_Offset = offsetof(UTslEngine, CustomGameServerMaxTickRate);
	static_assert(UTslEngine_CustomGameServerMaxTickRate_Offset == 0xdd4, "UTslEngine::CustomGameServerMaxTickRate offset is not dd4");
	auto constexpr UTslEngine_FrameRateCap_Offset = offsetof(UTslEngine, FrameRateCap);
	static_assert(UTslEngine_FrameRateCap_Offset == 0xdd8, "UTslEngine::FrameRateCap offset is not dd8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
