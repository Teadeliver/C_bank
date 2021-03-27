#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
void FindMax(int array[5][9], int* max, int* maxRow, int* maxCol);

int main(void)
{
	int array[5][9], i, j, max, maxRow, maxCol;

	printf("Input matrix:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 9; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	/* userCode(<80�ַ�): ���ú����������������Ԫ�ؼ�������λ�õ����±ꡢ���±� */
	FindMax(array, &max, &maxRow, &maxCol);
		printf("\nThe max is %d, row-sub is %d, col-sub is %d\n", max, maxRow, maxCol);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void FindMax(int array[5][9],int* max,int* maxRow,int * maxCol)
{
	int i, j;
	int temp = array[0][0];
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (array[i][j] > temp)
			{
				temp = array[i][j];
				*max = temp;
				*maxRow = i;
				*maxCol = j;
			}
		}
	}
}