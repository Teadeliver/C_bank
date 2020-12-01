#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	double x;
	double y;
	printf("«Î ‰»Îª°∂» x: ");
	scanf("%lf", &x);
	y = cos(x);
	printf("\nCos(%.2lf) = %.5lf\n", x, y);
	return 0;
}