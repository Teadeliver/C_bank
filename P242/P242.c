#include <stdio.h>

int put(int num[]);  /* userCode(<50�ַ�): �Զ��庯��1֮ԭ������ */
int out(int* num, int n);  /* userCode(<50�ַ�): �Զ��庯��2֮ԭ������ */

int main(void)
{
	int num[16] = {0}, count;

	printf("���������ɸ���: ");
	count = put(num);  /* userCode(<30�ַ�): ���ú����������ݵ�num�в�ͳ�Ƹ��� */

	printf("\n��%d����������Ϊ: ", count);
	out(num, count);  /* userCode(<30�ַ�): ���ú����������num������Ԫ�� */

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int put(int num[])
{
	int i, count = 0;
	for (i = 0; i < 16; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == -1)
		{
			break;
		}
		else
		{
			count++;
		}
	}
	return count;
}

int out(int* num, int n)
{
	for (n = n - 1; n >= 0; n--)
	{
		printf("%d ", num[n]);
	}
	return 0;
}