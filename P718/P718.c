#include<stdio.h>

double caculate(double n);

int main()
{
	double n,array;

	printf("Input n (13>=n>=2): ");
	scanf("%lf", &n);
	array = caculate(n);
	printf("\nf(%.0lf)=%.0lf\n", n, array);
	return 0;
}
double caculate(double n)
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