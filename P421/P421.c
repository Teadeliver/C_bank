#include <stdio.h>

#define maxNums 10000
#define endFlag -222

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=3, lineLen<=50, 考生可在本行后添加代码、最多3行、每行长<=50字符) */
int put(int data[maxNums]);
int order(int data[maxNums], int n);
int out(int data[maxNums], int n);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int inputData[maxNums] = {0}, dataCount;  /* inputData用于保存输入的数据，dataCount记录输入数据的个数 */

	/* 本部分代码功能建议：调用相应的函数先后完成数据的输入、排序和输出 */
	/* User Code Begin(Limit: lines<=3, lineLen<=40, 考生可在本行后添加代码、最多3行、行长<=40字符) */
	dataCount = put(inputData);
	order(inputData, dataCount);
	out(inputData, dataCount);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	return 0;
}

/* 本部分代码功能建议：完成数据的输入 */
/* User Code Begin(Limit: lines<=11, lineLen<=60, 考生可在本行后添加代码、最多11行、每行长<=60字符) */
int put(int data[maxNums])
{
	int i, x, n = 0;
	printf("Please input numbers:");
	for (i = 0; i < maxNums; i++)
	{
		scanf("%d", &x);
		if (endFlag == x)
		{
			break;
		}
		data[i] = x;
		n++;
	}
	return n;
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */
}

/* 本部分代码功能建议：对数据进行排序 */
/* User Code Begin(Limit: lines<=12, lineLen<=60, 考生可在本行后添加代码、最多12行、每行长<=60字符) */
int order(int data[maxNums], int n)
{
	int temp, i, j, mini;
	for (i = 0; i < n - 1; i++)
	{
		mini = i;
		for (j = i; j < n; j++)
		{
			if (data[j] < data[mini])
			{
				mini = j;
			}
		}

		if (mini != i)
		{
			temp = data[mini];
			data[mini] = data[i];
			data[i] = temp;
		}
	}
	return 0;
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */
}

/* 本部分代码功能建议：按格式要求输出 */
/* User Code Begin(Limit: lines<=10, lineLen<=60, 考生可在本行后添加代码、最多10行、每行长<=60字符) */
int out(int data[maxNums], int n)
{
	int i;
	printf("\nOutput:\n");
	for (i = 0; i < n; i++)
	{
		printf("%-6d", data[i]);

		if (((i + 1) % 6) != 0 && i != n - 1)
		{
			printf(",");
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */
}
/* Program End(程序到此结束，此后不能添加内容，否则0分) */
