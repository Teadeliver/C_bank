#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

typedef struct
{
	char product_name[21], Spec[11	];
	long num;
	float price;
}GOODS;

int main()
{
	FILE* fp = fopen("sp.txt", "r");
	char product_name[21] = { '0' };
	GOODS temp;
	int flag = 0;

	printf("Please input shang pin pin ming:");
	scanf("%s", product_name);
	while (!feof(fp))
	{
		fscanf(fp, "%s %s %f %d", &temp.product_name, &temp.Spec, &temp.price, &temp.num);
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