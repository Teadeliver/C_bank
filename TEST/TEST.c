#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define I 20
#define R 340
int main()
{
	system("mode con cols=80 lines=60 ");
	system("title �����������ֿ��ף��!");
	char data[200][60] = { { "ף�����տ��֣�ף�����տ��� ��" }, { "\nHappy birthday to you��\n" }, { "Happy birthday my dear friend��\n" },
	{ "������ǰ��̨�ﱾ������һ���Ǻܶ��أ�\n" }, { "��Ȼ����ң�û�취ѡ�����������ĳ�̡�\n" }, { "�������䣬�ֻ����ȣ��ֻ���ʲôѪ�ͺ�������\n" },
	{ "ÿ����̣��Ҷ��Լ�˵������������Ҫ�����֣�\n" }, { "�������䣬�ֻ����ȣ��ֻ���ʲôѪ�ͺ�������\n" }, { "ÿ����̣��Ҷ��Լ�˵������������Ҫ�����֣�\n" },
	{ "�ְ����������ˣ�лл����Ϊ�Ҹ���̫�࣡\n" }, { "����ף��������������Ҫ���Լ�����ޡ� \n" }, { "������һ���ÿ��ף��������Լ����ọ́�\n" },
	{ "�ֵ���һ��ʱ�̣��Ҹ��Ļ����ֻ�ף���յ��ܶ�ܶࡣ\n" }, { "�������һ�������㣬д�����Ҹж��Ļ��\n" }, { "�װ�������Ҫ�������磬����һ���������׸裡\n" },
	{ "ף�����տ��ֶ����һ����֣�\n" }
	};
	int sign = 0;

	int i, j, e;
	int a;
	long time;
	for (i = 1, a = I; i < I / 2; i++, a--)
	{
		for (j = (int)(I - sqrt(I * I - (a - i) * (a - i))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
			printf("\3");
		for (j = (int)
			(2 * (I - sqrt(I * I - (a - i) * (a - i)))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
			printf("\3");
		printf("\n");
	}
	for (i = 1; i < 80; i++)
	{
		if (i == 25)
		{
			printf("======ףĳĳ�����տ��֡�======");
			i += 30;
		}
		printf("\3");
	}
	printf("\n");
	for (i = 1; i <= R / 2; i++)
	{
		if (i % 2 || i % 3)
			continue;
		for (j = (int)(R - sqrt(R * R - i * i)); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * (sqrt(R * R - i * i) - (R - 2 * I)); e++)
			printf("\3");
		printf("\n");
	}

	for (;;)
	{
		system("color a");
		for (time = 0; time < 99999999; time++); system("color b");
		for (time = 0; time < 99999999; time++); system("color c");
		for (time = 0; time < 99999999; time++); system("color d");
		for (time = 0; time < 99999999; time++); system("color e");
		for (time = 0; time < 99999999; time++); system("color f");
		for (time = 0; time < 99999999; time++);
		system("color 0"); for (time = 0; time < 99999999; time++);
		system("color 1"); for (time = 0; time < 99999999; time++);
		system("color 2"); for (time = 0; time < 99999999; time++);
		system("color 3"); for (time = 0; time < 99999999; time++);
		system("color 4");
		for (time = 0; time < 99999999; time++); system("color 5");
		for (time = 0; time < 99999999; time++); system("color 6");
		for (time = 0; time < 99999999; time++); system("color 7");
		for (time = 0; time < 99999999; time++); system("color 8");
		for (time = 0; time < 99999999; time++); system("color 9");
		for (time = 0; time < 99999999; time++); system("color ab");
		for (time = 0; time < 99999999; time++); system("color ac");
		for (time = 0; time < 99999999; time++); system("color ad");
		for (time = 0; time < 99999999; time++); system("color ae");
		for (time = 0; time < 99999999; time++); system("color af");
		for (time = 0; time < 99999999; time++);

		printf("%s", data[sign]);
		sign++;

	}

	return 0;

}