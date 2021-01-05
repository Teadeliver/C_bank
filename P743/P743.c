#include<stdio.h>

int main(void)
{
	char ch[128];
	int i, count = 0;
	printf("Input a string: ");
	for (i = 0; i < 127; i++)
	{
		ch[i] = getchar();
		if (ch[i] == '\n')
		{
			break;
		}
		else
		{
			count++;
		}
	}
	printf("\nThe result is: ");
	for (; count > 0; count--)
	{
		printf("%c"	, ch[count-1]);
	}

	return 0;
}