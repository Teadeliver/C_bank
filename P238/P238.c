#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num[5];
	int i;

	printf("请输入5个数: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}

	printf("\n这5个数倒序为: ");
	for (i = 4; i >=0; i--)
	{
		printf("%d ", num[i]);
	}
	return 0;
}