#include<stdio.h>

int main()
{
	double profit, salary;
	printf("Input  profit: ");
	scanf("%lf", &profit);
	if(profit <= 1000)
	{
		profit = profit * 0;
	}
	else
	{
		if (profit <= 2000)
		{
			profit = profit * 0.1;
		}
		else
		{
			if (profit <= 5000)
			{
				profit = profit * 0.15;
			}
			else
			{
				if (profit <= 10000)
				{
					profit = profit * 0.2;
				}
				else
				{
					profit = profit * 0.25;
				}
			}
		}
	}
	salary = profit + 500;
	printf("\nsalary=%.2lf\n", salary);
}