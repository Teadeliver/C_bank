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
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
		return 0;
	}
	else
	{
		printf("������Ҫ���㼰���ʵĿγ����ƣ�");
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
			printf("\n������Ϊ��\n");
			printf("�ļ���û������Ϊ��%s���Ŀγ�\n", sub_name);
		}
		else
		{
			printf("\n������Ϊ��\n");
			printf("�γ̡�%s���� %d ��ѡѧ�����м��� %d �ˣ�������Ϊ%.1f", sub_name, total, pass, pass / (total * 1.0));
		}
	}
	return 0;
}