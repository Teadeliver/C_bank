#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num[11] = { 0 };
	int i;

	printf("\n请输入11个数字：");
	for (i = 0; i < 11; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("\n解密结果为：");
	for (i = 0; i < 11; i++)
	{
		printf("%c", num[i]);
	}
	return 0;
}