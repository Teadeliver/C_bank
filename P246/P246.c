#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
caculate(int num[], int count);

int main(void)
{
	int arrA[5], arrB[8], minA, minB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	minA = caculate(arrA, 5);  /* userCode(<30字符): 调用函数计算arrA中元素的最小值 */
	printf("\nMin(arrA) = %d", minA);
	minB = caculate(arrB, 8);  /* userCode(<30字符): 调用函数计算arrB中元素的最小值 */
	printf("\nMin(arrB) = %d\n", minB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int caculate(int num[], int count)
{
	int min, i;
	min = num[0];
	for (i = 1; i < count; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
		}
	}
	return min;
}


