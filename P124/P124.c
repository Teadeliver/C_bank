#include<stdio.h>

int main()
{
	char cBegin, cEnd;
	int min, max;

	printf("Please Input two char: ");
	scanf("%c%c", &cBegin, &cEnd);
	max = cEnd;
	min = cBegin;
	printf("\nResult: ");
	for (; min <= max; min++)
	{
		printf("%c", min);
	}
	return 0;
}