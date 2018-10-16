#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslAchievement // Size: 0x500
	: public UActor // Size: 0x410
{
private:
	typedef UTslAchievement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1982); // id32("Class TslGame.TslAchievement")
		return ptr;
	}
	uint8_t UnknownData410[0x78];
	TArray<ExternalPtr<struct UClass>> HelmetLv3List; /* Ofs: 0x488 Size: 0x10 - ArrayProperty TslGame.TslAchievement.HelmetLv3List */
	TArray<ExternalPtr<struct UClass>> BackpackLv3List; /* Ofs: 0x498 Size: 0x10 - ArrayProperty TslGame.TslAchievement.BackpackLv3List */
	TArray<ExternalPtr<struct UClass>> VestLv3List; /* Ofs: 0x4A8 Size: 0x10 - ArrayProperty TslGame.TslAchievement.VestLv3List */
	TArray<ExternalPtr<struct UClass>> GhillieSuitList; /* Ofs: 0x4B8 Size: 0x10 - ArrayProperty TslGame.TslAchievement.GhillieSuitList */
	TArray<ExternalPtr<struct UClass>> SilenceWeaponList; /* Ofs: 0x4C8 Size: 0x10 - ArrayProperty TslGame.TslAchievement.SilenceWeaponList */
	TArray<ExternalPtr<struct UClass>> CrossbowClassList; /* Ofs: 0x4D8 Size: 0x10 - ArrayProperty TslGame.TslAchievement.CrossbowClassList */
	TArray<ExternalPtr<struct UClass>> PanClassList; /* Ofs: 0x4E8 Size: 0x10 - ArrayProperty TslGame.TslAchievement.PanClassList */
	uint8_t UnknownData4F8[0x8];


	inline bool SetHelmetLv3List(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x488, value); }
	inline bool SetBackpackLv3List(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x498, value); }
	inline bool SetVestLv3List(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetGhillieSuitList(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetSilenceWeaponList(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetCrossbowClassList(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetPanClassList(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslAchievement = sizeof(UTslAchievement); // 1280
    static_assert(sizeof(UTslAchievement) == 0x500, "Size of UTslAchievement is not correct.");
	auto constexpr UTslAchievement_HelmetLv3List_Offset = offsetof(UTslAchievement, HelmetLv3List);
	static_assert(UTslAchievement_HelmetLv3List_Offset == 0x488, "UTslAchievement::HelmetLv3List offset is not 488");
	auto constexpr UTslAchievement_BackpackLv3List_Offset = offsetof(UTslAchievement, BackpackLv3List);
	static_assert(UTslAchievement_BackpackLv3List_Offset == 0x498, "UTslAchievement::BackpackLv3List offset is not 498");
	auto constexpr UTslAchievement_VestLv3List_Offset = offsetof(UTslAchievement, VestLv3List);
	static_assert(UTslAchievement_VestLv3List_Offset == 0x4a8, "UTslAchievement::VestLv3List offset is not 4a8");
	auto constexpr UTslAchievement_GhillieSuitList_Offset = offsetof(UTslAchievement, GhillieSuitList);
	static_assert(UTslAchievement_GhillieSuitList_Offset == 0x4b8, "UTslAchievement::GhillieSuitList offset is not 4b8");
	auto constexpr UTslAchievement_SilenceWeaponList_Offset = offsetof(UTslAchievement, SilenceWeaponList);
	static_assert(UTslAchievement_SilenceWeaponList_Offset == 0x4c8, "UTslAchievement::SilenceWeaponList offset is not 4c8");
	auto constexpr UTslAchievement_CrossbowClassList_Offset = offsetof(UTslAchievement, CrossbowClassList);
	static_assert(UTslAchievement_CrossbowClassList_Offset == 0x4d8, "UTslAchievement::CrossbowClassList offset is not 4d8");
	auto constexpr UTslAchievement_PanClassList_Offset = offsetof(UTslAchievement, PanClassList);
	static_assert(UTslAchievement_PanClassList_Offset == 0x4e8, "UTslAchievement::PanClassList offset is not 4e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
