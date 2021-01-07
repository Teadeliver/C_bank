#include<stdio.h>
#include<string.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void find(char* in, int count);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	find(str, strlen(str));  /* userCode(<50字符): 调用函数将字符串str逆序存放 */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void find(char* in, int lenth)
{
	int left, right, tmp;

	for (left = 0, right = lenth - 1; left < right; left++, right--)
	{
		tmp = in[left];
		in[left] = in[right];
		in[right] = tmp;
	}
}
