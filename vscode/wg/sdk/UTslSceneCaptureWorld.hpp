#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSceneCaptureWorld // Size: 0xB0
	: public UObject // Size: 0x30
{
private:
	typedef UTslSceneCaptureWorld t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1493); // id32("Class TslGame.TslSceneCaptureWorld")
		return ptr;
	}
	uint8_t UnknownData30[0x28];
	ExternalPtr<struct UWorld> World; /* Ofs: 0x58 Size: 0x8 - ObjectProperty TslGame.TslSceneCaptureWorld.World */
	uint8_t UnknownData60[0x50];


	inline bool SetWorld(t_structHelper inst, ExternalPtr<struct UWorld> value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSceneCaptureWorld = sizeof(UTslSceneCaptureWorld); // 176
    static_assert(sizeof(UTslSceneCaptureWorld) == 0xB0, "Size of UTslSceneCaptureWorld is not correct.");
	auto constexpr UTslSceneCaptureWorld_World_Offset = offsetof(UTslSceneCaptureWorld, World);
	static_assert(UTslSceneCaptureWorld_World_Offset == 0x58, "UTslSceneCaptureWorld::World offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
