#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int i;
	double num[5];
	double min;

	printf("������5��ʵ��: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%lf,", &num[i]);
	}
	min = num[0];
	for (i = 0; i < 5; i++)
	{
		if (num[i] <= min)
		{
			min = num[i];
		}
	}
	printf("\n��С������%.2lf\n", min);
	return 0;
}