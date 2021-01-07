#include<stdio.h>
void main()
{
	int m, a[20][20];
	int i, j;
	int sum = 0;

	printf("Please input m: ");
	scanf("%d", &m);
	printf("\nPlease input array:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((i == 0) || (i == 2) || (i == (m - 1)))
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("\nSum = %d\n", sum);
}
