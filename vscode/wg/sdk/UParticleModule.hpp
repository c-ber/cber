#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModule // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UParticleModule t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1053); // id32("Class Engine.ParticleModule")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t boolField31;
	uint8_t UnknownData32[0x2];
	uint8_t LODValidity; /* Ofs: 0x34 Size: 0x1 - ByteProperty Engine.ParticleModule.LODValidity */
	uint8_t UnknownData35[0x3];


	inline bool bSpawnModule()
	{
		return boolField30& 0x1;
	}
	inline bool SetbSpawnModule(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUpdateModule()
	{
		return boolField30& 0x2;
	}
	inline bool SetbUpdateModule(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bFinalUpdateModule()
	{
		return boolField30& 0x4;
	}
	inline bool SetbFinalUpdateModule(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUpdateForGPUEmitter()
	{
		return boolField30& 0x8;
	}
	inline bool SetbUpdateForGPUEmitter(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bCurvesAsColor()
	{
		return boolField30& 0x10;
	}
	inline bool SetbCurvesAsColor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool b3DDrawMode()
	{
		return boolField30& 0x20;
	}
	inline bool Setb3DDrawMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bSupported3DDrawMode()
	{
		return boolField30& 0x40;
	}
	inline bool SetbSupported3DDrawMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bEnabled()
	{
		return boolField30& 0x80;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bEditable()
	{
		return boolField31& 0x1;
	}
	inline bool SetbEditable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool LODDuplicate()
	{
		return boolField31& 0x2;
	}
	inline bool SetLODDuplicate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSupportsRandomSeed()
	{
		return boolField31& 0x4;
	}
	inline bool SetbSupportsRandomSeed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bRequiresLoopingNotification()
	{
		return boolField31& 0x8;
	}
	inline bool SetbRequiresLoopingNotification(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetLODValidity(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x34, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModule = sizeof(UParticleModule); // 56
    static_assert(sizeof(UParticleModule) == 0x38, "Size of UParticleModule is not correct.");
	auto constexpr UParticleModule_boolField30_Offset = offsetof(UParticleModule, boolField30);
	static_assert(UParticleModule_boolField30_Offset == 0x30, "UParticleModule::boolField30 offset is not 30");
	auto constexpr UParticleModule_boolField31_Offset = offsetof(UParticleModule, boolField31);
	static_assert(UParticleModule_boolField31_Offset == 0x31, "UParticleModule::boolField31 offset is not 31");
	auto constexpr UParticleModule_LODValidity_Offset = offsetof(UParticleModule, LODValidity);
	static_assert(UParticleModule_LODValidity_Offset == 0x34, "UParticleModule::LODValidity offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
