#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num1, num2, num3;
	double num4, m;

	printf("������4������");
	scanf("%d %d %d %lf", &num1, &num2, &num3, &num4);
	m = (num1 + ((num2 % num3) * num4));
	printf("\n������Ϊ��%013.5lf", m);
	return 0;
}