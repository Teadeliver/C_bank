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
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
	}
	printf("������Ҫ���ҳɼ���ѧ��������");
	scanf("%s", name);
	printf("\n���ҽ��Ϊ��\n");
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
		printf("�ļ���û���ҵ�����Ϊ��%s����ѧ��\n", name);
	}
}

