#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int put(int* num, int n);

int main(void)
{
	int arrA[5], arrB[8];

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	printf("\narrA = ");
	put(arrA, 5);/* userCode(<30�ַ�): ���ú������arrA������Ԫ�� */
	printf("\narrB = ");
	put(arrB, 8);  /* userCode(<30�ַ�): ���ú������arrB������Ԫ�� */
	
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int put(int* num, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}