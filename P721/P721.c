#include<stdio.h>

int main()
{
	double x, y, z;
	printf("please input x,y,z: ");
	scanf("%lf,%lf,%lf", &x, &y, &z);
	printf("\nResult = %lf", x + (int)z % 3 * (int)(x + y) % 2 / 4.0);
	return 0;
}