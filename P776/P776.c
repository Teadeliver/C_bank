#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n, i, j;
	int num[200][3];
	scanf("%d", &n);
	for (i = 0; i < n; i++)//±àÑ§ºÅ
	{
		num[i][1] = i + 1;
		num[i][2] = 1;
	}

}