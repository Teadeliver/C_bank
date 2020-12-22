#include<stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void swap(int* numa, int* numb);

int main(void)
{
	int numA, numB;

	printf("please input numA, numB: ");
	scanf("%d,%d", &numA, &numB);

	swap(&numA, &numB);  /* userCode(<40字符): 调用函数实现numA和numB值的交换 */
	printf("\nnumA=%d, numB=%d\n", numA, numB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void swap(int* numa, int* numb)
{
	int temp;

	temp = *numa;
	*numa = *numb;
	*numb = temp;
}