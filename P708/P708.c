#include<stdio.h>

int print(int n);

int main()
{
	int n;
	printf("Input an integer: ");
	scanf("%d", &n);
	printf("\nThe result is ");
	print(n);
	return 0;
}

int print(int n)
{
	printf("%d", n % 10);
	if (n > 9)
	{
		print(n / 10);
	}
	return 0;
}