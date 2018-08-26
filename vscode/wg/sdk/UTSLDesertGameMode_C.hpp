#pragma once
#include "UTslGameMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTSLDesertGameMode_C // Size: 0x968
	: public UTslGameMode // Size: 0x960
{
private:
	typedef UTSLDesertGameMode_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135916); // id32("BlueprintGeneratedClass TSLDesertGameMode.TSLDesertGameMode_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x960 Size: 0x8 - ObjectProperty TSLDesertGameMode.TSLDesertGameMode_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x960, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTSLDesertGameMode_C = sizeof(UTSLDesertGameMode_C); // 2408
    static_assert(sizeof(UTSLDesertGameMode_C) == 0x968, "Size of UTSLDesertGameMode_C is not correct.");
	auto constexpr UTSLDesertGameMode_C_DefaultSceneRoot_Offset = offsetof(UTSLDesertGameMode_C, DefaultSceneRoot);
	static_assert(UTSLDesertGameMode_C_DefaultSceneRoot_Offset == 0x960, "UTSLDesertGameMode_C::DefaultSceneRoot offset is not 960");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
