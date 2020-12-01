#include<stdio.h>

int main()
{
	int num[10] = { 0 };
	int i;
	int z = 0, f = 0, a = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		a += num[i];
		if (num[i] > 0)
		{
			z += num[i];
		}
		if (num[i] < 0)
		{
			f += num[i];
		}
	}
	printf("\nzhengshu=%d,fushu=%d,all=%d", z, f, a);
	return 0;
}