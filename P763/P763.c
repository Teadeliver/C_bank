#include <stdio.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */
#define COUNT 5
typedef struct student
{
	int num;
	char name[20];
	float score1;
	float score2;
	float score3;
	float aver;
}STU;
void input(STU* myClass);
int caculate(STU* myClass);
/* User Code End(������Ӵ������) */

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	STU myClass[COUNT];
	input(myClass);
	high = caculate(myClass);

	/* User Code End(������Ӵ������) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
void input(STU* myClass)
{
	int i;
	printf("Please input students  info:Num Name score1 score2 score3\n");
	for (i = 0; i < COUNT; i++)
	{
		printf("%d:", i+1);
		scanf("%d", &myClass[i].num);
		scanf("%s", &myClass[i].name);
		scanf("%f", &myClass[i].score1);
		scanf("%f", &myClass[i].score2);
		scanf("%f", &myClass[i].score3);
	}
}

int caculate(STU* myClass)
{
	int i, high;
	float temp;
	for (i = 0; i < COUNT; i++)
	{
		myClass[i].aver = (myClass[i].score1 + myClass[i].score2 + myClass[i].score3) / 3;
	}
	temp = myClass[0].aver;
	high = 0;
	for (i = 0; i < COUNT; i++)
	{
		if (myClass[i].aver > temp)
		{
			temp = myClass[i].aver;
			high = i;
		}
	}
	return high;
}


