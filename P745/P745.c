#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int m, n, i, min, zdgys, zxgbs;

	printf("please input two integer numbers:");
	scanf("%d%d", &m, &n); 

	if (m > n)
	{
		min = n;
	}
	else
	{
		min = m;
	}

	for (i = min; i >= 1; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			zdgys = i;
			break;
		}
	}

	zxgbs = m * n / zdgys;

	printf("the greatest common  divisor is %d\n", zdgys);
	printf("the least common  multiple is %d\n", zxgbs);

	return 0;
}
int a[10] = { 1,2,3,4,5 };
int b[2];
