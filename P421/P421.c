#include <stdio.h>

#define maxNums 10000
#define endFlag -222

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=3, lineLen<=50, �������ڱ��к���Ӵ��롢���3�С�ÿ�г�<=50�ַ�) */
int put(int data[maxNums]);
int order(int data[maxNums], int n);
int out(int data[maxNums], int n);
/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int inputData[maxNums] = {0}, dataCount;  /* inputData���ڱ�����������ݣ�dataCount��¼�������ݵĸ��� */

	/* �����ִ��빦�ܽ��飺������Ӧ�ĺ����Ⱥ�������ݵ����롢�������� */
	/* User Code Begin(Limit: lines<=3, lineLen<=40, �������ڱ��к���Ӵ��롢���3�С��г�<=40�ַ�) */
	dataCount = put(inputData);
	order(inputData, dataCount);
	out(inputData, dataCount);
	/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	return 0;
}

/* �����ִ��빦�ܽ��飺������ݵ����� */
/* User Code Begin(Limit: lines<=11, lineLen<=60, �������ڱ��к���Ӵ��롢���11�С�ÿ�г�<=60�ַ�) */
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
/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */
}

/* �����ִ��빦�ܽ��飺�����ݽ������� */
/* User Code Begin(Limit: lines<=12, lineLen<=60, �������ڱ��к���Ӵ��롢���12�С�ÿ�г�<=60�ַ�) */
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
/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */
}

/* �����ִ��빦�ܽ��飺����ʽҪ����� */
/* User Code Begin(Limit: lines<=10, lineLen<=60, �������ڱ��к���Ӵ��롢���10�С�ÿ�г�<=60�ַ�) */
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
/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */
}
/* Program End(���򵽴˽������˺���������ݣ�����0��) */
