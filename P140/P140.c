#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch[5];
	int temp[5];
	int max;
	int i;

	printf("请输入5个字符: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%c", &ch[i]);
	}

	for (i = 0; i < 5; i++)
	{
		temp[i] = ch[i];
	}
	max = temp[0];
	for (i = 1; i < 5; i++)
	{
		if (max < temp[i])
		{
			max = temp[i];
		}
	}
	printf("\n最大的字符是 %c-%d\n", max, max);
	return 0;
}