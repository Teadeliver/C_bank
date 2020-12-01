#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int x, n;
	double rate = 0;
	printf("Please input benjin,cunqi: ");
	scanf("%d,%d", &x, &n);
	switch (n)
	{
	case 1:
		rate = x * 0.0315;
		break;
	case 2:
		rate = x * 0.0363 * 2;
		break;
	case 3:
		rate = x * 0.0402 * 3;
		break;
	case 5:
		rate = x * 0.0469 * 5;
		break;
	case 8:
		rate = x * 0.0536 * 8;
		break;
	}
	printf("\nlixi = %.2lf yuan", rate);
}