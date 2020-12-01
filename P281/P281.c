#include <stdio.h>

/* userCode(<60字符): 自定义函数之原型声明 */
void out_1(int i);

int main(void)
{
	int i, n;

	printf("Please input n: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		out_1(n - i);  /* userCode(<39字符): 调用自定义函数输出若干空格 */
		putchar('a' + i - 1);

		if (i > 1)
		{
			out_1(2 * i - 3);  /* userCode(<39字符): 调用自定义函数输出若干空格 */
			putchar('a' + i - 1);
		}
		putchar('\n');
	}

	for (i = n - 1; i >= 1; i--)
	{
		out_1(n - i);  /* userCode(<39字符): 调用自定义函数输出若干空格 */
		putchar('a' + i - 1);

		if (i > 1)
		{
			out_1(2 * i - 3);  /* userCode(<39字符): 调用自定义函数输出若干空格 */
			putchar('a' + i - 1);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void out_1(int i)
{
	for (; i > 0; i--)
	{
		printf(" ");
	}
}