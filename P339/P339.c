#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

typedef struct
{
	char num[10], name[9], sex[3], sub_name[15];
	int point;
}infor;

int main()
{
	FILE* fp;
	infor temp;
	int total = 0, pass = 0;
	char sub_name[15] = { "0" };
	char tem;
	if ((fp = fopen("xscj.txt", "r")) == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		return 0;
	}
	else
	{
		printf("请输入要计算及格率的课程名称：");
		scanf("%s", sub_name);
		while (!feof(fp))
		{
			fscanf(fp, "%s %s %s %s %d %c", temp.num, temp.name,
				temp.sex, temp.sub_name, &temp.point, &tem);
			if (strcmp(temp.sub_name, sub_name) == 0)
			{
				total++;
				if (temp.point >= 60)
				{
					pass++;
				}
			}
		}
		fclose(fp);
		if (!total)
		{
			printf("\n计算结果为：\n");
			printf("文件中没有名称为“%s”的课程\n", sub_name);
		}
		else
		{
			printf("\n计算结果为：\n");
			printf("课程“%s”有 %d 人选学，其中及格 %d 人，及格率为%.1f", sub_name, total, pass, pass / (total * 1.0));
		}
	}
	return 0;
}