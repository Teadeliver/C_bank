#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void add1(int &a)//������൱�ڵ�ַ������ֱ�Ӹı�main������aֵ
{
	a = a + 1;
}

int add2(int a)//a���βΣ�����a=a+1������main������aֵ����ı�
{
	a = a + 1;
	return a;
}

int main()
{
	int a = 2;
	add1(a);
	printf("����add1��a = %d\n", a);
	add2(a);
	printf("����add2��a = %d\n", a);
	a = add2(a);
	printf("����add2�󣬽�����ֵ��ֵ��a��a = %d\n", a);
}