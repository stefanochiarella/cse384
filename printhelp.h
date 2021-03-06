#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printhelp(const char* name)
{
	printf("Usage: %s [ARG][OPTION] \n", name);
	printf("[ARG] [PATH TO FILE BEING COPIED]\n");
	printf("-d, --customize the backup location,    d takes the path to the backup folder\n");
	printf("-m, --disables meta-data duplication,    m takes the name of the file you are copying\n");
	printf("-t, --append the duplication time to the file name,    t takes no arguments\n");
}
	
