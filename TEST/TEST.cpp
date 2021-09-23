#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void add1(int* b)//传入的相当于地址，可以直接改变main函数的a值
{
	*b = *b + 1;
}

void add2(int& b)//传入的相当于地址，可以直接改变main函数的a值
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
	printf("运行add1后，a = %d\n", a);
	add2(a);
	printf("运行add2后，a = %d\n", a);
	add3(a);
	printf("运行add3后，a = %d\n", a);
}