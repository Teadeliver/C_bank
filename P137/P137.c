#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char ch1[10];
	char ch2[10];
	printf("请输入姓名1: ");
	gets(ch1);
	printf("请输入姓名2: ");
	gets(ch2);
	if (ch1[0] == ch2[0] && ch1[1] == ch2[1])
	{
		printf("\n“%s”与“%s”同姓。\n", ch1, ch2);
	}
	else
	{
		printf("\n“%s”与“%s”不同姓。\n", ch1, ch2);
	}
	return 0;
}