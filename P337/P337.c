#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	int num;
	char name[9];
	char sex[3];
	char sbject[15];
	int point;
}STU;

int main()
{
	char name[9];
	FILE* fp;
	STU temp;
	int i = 1;
	if ((fp = fopen("xscj.txt", "r")) == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
	}
	printf("请输入要查找成绩的学生姓名：");
	scanf("%s", name);
	printf("\n查找结果为：\n");
	while (!feof(fp))
	{
		fscanf(fp, "%d %s %s %s %d", &temp.num, 
			&temp.name, &temp.sex, &temp.sbject, &temp.point);
		if (strcmp(name, temp.name)==0)
		{
			printf("%d %d,%-8s,%s,%-14s,%d\n", i++, temp.num, 
				temp.name, temp.sex, temp.sbject, temp.point);
		}
	}
	if (i == 1)
	{
		printf("文件中没有找到姓名为“%s”的学生\n", name);
	}
}

