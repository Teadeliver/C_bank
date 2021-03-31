#include <stdio.h>
#include <stdlib.h>

/* User Code Begin(考生可在本行后添加代码，行数不限) */
#define COUNT 5
typedef struct student
{
	int num;
	char name[20];
	float math;
	float english;
	float computer;
	float average;
}STUDENT;
void input(STUDENT* myclass, int N);
int caculate(STUDENT* myclass, int N);
/* User Code End(考生添加代码结束) */

int main(void)
{
	STUDENT myclass[5], * pStu = myclass;
	int i;
	const int N = 5;

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	input(myclass, N);
	caculate(myclass, N);


	/* User Code End(考生添加代码结束) */

	printf("\nResult of sort:\n");
	printf("Num   Name                 Math     English  Computer Average\n");
	for (i = 0; i < N; i++)
	{
		printf("%-5d %-20s %-8d %-8d %-8d %-.2f\n", (pStu + i)->num, (pStu + i)->name,
			(pStu + i)->math, (pStu + i)->english, (pStu + i)->computer, (pStu + i)->average);
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
void input(STUDENT* myclass,int N)
{
	int i;
	printf("Please input info of students:No Name Math English Computer\n");
	for (i = 0; i < N; i++)
	{
		printf("%d:", i + 1);
		scanf("%d", &myclass[i].num);
		scanf("%s", &myclass[i].name);
		scanf("%f", &myclass[i].math);
		scanf("%f", &myclass[i].english);
		scanf("%f", &myclass[i].computer);
	}
}

int caculate(STUDENT* myclass, int N)
{
	int i, j;
	float temp;
	for (i = 0; i < COUNT; i++)
	{
		myclass[i].average = (myclass[i].math + myclass[i].english + myclass[i].computer) / 3;
	}
	for (i = 0; i < N -1; i++)
	{
		for (j = 0; j < N - i - 1; j++)
		{
			if (myclass[j].average > myclass[j + 1].average)
			{
				myclass[i].num = myclass[j + 1].num;
				myclass[i].math = myclass[j + 1].math;
				myclass[i].english = myclass[j + 1].english;
				myclass[i].computer = myclass[j + 1].computer;
				myclass[i].average = myclass[j + 1].average;
			}
		}
	}
}


