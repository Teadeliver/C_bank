#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define M 20
int main()
{
	int m, i, j;
	int in[M][M];
	int sum = 0;

	printf("Please input m:");
	scanf("%d", &m);
	printf("\nPlease input array:\n");
	for (i = 0; i < m; i++)//循环输入二维数组
		for (j = 0; j < m; j++)
		{
			scanf("%d", &in[i][j]);
		}

	for (i = 0; i < m; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < m; j++)
			{
				sum += in[i][j];
			}
		}
		if (i == m-1)
		{
			for (j = 0; j < m; j++)
			{
				sum += in[i][j];
			}
		}
	}
	printf("\nSum = %d\n", sum);
	return 0;
}
