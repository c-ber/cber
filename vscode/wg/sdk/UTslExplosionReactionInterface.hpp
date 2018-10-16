#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslExplosionReactionInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UTslExplosionReactionInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1375); // id32("Class TslGame.TslExplosionReactionInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslExplosionReactionInterface = sizeof(UTslExplosionReactionInterface); // 48
    static_assert(sizeof(UTslExplosionReactionInterface) == 0x30, "Size of UTslExplosionReactionInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
