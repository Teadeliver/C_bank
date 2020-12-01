#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int length, C;
	double p, S;

	printf("Input a side of triangle: ");
	scanf("%d", &length);

	p = (((double)length + (double)length + (double)length) / 2.0);
	S = sqrt(p * (p - length) * (p - length) * (p - length));
	C = length + length + length;

	printf("\nThe area of triangle is %.2f, the circle of triangle is %d.\n", S, C);

	return 0;
}