#include <stdio.h>

/* userCode(<60�ַ�): �Զ��庯��֮ԭ������ */
void out_1(int i);

int main(void)
{
	int i, n;

	printf("Please input n: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		out_1(n - i);  /* userCode(<39�ַ�): �����Զ��庯��������ɿո� */
		putchar('a' + i - 1);

		if (i > 1)
		{
			out_1(2 * i - 3);  /* userCode(<39�ַ�): �����Զ��庯��������ɿո� */
			putchar('a' + i - 1);
		}
		putchar('\n');
	}

	for (i = n - 1; i >= 1; i--)
	{
		out_1(n - i);  /* userCode(<39�ַ�): �����Զ��庯��������ɿո� */
		putchar('a' + i - 1);

		if (i > 1)
		{
			out_1(2 * i - 3);  /* userCode(<39�ַ�): �����Զ��庯��������ɿո� */
			putchar('a' + i - 1);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void out_1(int i)
{
	for (; i > 0; i--)
	{
		printf(" ");
	}
}