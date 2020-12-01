#include<stdio.h>

int main()
{
	int m;
	int days;
	printf("please input the month number: ");
	scanf("%d", &m);
	switch (m)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		days = 31;
		break;
	case 4:case 6:case 9:case 11:
		days = 30;
		break;
	case 2:
		days = 28;
		break;
	default:
		printf("\nInvalid month input !\n");
		break;
	}
	if (m >= 1 && m <= 12)
	{
		printf("\n2003.%d has %d days\n", m, days);
	}
	return 0;
}