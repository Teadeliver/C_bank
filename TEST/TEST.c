#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
	char pm[21];
	char gg[11];
	long sl;
	float dj;
}GOOD;
int main()
{
	FILE* fp;
	char spmc[21] = { '0' };
	int flag = 0;
	GOOD aa;

	printf("Please input shang pin pin ming:");
	scanf("%s", spmc);

	printf("\ncha zhao qing kuang:\n");
	fp = fopen("sp.txt", "r");
	if (fp == NULL)
	{
		printf("cannot open file!");
		exit(1);
	}
	while (!feof(fp))
	{
		fscanf(fp, "%s %s %f %d", aa.pm, aa.gg, &aa.dj, &aa.sl);
		if (strcmp(spmc, aa.pm) == 0)
		{
			flag = 1;
			printf("%s,%s,%d,%.2f\n", aa.pm, aa.gg, aa.sl, aa.dj);
		}
	}
	if (flag == 0)
	{
		printf("mei you shang pin :%s", spmc);
	}
	fclose(fp);
	return 0;
}