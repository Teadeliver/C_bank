#include<stdio.h>
#include<math.h>

int judge(double, double, double);
int main()
{
	double a, b, c, area, p;
	printf("please input triange sides: ");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	if (judge(a, b, c))
	{
		p = ((a + b + c) / 2.0);
		area = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("\narea=%.2lf\n", area);
	}
	else
	{
		printf("\ndata error\n");
	}
	return 0;
}

int judge(double a, double b, double c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}