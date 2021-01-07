#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n, i;
	int ge, shi, bai, flag;
	//printf("Please input a number:");
	//scanf("%d", &n);
	//printf("\nResult:");
	//flag = 0;
	for (i = 0; i < 1000; i++)
	{
		ge = i % 10;
		bai = i / 100;
		shi = (i / 10) % 10;
		if ((ge * ge * ge + shi * shi * shi + bai * bai * bai) == n)
		{
			printf("%5d", i);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("not Find!");
	}
	printf("\n");
	return 0;
}
