#include <stdio.h>

int put(int num[]);  /* userCode(<50字符): 自定义函数1之原型声明 */
int out(int* num, int n);  /* userCode(<50字符): 自定义函数2之原型声明 */

int main(void)
{
	int num[16] = {0}, count;

	printf("请输入若干个数: ");
	count = put(num);  /* userCode(<30字符): 调用函数读入数据到num中并统计个数 */

	printf("\n共%d个数，倒序为: ", count);
	out(num, count);  /* userCode(<30字符): 调用函数倒序输出num的所有元素 */

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
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