#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int y, i;
	double x, z = 1;

	printf("Input x, y: ");
	scanf("%lf,%d", &x, &y);
	if (y == 0)
	{
		z = 1;
	}
	else
	{
		if (y > 0)
		{
			for (i = 0; i < y; i++)
			{
				z *= x;
			}
		}
		else
		{
			x = x / 1;
			y = -y;
		}
	}
	printf("\nResult: %.6lf^%d=%.6lf", x, y, z);
}