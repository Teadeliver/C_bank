#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void add1(int* b)//������൱�ڵ�ַ������ֱ�Ӹı�main������aֵ
{
	*b = *b + 1;
}

void add2(int& b)//������൱�ڵ�ַ������ֱ�Ӹı�main������aֵ
{
	b = b + 1;
}

void add3(int b)
{
	b = b + 1;
}

int main()
{
	int a = 2;
	add1(&a);
	printf("����add1��a = %d\n", a);
	add2(a);
	printf("����add2��a = %d\n", a);
	add3(a);
	printf("����add3��a = %d\n", a);
}