#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsCollisionHandler // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UPhysicsCollisionHandler t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1175); // id32("Class Engine.PhysicsCollisionHandler")
		return ptr;
	}
	float ImpactThreshold; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.PhysicsCollisionHandler.ImpactThreshold */
	float ImpactReFireDelay; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.PhysicsCollisionHandler.ImpactReFireDelay */
	ExternalPtr<struct USoundBase> DefaultImpactSound; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.PhysicsCollisionHandler.DefaultImpactSound */
	float LastImpactSoundTime; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.PhysicsCollisionHandler.LastImpactSoundTime */
	uint8_t UnknownData44[0x4];


	inline bool SetImpactThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetImpactReFireDelay(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetDefaultImpactSound(t_structHelper inst, ExternalPtr<struct USoundBase> value) { inst.WriteOffset(0x38, value); }
	inline bool SetLastImpactSoundTime(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsCollisionHandler = sizeof(UPhysicsCollisionHandler); // 72
    static_assert(sizeof(UPhysicsCollisionHandler) == 0x48, "Size of UPhysicsCollisionHandler is not correct.");
	auto constexpr UPhysicsCollisionHandler_ImpactThreshold_Offset = offsetof(UPhysicsCollisionHandler, ImpactThreshold);
	static_assert(UPhysicsCollisionHandler_ImpactThreshold_Offset == 0x30, "UPhysicsCollisionHandler::ImpactThreshold offset is not 30");
	auto constexpr UPhysicsCollisionHandler_ImpactReFireDelay_Offset = offsetof(UPhysicsCollisionHandler, ImpactReFireDelay);
	static_assert(UPhysicsCollisionHandler_ImpactReFireDelay_Offset == 0x34, "UPhysicsCollisionHandler::ImpactReFireDelay offset is not 34");
	auto constexpr UPhysicsCollisionHandler_DefaultImpactSound_Offset = offsetof(UPhysicsCollisionHandler, DefaultImpactSound);
	static_assert(UPhysicsCollisionHandler_DefaultImpactSound_Offset == 0x38, "UPhysicsCollisionHandler::DefaultImpactSound offset is not 38");
	auto constexpr UPhysicsCollisionHandler_LastImpactSoundTime_Offset = offsetof(UPhysicsCollisionHandler, LastImpactSoundTime);
	static_assert(UPhysicsCollisionHandler_LastImpactSoundTime_Offset == 0x40, "UPhysicsCollisionHandler::LastImpactSoundTime offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
