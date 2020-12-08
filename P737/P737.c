#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, b, c;
	int max;

	printf("Input 3 numbers: ");
	scanf("%d,%d,%d", &a, &b, &c);
	max = abs(a);
	if (abs(b) > max)
	{
		if (abs(b) > abs(c))
		{
			max = abs(b);
		}
		else
		{
			max = abs(c);
		}
	}
	else
	{
		if (abs(c) > max)
		{
			max = abs(c);
		}
	}
	if (max = abs(a))
	{
		printf("\nThe number with maximum absolute value is %d.\n", a);
	}
	if (max = abs(b))
	{
		printf("\nThe number with maximum absolute value is %d.\n", b);
	}	
	if (max = abs(c))
	{
		printf("\nThe number with maximum absolute value is %d.\n", c);
	}
	return 0;
}