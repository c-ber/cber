#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelActorContainer // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef ULevelActorContainer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(847); // id32("Class Engine.LevelActorContainer")
		return ptr;
	}
	TArray<ExternalPtr<struct UActor>> Actors; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.LevelActorContainer.Actors */


	inline bool SetActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelActorContainer = sizeof(ULevelActorContainer); // 64
    static_assert(sizeof(ULevelActorContainer) == 0x40, "Size of ULevelActorContainer is not correct.");
	auto constexpr ULevelActorContainer_Actors_Offset = offsetof(ULevelActorContainer, Actors);
	static_assert(ULevelActorContainer_Actors_Offset == 0x30, "ULevelActorContainer::Actors offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
