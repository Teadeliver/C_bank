#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(void)
{
	char ch[101];
	int i, count = 0;
	printf("Please input a string: ");
	for (i = 0; i < 101; i++)
	{
		scanf("%c", &ch[i]);
		if (ch[i] == '\n')
		{
			break;
		}
		else
		{
			count++;
		}
	}

	for (i = 0; i < count; i++)
	{
		if (ch[i] != '*')
		{
			printf("%c", ch[i]);
		}
	}
	return 0;
}