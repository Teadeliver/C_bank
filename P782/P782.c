#include <stdio.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */
typedef struct MyStruct
{
	int num;
	char name[20];
	float score1, score2, score3, score4;
	float aver;
}STUDENT;
int caculate(STUDENT* myClass);


/* User Code End(������Ӵ������) */

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	STUDENT myClass[5];
	int i;
	const int N = 5;
	printf("Please input students  info:Num Name score1 score2 score3 score4\n");
	for (i = 0; i < N; i++)
	{
		scanf("%d %s %f %f %f %f", &myClass[i].num, myClass[i].name, &myClass[i].score1, &myClass[i].score2, &myClass[i].score3, &myClass[i].score4);
		myClass[i].aver = ((float)myClass[i].score1 + (float)myClass[i].score2 + (float)myClass[i].score3 + (float)myClass[i].score4) / 4;
	}
	high = caculate(myClass);
	/* User Code End(������Ӵ������) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  score4=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].score4, myClass[high].aver);

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
int caculate(STUDENT* myclass)
{
	float temp = myclass[0].aver;
	int flag;
	for (int i = 0; i < 5; i++)
	{
		if (temp < myclass[i].aver)
		{
			flag = i;
			temp = myclass[i].aver;
		}
	}
	return flag;
}
//2001 wanghai    78   83.5 90    60
//2003 zhangzhong 82   80   98.5  78
//2005 liumei     95.2 81   90    93
//2006 sunqian    70   77.2 90    66
//2009 jiansansa  63   87   90.3  75

