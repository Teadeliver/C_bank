#include<stdio.h>

int main()
{
	char str[127];
	int count = 0, i;

	printf("Please input string: ");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			count++;
		}
	}
	printf("\nshu zi ge shu wei: %d", count);
	printf("\nshu zi wei: ");
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			printf("%c", str[i]);

		}
	}
	return 0;
}