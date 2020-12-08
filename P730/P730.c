#include<stdio.h>

int main()
{
	int x, y;
	printf("please input x y: ");
	scanf("%d%d", &x, &y);
	if (x == y)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}