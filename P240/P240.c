#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int find(int* in, int in1);

int main(void)
{
	int arrayA[6], arrayB[10], arrayC[15], sumA, sumB, sumC;

	sumA = find(arrayA, 6);  /* userCode(<50�ַ�): ���ú����� 6������arrayA�У�������� */
	sumB = find(arrayB, 10);  /* userCode(<50�ַ�): ���ú�����10������arrayB�У�������� */
	sumC = find(arrayC, 15);  /* userCode(<50�ַ�): ���ú�����15������arrayC�У�������� */

	printf("\narrayA[0]=%3d, arrayA[ 5]=%3d, sum(arrayA)=%d", arrayA[0], arrayA[5], sumA);
	printf("\narrayB[0]=%3d, arrayB[ 9]=%3d, sum(arrayB)=%d", arrayB[0], arrayB[9], sumB);
	printf("\narrayC[0]=%3d, arrayC[14]=%3d, sum(arrayC)=%d\n", arrayC[0], arrayC[14], sumC);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int find(int* in, int in1)
{
	int in2, sum = 0;

	printf("������%d����: ", in1);
	for (in2 = 0; in2 < in1; in2++)
	{
		scanf("%d", &in[in2]);
		sum += in[in2];
	}
	return sum;
}