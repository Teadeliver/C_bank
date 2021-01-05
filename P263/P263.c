#include <stdio.h>

/* userCode(<60�ַ�): �Զ��庯��֮ԭ������ */
int put(int num[], int count, int* sum);

int main(void)
{
	int arr1[6], arr2[10], arr3[15], gt60A, gt60B, gt60C, sumA, sumB, sumC;

	gt60A = put(arr1, 6, &sumA);  /* userCode(<60�ַ�): ���ú����� 6������arr1�У�������ͼ�>60�ĸ��� */
	gt60B = put(arr2, 10, &sumB);  /* userCode(<60�ַ�): ���ú�����10������arr2�У�������ͼ�>60�ĸ��� */
	gt60C = put(arr3, 15, &sumC);  /* userCode(<60�ַ�): ���ú�����15������arr3�У�������ͼ�>60�ĸ��� */

	printf("\narr1[0]=%3d, arr1[ 5]=%3d, sum(arr1)=%d, cnt(arr1)=%d", arr1[0], arr1[5], sumA, gt60A);
	printf("\narr2[0]=%3d, arr2[ 9]=%3d, sum(arr2)=%d, cnt(arr2)=%d", arr2[0], arr2[9], sumB, gt60B);
	printf("\narr3[0]=%3d, arr3[14]=%3d, sum(arr3)=%d, cnt(arr3)=%d\n", arr3[0], arr3[14], sumC, gt60C);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int put(int num[], int count, int *sum)
{
	int i, sum_num = 0, get_num = 0;
	printf("������%d����: ", count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &num[i]);
		sum_num += num[i];
		if (num[i] > 60)
		{
			get_num++;
		}
	}
	*sum = sum_num;
	return get_num;
}