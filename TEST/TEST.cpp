#include<stdio.h>
#include <string.h>

int GET(int argc, char* argv[])
 {
	char* p;
	*p = argv;
	while (*p != '\0')
	{
		if (*p == ' ') count++;
		p++;
	}