#include<stdio.h>

int main(void)
{
	float num[100];
	int count = 0, i, j;
	float temp;

	printf("Input: ");
	for (i = 0; i < 100; i++)//数组输入
	{
		scanf("%f", &num[i]);
		if (num[i] != -567)
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
			if (num[j - 1] < num[j])
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
		printf("%.1f ", num[i]);
	}

	return 0;
}