#include<stdio.h>

int main()
{
	int num[10];
	int i, j;
	int temp;
	printf("Please input 10 number:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (num[j] < num[j - 1])
			{
				temp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%5d", num[i]);
	}
	return 0;
}