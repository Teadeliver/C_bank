//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#define I 20
//#define R 340
//int main()
//{
//	system("mode con cols=80 lines=60 ");
//	system("title �����������ֿ��ף��!");
//	char data[200][60] = { { "ף�����տ��֣�ף�����տ��� ��" }, { "\nHappy birthday to you��\n" }, { "Happy birthday my dear friend��\n" },
//	{ "������ǰ��̨�ﱾ������һ���Ǻܶ��أ�\n" }, { "��Ȼ����ң�û�취ѡ�����������ĳ�̡�\n" }, { "�������䣬�ֻ����ȣ��ֻ���ʲôѪ�ͺ�������\n" },
//	{ "ÿ����̣��Ҷ��Լ�˵������������Ҫ�����֣�\n" }, { "�������䣬�ֻ����ȣ��ֻ���ʲôѪ�ͺ�������\n" }, { "ÿ����̣��Ҷ��Լ�˵������������Ҫ�����֣�\n" },
//	{ "�ְ����������ˣ�лл����Ϊ�Ҹ���̫�࣡\n" }, { "����ף��������������Ҫ���Լ�����ޡ� \n" }, { "������һ���ÿ��ף��������Լ����ọ́�\n" },
//	{ "�ֵ���һ��ʱ�̣��Ҹ��Ļ����ֻ�ף���յ��ܶ�ܶࡣ\n" }, { "�������һ�������㣬д�����Ҹж��Ļ��\n" }, { "�װ�������Ҫ�������磬����һ���������׸裡\n" },
//	{ "ף�����տ��ֶ����һ����֣�\n" }
//	};
//	int sign = 0;
//
//	int i, j, e;
//	int a;
//	long time;
//	for (i = 1, a = I; i < I / 2; i++, a--)
//	{
//		for (j = (int)(I - sqrt(I * I - (a - i) * (a - i))); j > 0; j--)
//			printf(" ");
//		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
//			printf("\3");
//		for (j = (int)
//			(2 * (I - sqrt(I * I - (a - i) * (a - i)))); j > 0; j--)
//			printf(" ");
//		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
//			printf("\3");
//		printf("\n");
//	}
//	for (i = 1; i < 80; i++)
//	{
//		if (i == 25)
//		{
//			printf("======ףĳĳ�����տ��֡�======");
//			i += 30;
//		}
//		printf("\3");
//	}
//	printf("\n");
//	for (i = 1; i <= R / 2; i++)
//	{
//		if (i % 2 || i % 3)
//			continue;
//		for (j = (int)(R - sqrt(R * R - i * i)); j > 0; j--)
//			printf(" ");
//		for (e = 1; e <= 2 * (sqrt(R * R - i * i) - (R - 2 * I)); e++)
//			printf("\3");
//		printf("\n");
//	}
//
//	for (;;)
//	{
//		system("color a");
//		for (time = 0; time < 99999999; time++); system("color b");
//		for (time = 0; time < 99999999; time++); system("color c");
//		for (time = 0; time < 99999999; time++); system("color d");
//		for (time = 0; time < 99999999; time++); system("color e");
//		for (time = 0; time < 99999999; time++); system("color f");
//		for (time = 0; time < 99999999; time++);
//		system("color 0"); for (time = 0; time < 99999999; time++);
//		system("color 1"); for (time = 0; time < 99999999; time++);
//		system("color 2"); for (time = 0; time < 99999999; time++);
//		system("color 3"); for (time = 0; time < 99999999; time++);
//		system("color 4");
//		for (time = 0; time < 99999999; time++); system("color 5");
//		for (time = 0; time < 99999999; time++); system("color 6");
//		for (time = 0; time < 99999999; time++); system("color 7");
//		for (time = 0; time < 99999999; time++); system("color 8");
//		for (time = 0; time < 99999999; time++); system("color 9");
//		for (time = 0; time < 99999999; time++); system("color ab");
//		for (time = 0; time < 99999999; time++); system("color ac");
//		for (time = 0; time < 99999999; time++); system("color ad");
//		for (time = 0; time < 99999999; time++); system("color ae");
//		for (time = 0; time < 99999999; time++); system("color af");
//		for (time = 0; time < 99999999; time++);
//
//		printf("%s", data[sign]);
//		sign++;
//
//	}
//
//	return 0;
//
//}

