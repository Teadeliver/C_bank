#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double high = 10000;
	int n, i;
	double sum = 0;
	printf("Please input n: ");
	scanf("%d", &n);
	for (i = 1;; i++)
	{
		if (i == 1)
		{
			high = 5000;
			sum = 10000;
		}
		else
		{
			sum += 2*high;
			high = high / 2;
		}
		if (n == i)
		{
			printf("\nsn=%lf,hn=%lf", sum, high);
			break;
		}
	}
	return 0;
}