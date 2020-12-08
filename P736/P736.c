#include<stdio.h>

int Add(int,int);

int main(void)
{
	int num, sum = 0;
	printf("Input a number with 4-digit: ");
	scanf("%d", &num);
	sum = Add(num, sum);
	printf("\nsum=%d\n", sum);
	return 0;
}

int Add(int num,int sum)
{
	if (num > 9)
	{
	sum = Add(num / 10, sum);
	}
	sum += (num % 10);
	return sum;
}
