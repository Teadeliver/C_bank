#include<stdio.h>

int main()
{
	int num[10] = { 0 };
	int i, count = 0;

	printf("Input 10 integers: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] % 2 != 0 && i % 2 != 0)
		{
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	for (i = 1; i < 10; i += 2)
	{
		if (num[i] % 2 != 0)
		{
			printf("a[%d]=%d\n", i, num[i]);
		}
	}
	return 0;
}