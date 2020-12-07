#include<stdio.h>

int feb(int);

int main()
{
	int n, i;

	printf("input a data(3--20): ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", feb(i));
		if (i != n)
		{
			printf("\t");
		}
	}
	return 0;
}

int feb(int n)
{
	if (n == 1||n ==2)
	{
		return 1;
	}
	return feb(n - 1) + feb(n - 2);
}