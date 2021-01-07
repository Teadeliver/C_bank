#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int m, n;
	int i;
	int temp;
	int ge, shi, bai;
	printf("Input m, n: ");
	scanf("%d,%d", &m, &n);
	if (m > n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	printf("\nResult: ");
	for (i = m; i <= n; i++)
	{
		/* 判断i能否被3整除 */
		if (i % 3 == 0)
		{
			ge = i % 10; //该表达式计算出i的个位数字，并将该数字赋给变量ge
			shi = i / 10 % 10; //该表达式计算出i的十位数字，并将该数字赋给变量shi
			bai = i / 100; //该表达式计算出i的百位数字，并将该数字赋给变量bai

			/* 判断变量ge、shi或bai的值是否为5 */
			if ((ge == 5) || (shi == 5) || (bai == 5))
			{
				printf("%d ", i); //输出满足题意的i值
			}
		}
	}
}