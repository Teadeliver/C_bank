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
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
	}
	else 
	{
		printf("������Ҫ���ҵ�Υ�����ͣ�");
		scanf("%s", type);
		printf("\n���ҽ��Ϊ��\n");
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
			printf("�ļ���û���ҵ���%s���ļ�¼\n",type);
		}
	}
}