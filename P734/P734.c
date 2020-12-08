#include<stdio.h>

int main(void)
{
	int n, v, s;
	printf("Input a side of cube: ");
	scanf("%d", &n);
	v = n * n * n;
	s = n * n * 6;
	printf("\nThe volume of cube is %d, the surface area of cube is %d.\n", v, s);
	return 0;
}