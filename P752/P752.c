#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int m, n;
	int i;
	int temp;
	int ge, shi, bai;
	printf("Input m, n: ");
	scanf("%d,%d", &m, &n);
	if (m > n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	printf("\nResult: ");
	for (i = m; i <= n; i++)
	{
		/* �ж�i�ܷ�3���� */
		if (i % 3 == 0)
		{
			ge = i % 10; //�ñ��ʽ�����i�ĸ�λ���֣����������ָ�������ge
			shi = i / 10 % 10; //�ñ��ʽ�����i��ʮλ���֣����������ָ�������shi
			bai = i / 100; //�ñ��ʽ�����i�İ�λ���֣����������ָ�������bai

			/* �жϱ���ge��shi��bai��ֵ�Ƿ�Ϊ5 */
			if ((ge == 5) || (shi == 5) || (bai == 5))
			{
				printf("%d ", i); //������������iֵ
			}
		}
	}
}