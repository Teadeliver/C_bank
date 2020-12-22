#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define NUM 15

int main()
{
	int num[NUM];
	int i, j, f_num, temp, flag;
	int left = 0, right = NUM - 1;
	int count = 0;
	int arrary[NUM];

	for (i = 0; i < NUM; i++)
	{
		arrary[i] = i;
	}

	printf("please input 15 integer numbers:\n");//输入15个数字
	for (i = 0; i < NUM; i++)
	{
		scanf("%d", &num[i]);
	}

	printf("please input the integer you want to find: ");//输入待查找的数字
	scanf("%d", &f_num);

	for (i = 0; i < NUM; i++)//从小到大排序
	{
		flag = 0;
		for (j = 1; j < NUM - i; j++)
		{
			if (num[j - 1] > num[j])
			{
				temp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = temp;
				flag = 1;

				temp = arrary[j - 1];
				arrary[j - 1] = arrary[j];
				arrary[j] = temp;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	
	count = NUM / 2;
	flag = 0;
	while (left <= right)
	{
		if (f_num < num[count])
		{
			right = count;
			count = (left + right) / 2;
		}
		else
		{
			if (f_num < num[count])
			{
				left = count;
				count = (left + right) / 2;
			}
			else
			{
				printf("\n%d has been found,it is a[%d]\n", f_num, arrary[2 * count]);
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
	{
		printf("\n%d has not been found\n", f_num);
	}
	return 0;
}