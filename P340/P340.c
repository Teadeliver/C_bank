#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[9];
	char data[11];
	char type[9];
}WZ;

int main()
{
	FILE* fp;
	WZ temp;
	char type[5];
	int flag = 1;
	if ((fp = fopen("jtwz.txt", "r")) == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
	}
	else 
	{
		printf("请输入要查找的违章类型：");
		scanf("%s", type);
		printf("\n查找结果为：\n");
		while (!feof(fp))
		{
			fscanf(fp,"%s %s %s", &temp.name, &temp.data, &temp.type);
			if (strcmp(temp.type, type) == 0)
			{
				printf("%d %s %s %s\n", flag++, temp.name, temp.name, temp.type);
			}
		}
		if (flag == 1)
		{
			printf("文件中没有找到“%s”的记录\n",type);
		}
	}
}