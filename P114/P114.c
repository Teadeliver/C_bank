#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int date1 = 0, date2 = 0;
	char op;
	double m = 0;

	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &date1, &op, &date2);
	switch (op)
	{
	case'+':
		m = (double)date1 + (double)date2;
		break;
	case '-':
		m = (double)date1 - (double)date2;
		break;
	case '*':
		m = (double)date1 * (double)date2;
		break;
	case '/':
		if (date2 != 0)
		{
			m = (double)date1 / (double)date2;
		}
		else
		{
			printf("\nError! chu shu wei 0.\n");
		}
		break;
	case '%':
		if (date2 != 0)
		{
			m = date1 % date2;
		}
		else
		{
			printf("\nError! chu shu wei 0.\n");
		}
		break;
	}
	printf("\n%d%c%d=%f", date1, op, date2, m);
}