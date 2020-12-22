#include<stdio.h>

int main(void)
{
	int num[100];
	int count = 0, i, j;
	int temp;

	printf("Input: ");
	for (i = 0; i < 100; i++)//数组输入
	{
		scanf("%d", &num[i]);
		if (num[i] != -888)
		{
			count++;
		}
		else
		{
			break;
		}
	}

	for (i = 0; i < count; i++)//数组排序
	{
		for (j = 1; j < count - i; j++)
		{
			if (num[j - 1] > num[j])
			{
				temp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("\nResult: ");
	for (i = 0; i < count; i++)//数组输出
	{
		printf("%d ", num[i]);
	}

	return 0;
}