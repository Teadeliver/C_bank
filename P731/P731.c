#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (; n > 0; n--)
	{
		printf("* * * * *");
		if (n != 1)
		{
			printf("\n");
		}
	}
	return 0;
}