#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char pinming[18], guige[12];
	long number;
	float danjia;
	FILE* fp;
	int count = 0;
	char ch[18];
	int flag = 0;
	if ((fp = fopen("sp38.dat", "rb")) == NULL)
	{
		printf("打开文件失败\n");
		exit(1);
	}

	printf("Please input shang pin pin ming:");
	gets(ch);
	printf("\ncha zhao qing kuang:\n");
	while (!feof(fp))
	{
		flag = fread(pinming, 18, 1, fp);
		fread(guige, 12, 1, fp);
		fread(&number, sizeof(long), 1, fp);
		fread(&danjia, sizeof(float), 1, fp);
		if (flag)
		{
			if (strcmp(ch, pinming) == 0)
			{
				printf("%s,%s,%ld,%.2f\n", pinming, guige, number, danjia);
				count = 1;
			}
		}

	}
	if (count == 0)
	{
		printf("mei you shang pin :%s", ch);
	}
	fclose(fp);
}
