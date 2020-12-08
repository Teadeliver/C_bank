#include<stdio.h>

int main()
{
	int x, y;
	printf("please input x, y: ");
	scanf("%d,%d", &x, &y);
	if (x > y)
	{
		printf("\n%d is bigger\n", x);
	}
	else
	{
		printf("\n%d is bigger\n", y);
	}
	return 0;
}