#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num1, num2, num3;
	double num4, m;

	printf("请输入4个数：");
	scanf("%d %d %d %lf", &num1, &num2, &num3, &num4);
	m = (num1 + ((num2 % num3) * num4));
	printf("\n计算结果为：%013.5lf", m);
	return 0;
}