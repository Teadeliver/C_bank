#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
typedef struct goods
{
	char product_name[20], Spec[12];
	long num;
	float price;
}GOODS;

int main()
{
	FILE* fp = NULL;
	GOODS temp;
	char product_name[20] = {"0"};
	int flag = 0;
	fp = fopen("sp.dat", "r");
	printf("Please input shang pin pin ming:");
	scanf("%s", product_name);
	printf("\ncha zhao qing kuang:\n");
	while (!feof(fp))
	{
		fread(&temp, sizeof(GOODS), 1, fp);
		if (strcmp(temp.product_name, product_name) == 0)
		{
			flag = 1;
			printf("%s,%s,%d,%.2f\n", temp.product_name, temp.Spec, temp.num, temp.price);
		}
	}
	if (!flag)
	{
		printf("mei you shang pin :%s", product_name);
	}
	return 0;
}