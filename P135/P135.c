#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	double x;
	double y;
	printf("�����뻡�� x: ");
	scanf("%lf", &x);
	y = sin(x);
	printf("\nSin(%.2lf) = %.5lf\n", x, y);
	return 0;
}