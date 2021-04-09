#include <stdio.h>

#define MAX 20

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
void magic(int arrayA[MAX][MAX], int arrayB[MAX][MAX], int m);

int main(void)
{
	int arrayA[MAX][MAX], arrayB[MAX][MAX], i, j, m;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("Please input arrayA:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arrayA[i][j]);
		}
	}

	magic(arrayA, arrayB, m);/* userCode(<60�ַ�): ���ú���ʵ���������ݱ任 */
		printf("\nafter rotate:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%6d", arrayB[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void magic(int arrayA[MAX][MAX], int arrayB[MAX][MAX], int m)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			arrayB[i][j] = arrayA[i][j];
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == 0)
			{
				arrayB[j][m - 1] = arrayA[i][j];
			}
			if (i == m - 1)
			{
				arrayB[j][0] = arrayA[i][j];
			}
		}
	}
}



