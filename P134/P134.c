#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char ch[10];
	int i = 0;

	printf("\n������10���ַ���");
	for (i = 0; i < 10; i++)
	{
		ch[i] = getchar();
	}
	printf("\n���ܽ��Ϊ��");
	for (i = 0; i < 9; i++)
	{
		printf("%d, ", ch[i]);
	}
	printf("%d", ch[9]);
	return 0;
}