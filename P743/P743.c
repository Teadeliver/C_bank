#include<stdio.h>

int main(void)
{
	char ch[127];
	int i, count = 0;

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
	for (; count >= 0; count--)
	{
		printf("%c", ch[count]);
	}

	return 0;
}