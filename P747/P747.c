#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define NUM 15

int main()
{
	int num[NUM][2];
	int i, j, f_num, temp, flag;

	for (i = 0; i < NUM; i++)
	{
		num[i][1] = i;
	}

	printf("please input 15 integer numbers:\n");//输入15个数字
	for (i = 0; i < NUM; i++)
	{
		scanf("%d", &num[i][0]);
	}

	for (i = 0; i < NUM-1; i++)//冒泡排序
	{
		for (j = 0; j < NUM - i - 1; j++)
		{
			if (num[j][0] > num[j + 1][0])
			{
				temp = num[j + 1][0];
				num[j + 1][0] = num[j][0];
				num[j][0] = temp;
				temp = num[j + 1][1];
				num[j + 1][1] = num[j][1];
				num[j][1] = temp;
			}
		}
	}

	printf("please input the integer you want to find: ");//输入待查找的数字
	scanf("%d", &f_num);

	flag = 0;
	for (i = 0; i < NUM; i++)
	{
		if (num[i][0] == f_num)
		{
			printf("\n%d has been found,it is a[%d]\n", f_num, num[i][1]);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("\n%d has not been found\n", f_num);
	}
}
