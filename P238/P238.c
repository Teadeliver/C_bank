#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num[5];
	int i;

	printf("������5����: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}

	printf("\n��5��������Ϊ: ");
	for (i = 4; i >=0; i--)
	{
		printf("%d ", num[i]);
	}
	return 0;
}