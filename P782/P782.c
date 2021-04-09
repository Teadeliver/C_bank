#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */
typedef struct MyStruct
{
	int num;
	char name[20];
	float score1, score2, score3, score4;
	float aver;
}STUDENT;
int caculate(STUDENT* myClass);


/* User Code End(考生添加代码结束) */

int main(void)
{
	int high;  /* high记录平均分最高的学生的序号，具体使用参考后面的代码 */

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
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
	/* User Code End(考生添加代码结束) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  score4=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].score4, myClass[high].aver);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
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

