#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num1, num2, num4;
	double num3, m;

	printf("������4������");
	scanf("%d %d %lf %d", &num1, &num2, &num3, &num4);
	m = (num1 % num2) * num3 + num4;
	printf("\n������Ϊ��%016.7f", m);
	return 0;
}