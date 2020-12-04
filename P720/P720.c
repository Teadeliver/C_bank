#include<stdio.h>

int main()
{
	double a, b;

	printf("please input two numbers: ");
	scanf("%lf,%lf", &a, &b);
	printf("\na=%.6lf, b=%.6lf", a, b);

	return 0;
}