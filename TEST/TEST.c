#include <stdio.h>
#include <assert.h>
void Six_prog1()
{
	float a[20];
	int i, count, max, min;
	printf("输入实际数据个数(不超过20):");
	scanf("%d", &count);
	assert(count <= 20);
	printf("输入%d个数据:", count);
	for (i = 0; i < count; i++)
		scanf("%f", &a[i]);
	max = min = 0;
	for (i = 0; i < count; i++)
	{
		if (a[i + 1] <= a[i] && a[i - 1] <= a[i])
			max = i;
		else if (a[i + 1] >= a[i] && a[i - 1] >= a[i])
			min = i;
	}
	printf("输出结果:\n");
	printf("最大值为:%.2f 其下标为:%d\n", i, max);
	printf("最大值为:%.2f 其下标为:%d\n", i, min);
}
int main()
{
	Six_prog1();
	return 0;
}
