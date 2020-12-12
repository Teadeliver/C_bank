#include<stdio.h>

int main(void)
{
	double num_1, num_2;
	printf("Input 2 numbers: ");
	scanf("%lf%lf", &num_1, &num_2);
	if (num_2 == 0)
	{
		printf("\nDivid by zero");
	}
	else
	{
		printf("\nThe result is: %.2lf", num_1 / num_2);
	}
	return 0;
}