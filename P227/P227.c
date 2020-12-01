#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int iBegin, iEnd;
	printf("Please Input two number: ");
	scanf("%d%d", &iBegin, &iEnd);
	printf("\nResult: ");
	for (; iEnd <= iBegin; iBegin--)
	{
		printf(" %d", iBegin);
	}
	return 0;
}