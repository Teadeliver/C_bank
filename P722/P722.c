#include<stdio.h>

int main()
{
	int a, b, c;
	printf("\nplease input a date: ");
	scanf("%d-%d-%d", &a, &b, &c);
	printf("\nthe date is: %d/%d/%d", a, b, c);
	return 0;
}