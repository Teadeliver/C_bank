#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define LINE 5
#define ROW 5

int main()
{
	int n, i, j, temp;
	int num[LINE][ROW] = {0};

	printf("Please input an integer: ");
	scanf("%d", &n);
	temp = n;
	for (i = 0; i < LINE; i++)
	{
		temp = n + i;
		for (j = 0; j < ROW; j++)
		{
			num[i][j] = temp;
			temp++;
		}
	}

	for (i = 0; i < LINE; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			printf("%4d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}