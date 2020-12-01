#include<stdio.h>

int main()
{
	double c, f;
	printf("Input the degree: ");
	scanf("%lf", &f);
	c = 5 * (f - 32) / 9.0;
	printf("\nF(%.2lf)=C(%.2lf)", f, c);
	return 0;
}