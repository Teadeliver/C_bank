#include <stdio.h>
#include <assert.h>
void Six_prog1()
{
	float a[20];
	int i, count, max, min;
	printf("����ʵ�����ݸ���(������20):");
	scanf("%d", &count);
	assert(count <= 20);
	printf("����%d������:", count);
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
	printf("������:\n");
	printf("���ֵΪ:%.2f ���±�Ϊ:%d\n", i, max);
	printf("���ֵΪ:%.2f ���±�Ϊ:%d\n", i, min);
}
int main()
{
	Six_prog1();
	return 0;
}
