#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char cBegin;
	int iCount;
	int i = 0;
	printf("Please Input a char and a number: ");
	scanf("%c %d", &cBegin, &iCount);
	printf("\nResult: ");
	for (; i < iCount; i++)
	{
		printf("%c", cBegin - i);
	}
	printf("\n");
	return 1;
}