#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneFolder // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UMovieSceneFolder t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(322); // id32("Class MovieScene.MovieSceneFolder")
		return ptr;
	}
	FName FolderName; /* Ofs: 0x30 Size: 0x8 - NameProperty MovieScene.MovieSceneFolder.FolderName */
	TArray<ExternalPtr<struct UMovieSceneFolder>> ChildFolders; /* Ofs: 0x38 Size: 0x10 - ArrayProperty MovieScene.MovieSceneFolder.ChildFolders */
	TArray<ExternalPtr<struct UMovieSceneTrack>> ChildMasterTracks; /* Ofs: 0x48 Size: 0x10 - ArrayProperty MovieScene.MovieSceneFolder.ChildMasterTracks */
	TArray<struct FString> ChildObjectBindingStrings; /* Ofs: 0x58 Size: 0x10 - ArrayProperty MovieScene.MovieSceneFolder.ChildObjectBindingStrings */
	uint8_t UnknownData68[0x10];


	inline bool SetFolderName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
	inline bool SetChildFolders(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneFolder>> value) { inst.WriteOffset(0x38, value); }
	inline bool SetChildMasterTracks(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneTrack>> value) { inst.WriteOffset(0x48, value); }
	inline bool SetChildObjectBindingStrings(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneFolder = sizeof(UMovieSceneFolder); // 120
    static_assert(sizeof(UMovieSceneFolder) == 0x78, "Size of UMovieSceneFolder is not correct.");
	auto constexpr UMovieSceneFolder_FolderName_Offset = offsetof(UMovieSceneFolder, FolderName);
	static_assert(UMovieSceneFolder_FolderName_Offset == 0x30, "UMovieSceneFolder::FolderName offset is not 30");
	auto constexpr UMovieSceneFolder_ChildFolders_Offset = offsetof(UMovieSceneFolder, ChildFolders);
	static_assert(UMovieSceneFolder_ChildFolders_Offset == 0x38, "UMovieSceneFolder::ChildFolders offset is not 38");
	auto constexpr UMovieSceneFolder_ChildMasterTracks_Offset = offsetof(UMovieSceneFolder, ChildMasterTracks);
	static_assert(UMovieSceneFolder_ChildMasterTracks_Offset == 0x48, "UMovieSceneFolder::ChildMasterTracks offset is not 48");
	auto constexpr UMovieSceneFolder_ChildObjectBindingStrings_Offset = offsetof(UMovieSceneFolder, ChildObjectBindingStrings);
	static_assert(UMovieSceneFolder_ChildObjectBindingStrings_Offset == 0x58, "UMovieSceneFolder::ChildObjectBindingStrings offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
