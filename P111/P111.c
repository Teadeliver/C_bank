#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int x;
	double y;

	printf("\nPlease input x:"); //����Ļ�������ʾ��
	scanf("%d", &x); //�Ӽ�������һ��ʮ����������������x

	if (x < 0) //xС��0 
	{
		y = (double)(-5) * x + 27;
	}
	else if (0 == x) //x����0
	{
		y = (double)7909;
	}
	else //x����0
	{
		y = (double)2 * x - 1;
	}

	printf("\nF(%d) = %.0f", x, y); //����Ŀ�涨��ʽ���x��y��ֵ

	return 0;
}