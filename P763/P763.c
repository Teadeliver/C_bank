#include <stdio.h>

/* User Code Begin(考生可在本行后添加代码，例如全局变量的定义、函数原型声明等，行数不限) */
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
/* User Code End(考生添加代码结束) */

int main(void)
{
	int high;  /* high记录平均分最高的学生的序号，具体使用参考后面的代码 */

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	STU myClass[COUNT];
	input(myClass);
	high = caculate(myClass);

	/* User Code End(考生添加代码结束) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
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


