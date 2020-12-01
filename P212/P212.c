#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int n;
	int i, j;

	printf("Please input n:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)   
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		printf("%c", 'a'+(i-1));
		
		if (i > 1)
		{
			for (j = 1; j <= 2 * i - 3; j++)
			{
				printf(" ");
			}
			printf("%c", 'a' + (i - 1));
		}
		printf("\n");
	}
	
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		printf("%c", 'a' + (i - 1));
		if (i > 1)
		{
			for (j = 1; j <= 2 * i - 3; j++)
			{
				printf(" ");
			}
			printf("%c", 'a' + (i - 1));
		}
		printf("\n");
		
	}

	return 0;
}