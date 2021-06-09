#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
int find(int array[5][9], int* row, int* col);

int main(void)
{
	int array[5][9], i, j, max, maxRow, maxCol;

	printf("Input matrix:\n");
	for (i=0; i<5; i++)
	{
		for (j=0; j<9; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	/* userCode(<80�ַ�): ���ú����������������Ԫ�ؼ�������λ�õ����±ꡢ���±� */
	max = find(array, &maxRow, &maxCol);
	printf("\nThe max is %d, row-sub is %d, col-sub is %d\n", max, maxRow, maxCol);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int find(int array[5][9], int* row, int* col)
{
	int i, j, max;
	max = array[0][0];
	*row = 0;
	*col = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				*row = i;
				*col = j;
			}
		}
	}
	return max;
}