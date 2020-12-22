#include<stdio.h>
int main(void)
{
	int num[10];
	int i, j, temp;

	printf("please input 10 integer numbers: ");
	for (i = 0; i < 10; i++)

	{
		scanf("%d", &num[i]);
	}

	printf("\nthe array before sorted: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 9; j >i; j--)
		{
			if (num[j - 1] > num[j])
			{
				temp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("\nthe array after sorted: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}

	return 0;
}