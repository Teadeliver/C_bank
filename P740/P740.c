#include<stdio.h>

int main()
{
	int x, y, z;
	int money, num;
	printf("Input the money: ");
	scanf("%d", &money);
	printf("Input the number: ");
	scanf("%d", &num);
	printf("\n  cock   hen chick\n");
	for (x = 0; x <= num; x++)
	{
		for (y = 0; y <= num - x; y++)
		{
			for (z = 0; z <= (num - x - y); z+=3)
			{
				if ((x + y + z == num) && ((5 * x + 3 * y + z / 3) == money))
				{
					printf("%6d%6d%6d\n", x, y, z); //输出公鸡、母鸡和小鸡的数量
				}
			}
		}
	}
	return 0;
}