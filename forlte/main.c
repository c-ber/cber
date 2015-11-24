#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>
#include    <string.h>
#include    <sys/types.h>
#include    <sys/stat.h>
#include    <stdarg.h>
#include    <signal.h>
#include    <sys/wait.h>
#include    <pthread.h>
#include    <fcntl.h>
#include    <errno.h>
#include    <dirent.h>
#include    <ctype.h>

#include <unistd.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <time.h>
#include <netinet/in.h>
#include <sys/wait.h>
#include <signal.h>
#include <assert.h>


#include "cb_pcap.h"


int main(int argc,char * argv[])
{
	printf("test start\n");
	char input_file[256] = {0};

	printf("input param : argc = %d \n", argc);
	if( argc == 2)
	{
	    sprintf(input_file, argv[1]);
	}
	else
	{
	    sprintf(input_file, FILE_PATH);
	}

	pcap_search(input_file);
    return 0;
} 



