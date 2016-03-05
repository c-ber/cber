// nx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"

typedef   void   (*MYPROC)(wchar_t * arg_01,
                           char    * arg_02,
                           long      arg_03,
                           wchar_t * arg_04,
                           long    * arg_05,
                           long      arg_06 );

int   main(int argc, char* argv[])
{ 
	printf("Hello World!\n");


	wchar_t arg_01[] = L"abc";
	char    arg_02[50] = {0};
	long    arg_03     = 50;
	wchar_t arg_04[] = L"ef";
	long    arg_05     = 4097;
	long    arg_06     = 0;
    FARPROC p = NULL;

	HINSTANCE   LibHandle; 
	MYPROC      ProcAdd; 
	char   dllbuf[40]   =   "netapi32.dll"; 
	char   Trigger[40]   =   "NetpwPathCanonicalize"; 

	LibHandle   =   LoadLibrary(dllbuf); 

	p = GetProcAddress(LibHandle,   "NetpwPathCanonicalize"); 
	ProcAdd   =   (MYPROC)   GetProcAddress(LibHandle,   Trigger); 

	(ProcAdd)(arg_01, arg_02, arg_03, arg_04, &arg_05,0); 
	FreeLibrary(LibHandle); 

	return 0;
}

