#include<stdio.h>
int main()
{
	int m, n;
	int i, j;
	int flag;

	printf("Input the m, n: ");
	scanf("%d,%d", &m, &n);
	printf("\nThe result:\n");
	for (i = 0; i < n;)
	{
		flag = 0;
		for (j = m-1; j > 1; j--)
		{
			if (m % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d ", m);
			i++;
		}
		m++; 
	}
	return 0;
}