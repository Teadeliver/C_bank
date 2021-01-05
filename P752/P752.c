#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int m, n;
	printf("Input m, n: ");
	scanf("%d,%d", &m, &n);
	printf("\nResult: ");
	for (; m <= n; m++)
	{
		if (m % 3 == 0 && m % 5 == 0)
		{
			printf("%d ", m);
		}
	}
}