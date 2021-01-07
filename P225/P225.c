#include <stdio.h>
int main()
{
	int Num, num;
	int ge, shi, bai;
	int flag = 0;
	printf("Please Input a number: ");
	scanf("%d", &Num);
	printf("\nResult: ");
	for (ge = 0; ge <= 9; ge++)
		for (shi = 0; shi <= 9; shi++)
			for (bai = 1; bai <= 9; bai++)
			{
				if (Num == ge * ge * ge + shi * shi * shi + bai * bai * bai)
				{
					num = ge + shi * 10 + bai * 100;
					printf("%5d", num);
					flag = 1;
				}
			}
	if (flag == 0)
	{
		printf("not Find!\n");
	}
	return 0;
}