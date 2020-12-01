#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int max, i, temp;

	printf("请输入4个整数: ");
	scanf("%d,", &temp);
	max = temp;
	for (i = 0; i < 3; i++)
	{
		scanf("%d,", &temp);
		if (max < temp)
		{
			max = temp;
		}
	}
	printf("\n最大的数是 %d\n", max);
	return 0;
}