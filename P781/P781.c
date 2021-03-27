#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

#define MAX_LINE 5
#define MAX_LINE_LEN 81

void sortP_Str(char* pstr[MAX_LINE]);
void* my_str_cpy(char strdest[MAX_LINE_LEN], char strsrc[MAX_LINE_LEN]);
int my_str_cmp(const char* dest, const char* src);


int main(void)
{
	int i;
	char* pstr[MAX_LINE];
	char* str[MAX_LINE][MAX_LINE_LEN];

	for (i = 0; i < MAX_LINE; i++)
	{
		pstr[i] = str+i;
	}

	printf("Input 5 strings:\n");
	for (i = 0; i < MAX_LINE; i++)
	{
		gets(pstr[i]);
	}

	sortP_Str(pstr);
	printf("---------------------------\n");
	for (i = 0; i < MAX_LINE; i++)
	{
		printf("%s\n", pstr[i]);
	}
	return 0;
}

void sortP_Str(char* pstr[MAX_LINE])
{
	char temp[MAX_LINE_LEN];
	int i, j;
	for (i = 0; i < MAX_LINE - 1; i++)
	{
		for (j = 0; j < MAX_LINE - 1 - i; j++)
		{
			if (my_str_cmp(pstr[j], pstr[j + 1]) > 0)
			{
				my_str_cpy(temp, pstr[j]);
				my_str_cpy(pstr[j], pstr[j + 1]);
				my_str_cpy(pstr[j + 1], temp);
			}
		}
	}
}

char* my_str_cpy(char* strdest, char* strsrc)
{
	assert(strdest && strsrc);
	char* ret = strdest;
	while (*strdest++ = *strsrc++)//拷贝字符车，包括"\0"
	{
		;
	}
	return ret;//返回目标空间的起始地址
}
int my_str_cmp(const char* dest, const char* src)
{
	while ((*dest != '\0') && (*src != '\0'))
	{
		if (*dest < *src)
		{
			return -1;
		}
		else if (*dest > *src)
		{
			return 1;
		}
		else
		{
			++dest;
			++src;
		}
	}
	if (*dest < *src)
	{
		return -1;
	}
	else if (*dest > *src)
	{
		return 1;
	}
	return 0;
}