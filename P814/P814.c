#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int Add(int num[3][3]);

int main(void)
{
	int num[3][3], i, j, sum;

	printf("Please input the 3x3 Matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}

	sum = Add(num);  /* userCode(<50�ַ�): ���ú��������������Ԫ��֮�� */
	printf("\nsum=%d\n", sum);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int Add(int num[3][3])
{
	int i, j;
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += num[i][j];
		}
	}
	return sum;
}

