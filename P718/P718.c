#include<stdio.h>

int caculate(int n);

int main()
{
	int n,array;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);
	array = caculate(n);
	printf("\nf(%d)=%d\n", n, array);
	return 0;
}
int caculate(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 2;
	}
	return (2 * caculate(n - 1) + (caculate(n - 2) * caculate(n - 3)));
}