#include <stdio.h>

#define MAX 20

/* userCode(<100�ַ�): �Զ��庯��֮ԭ������ */
______________________________

int main(void)
{
	int arrA[MAX][MAX], arrB[MAX][MAX], i, j, m, n;

	printf("������ m n: ");
	scanf("%d %d", &m, &n);

	printf("������ %d �� %d �о���:\n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arrA[i][j]);
		}
	}

	rotate(arrA, arrB, m, n);  /* ���ú�������ת�� */

	printf("\nת�ú�ľ���Ϊ:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%5d ", arrB[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */