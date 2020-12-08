#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x;
	double y;

	printf("Please input x: ");
	scanf("%d", &x);
	if (x < 0)
	{
		y = (-5 * (double)x) + 27;
		printf("\nF(%d) = %.0lf", x, y);
	}
	else
	{
		if (x == 0)
		{
			printf("\nF(%d) = 79097", x);
		}
		else
		{
			y = (2 * (double)x) - 1;
			printf("\nF(%d) = %.0lf", x, y);
		}
	}
	return 0;
}