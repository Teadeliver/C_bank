#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int a1[16], count = 0, i;

	printf("���������ɸ���: ");
	for (i = 0; i < 16; i++)
	{
		scanf("%d", &a1[i]);
		if (a1[i] == -1)
		{
			break;
		}
		count++;
	}
	printf("\n��Щ������Ϊ: ");
	for (i = count - 1; i >= 0; i--)
	{
		printf("%d ", a1[i]);
	}
	return 0;
}