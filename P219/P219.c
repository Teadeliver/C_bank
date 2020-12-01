#include<stdio.h>

int main()
{
	char ch;
	char num[127];
	int n = 0, i;

	while (ch = getchar() != '\n')
	{
		if (ch >= 45 && ch <= 57)
		{
			n++;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", num[i]);
	}
	return 0;
}