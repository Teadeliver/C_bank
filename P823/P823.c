#include <stdio.h>

#define MAX 20

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
______________________________

int main(void)
{
	int arrayA[MAX][MAX], arrayB[MAX][MAX], i, j, m;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("Please input arrayA:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%d", &arrayA[i][j]);
		}
	}

	______________________________  /* userCode(<60�ַ�): ���ú���ʵ���������ݱ任 */
	printf("\nafter rotate:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("%6d", arrayB[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */



