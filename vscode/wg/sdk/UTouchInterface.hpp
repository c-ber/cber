#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTouchInterface // Size: 0x60
	: public UObject // Size: 0x30
{
private:
	typedef UTouchInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1253); // id32("Class Engine.TouchInterface")
		return ptr;
	}
	TArray<struct FTouchInputControl> Controls; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.TouchInterface.Controls */
	float ActiveOpacity; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.TouchInterface.ActiveOpacity */
	float InactiveOpacity; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.TouchInterface.InactiveOpacity */
	float TimeUntilDeactive; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.TouchInterface.TimeUntilDeactive */
	float TimeUntilReset; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.TouchInterface.TimeUntilReset */
	float ActivationDelay; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.TouchInterface.ActivationDelay */
	uint8_t boolField54;
	uint8_t UnknownData55[0x3];
	float StartupDelay; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.TouchInterface.StartupDelay */
	uint8_t UnknownData5C[0x4];


	inline bool SetControls(t_structHelper inst, TArray<struct FTouchInputControl> value) { inst.WriteOffset(0x30, value); }
	inline bool SetActiveOpacity(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetInactiveOpacity(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetTimeUntilDeactive(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetTimeUntilReset(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetActivationDelay(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool bPreventRecenter()
	{
		return boolField54& 0x1;
	}
	inline bool SetbPreventRecenter(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStartupDelay(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTouchInterface = sizeof(UTouchInterface); // 96
    static_assert(sizeof(UTouchInterface) == 0x60, "Size of UTouchInterface is not correct.");
	auto constexpr UTouchInterface_Controls_Offset = offsetof(UTouchInterface, Controls);
	static_assert(UTouchInterface_Controls_Offset == 0x30, "UTouchInterface::Controls offset is not 30");
	auto constexpr UTouchInterface_ActiveOpacity_Offset = offsetof(UTouchInterface, ActiveOpacity);
	static_assert(UTouchInterface_ActiveOpacity_Offset == 0x40, "UTouchInterface::ActiveOpacity offset is not 40");
	auto constexpr UTouchInterface_InactiveOpacity_Offset = offsetof(UTouchInterface, InactiveOpacity);
	static_assert(UTouchInterface_InactiveOpacity_Offset == 0x44, "UTouchInterface::InactiveOpacity offset is not 44");
	auto constexpr UTouchInterface_TimeUntilDeactive_Offset = offsetof(UTouchInterface, TimeUntilDeactive);
	static_assert(UTouchInterface_TimeUntilDeactive_Offset == 0x48, "UTouchInterface::TimeUntilDeactive offset is not 48");
	auto constexpr UTouchInterface_TimeUntilReset_Offset = offsetof(UTouchInterface, TimeUntilReset);
	static_assert(UTouchInterface_TimeUntilReset_Offset == 0x4c, "UTouchInterface::TimeUntilReset offset is not 4c");
	auto constexpr UTouchInterface_ActivationDelay_Offset = offsetof(UTouchInterface, ActivationDelay);
	static_assert(UTouchInterface_ActivationDelay_Offset == 0x50, "UTouchInterface::ActivationDelay offset is not 50");
	auto constexpr UTouchInterface_boolField54_Offset = offsetof(UTouchInterface, boolField54);
	static_assert(UTouchInterface_boolField54_Offset == 0x54, "UTouchInterface::boolField54 offset is not 54");
	auto constexpr UTouchInterface_StartupDelay_Offset = offsetof(UTouchInterface, StartupDelay);
	static_assert(UTouchInterface_StartupDelay_Offset == 0x58, "UTouchInterface::StartupDelay offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
