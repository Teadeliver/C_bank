#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int find_f(int num[], int x, int n);

int main(void)
{
	int arrA[5], arrB[8], num, countA, countB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("��������һ������");
	scanf("%d", &num);

	countA = find_f(arrA, num, 5);  /* userCode(<50�ַ�): ���ú�������arrA�д���num��Ԫ�ظ��� */
	printf("\nCount(arrA) = %d", countA);
	countB = find_f(arrB, num, 8);  /* userCode(<50�ַ�): ���ú�������arrB�д���num��Ԫ�ظ��� */
	printf("\nCount(arrB) = %d\n", countB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int find_f(int num[], int x, int n)
{
	int count = 0, i;
	for (i = 0; i < n; i++) 
	{
		if (num[i] > x)
		{
			count++;
		}
	}
	return count;
}