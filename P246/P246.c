#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
caculate(int num[], int count);

int main(void)
{
	int arrA[5], arrB[8], minA, minB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	minA = caculate(arrA, 5);  /* userCode(<30�ַ�): ���ú�������arrA��Ԫ�ص���Сֵ */
	printf("\nMin(arrA) = %d", minA);
	minB = caculate(arrB, 8);  /* userCode(<30�ַ�): ���ú�������arrB��Ԫ�ص���Сֵ */
	printf("\nMin(arrB) = %d\n", minB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int caculate(int num[], int count)
{
	int min, i;
	min = num[0];
	for (i = 1; i < count; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
		}
	}
	return min;
}


