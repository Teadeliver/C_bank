#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int find(int num[], int count,int f_num);

int main(void)
{
	int arrA[5], arrB[8], num, minA, minB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("��������һ������");
	scanf("%d", &num);

	minA = find(arrA, 5, num);  /* userCode(<50�ַ�): ���ú���������arrA�д���num����С�� */
	if (-1 == minA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nMin(arrA) = %d", minA);
	}

	minB = find(arrB, 8, num);  /* userCode(<50�ַ�): ���ú���������arrB�д���num����С�� */
	if (-1 == minB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nMin(arrB) = %d\n", minB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int find(int num[], int count, int f_num)
{
	int i, j, temp;

	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - 1 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < count; i++)
	{
		if (num[i] > f_num)
		{
			return num[i];
		}
	}
	return -1;
}


