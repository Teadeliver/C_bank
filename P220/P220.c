#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char str[127];
	int i;
	int A = 0, B = 0, C = 0, D = 0;
	printf("Please input string: ");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			A++;
		}
		else
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				B++;
			}
			else 
			{
				if (str[i] == ' ')
				{
					C++;
				}
				else
				{
					D++;
				}
			}
		}
	}
	printf("\nzimu=%d,shuzi=%d,kongge=%d,qita=%d\n", A, B, C, D);
	return 0;
}