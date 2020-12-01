#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char cBegin, cEnd;
	int min, max;

	printf("Please Input two char: ");
	scanf("%c%c", &cBegin, &cEnd);
	max = cBegin;
	min = cEnd;
	printf("\nResult: ");
	for (; min <= max; max--)
	{
		printf("%c", max);
	}
	return 0;
}