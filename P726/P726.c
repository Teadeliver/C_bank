#include<stdio.h>

int main()
{
	char string[100] = {' '};
	int i = 0, j;
	printf("input a string: ");
	while((string[i] = getchar()) != '\n')
	{
		if (i == 99)
		{
			break;
		}
		i++;
	}
	printf("\nThe string lenth is: %d", i+1);
	printf("\nThe string is: ");
	for (j = 0; j <= i; j++)
	{
		printf("%c", string[j]);
	}
	return 0;
}