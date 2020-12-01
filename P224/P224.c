#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n;
	int now = 1;
	printf("Please input n: ");
	scanf("%d", &n);
	for (; n > 1; n--)
	{
		now = (now + 1) * 2;
	}
	printf("\ntotal=%d", now);
	return 0;
}