//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include <time.h>
//void MathLearn(void)
//{
//	int x, y, z, a, p, b, i, n, k = 0;//k�Ǵ�����
//	char ch;
//	n = 10 * (10 - k);
//	for (i = 1; i <= 10; i++)
//	{
//		srand((int)time(NULL));
//		x = rand() % 10 + 1;
//		y = rand() % 10 + 1;
//		a = rand() % 4 + 1;
//
//		printf("��%d��\n", a);
//		printf("����1=%d\n", x);
//		printf("����2=%d\n", y);
//		switch (a)
//		{
//		case 1:
//		{
//			printf("%d+%d=", x, y);
//			scanf("%d", &p);
//			z = x + y;
//		}
//		break;
//		case 2:if (x >= y)
//		{
//			printf("%d-%d=", x, y);
//			scanf("%d", &p);
//			z = x - y;
//		}
//			  else
//		{
//			printf("%d-%d=", y, x);
//			scanf("%d", &p);
//			z = y - x;
//		}
//			  break;
//		case 3:printf("%d*%d=", x, y);
//			scanf("%d", &p);
//			z = x * y;
//			break;
//		case 4:if (x >= y && y != 0)
//		{
//			if (x % y == 0)
//				printf("%d/%d=", x, y);
//			scanf("%d", &p);
//			z = x / y;
//		}
//			  else
//		{
//			printf("�޷�����\n");
//		}
//			  break;
//		}
//		for (b = 0; b < 2; b++)
//		{
//			if (p == z) 
//				printf("Right!\n");
//			else
//			{
//				printf("Not Correct!\n");
//				printf("Do you want to correct you answer?Y/N\n");
//				printf("�������ѡ��:");
//				do
//					ch = getchar();
//				while (ch == '\n');
//				if ((ch == 'Y') || (ch == 'y'))
//				{
//					printf("\n������Ĵ�:");
//					scanf("%d", &p);
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		if (p == z)
//		{
//			printf("Right!\n");
//		}
//		else
//		{
//			printf("Not Correct!Over!\n");
//			printf("���Ѿ�û���������\n");
//			k++;
//		}
//
//
//	}
//	printf("������Ŀ:%d,�ܷ�:%d\n", k, n);
//}
//
//int main()
//{
//	MathLearn();
//	return 0;
//
//}
//

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char a[81] = {};
    char b[81] = {};
    char ch;
    scanf("%s", &a);
    ch = getchar();
    scanf("%s", &b);
    ch = getchar();
    int j;
    for (j = 0; j < 81; j++)
    {
        if (a[j] != '0')
        {
            break;
        }
    }
    int k;
    for (k = 0; k < 81; k++)
    {
        if (b[k] != '0')
        {
            break;
        }
    }
    char c[81];
    char d[81];
    for (int i = 0; i < 81; i++)
    {
        c[i] = '0';
        d[i] = '0';
    }
    for (int i = 0; i < strlen(a); i++)
    {
        c[i] = a[strlen(a) - 1 - i];
    }
    for (int i = 0; i < (strlen(b)); i++)
    {
        d[i] = b[strlen(b) - 1 - i];
    }
    int final[81] = { 0 };
    for (int i = 0; i < 81; i++)
    {
        if ((int)c[i] + (int)d[i] + final[i] - 96 < 10)
        {
            final[i] += (int)c[i] + (int)d[i] - 96;
        }
        else
        {
            final[i] += (int)c[i] + (int)d[i] - 58 - 48;
            final[i + 1] = 1;
        }
    }
    int save;
    for (int i = 80; i >= 0; i--)
    {
        if (final[i] > 0 && final[i] < 10)
        {
            save = i;
            break;
        }
    }
    int m;
    if (strlen(a) - j > strlen(b) - k)
    {
        m = strlen(a) - j;
    }
    else
    {
        m = strlen(b) - k;
    }
    if (final[m] != 0)m += 1;
    for (int i = m - 1; i >= 0; i--)
    {
        printf("%d", final[i]);
    }
    return 0;
}
