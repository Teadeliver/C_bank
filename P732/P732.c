#include<stdio.h>

int main()
{
	int num[9] = { 0 };
	int i, sum = 0;

	printf("Please input the 3x3 Matrix:\n");
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < 9; i++)
	{
		sum += num[i];
	}
	printf("\nsum=%d\n", sum);
	return 0;
}