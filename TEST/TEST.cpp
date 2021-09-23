#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void add1(int &a)//传入的相当于地址，可以直接改变main函数的a值
{
	a = a + 1;
}

int add2(int a)//a是形参，尽管a=a+1，但是main函数的a值不会改变
{
	a = a + 1;
	return a;
}

int main()
{
	int a = 2;
	add1(a);
	printf("运行add1后，a = %d\n", a);
	add2(a);
	printf("运行add2后，a = %d\n", a);
	a = add2(a);
	printf("运行add2后，将返回值赋值给a后，a = %d\n", a);
}