#include <stdio.h>
#include <stdlib.h>

/* User Code Begin(考生可在本行后添加代码，行数不限) */
typedef struct MyStruct
{
	int num;
	char name[20];
	int math, english, computer;
	float average;
}STUDENT;
void caculate(STUDENT* myclass);

/* User Code End(考生添加代码结束) */

int main(void)
{
	STUDENT myclass[5], *pStu = myclass;
	int i;
	const int N = 5;

	/* User Code Begin(考生可在本行后添加代码，行数不限) */
	printf("Please input info of students:No Name Math English Computer\n");
	for (i = 0; i < N; i++)
	{
		scanf("%d %s %d %d %d", &myclass[i].num, myclass[i].name, &myclass[i].math, &myclass[i].english, &myclass[i].computer);
		myclass[i].average = ((float)myclass[i].math + (float)myclass[i].english + (float)myclass[i].computer) / 3;
	}
	caculate(myclass);
	/* User Code End(考生添加代码结束) */
	
	printf("\nResult of sort:\n");
	printf("Num   Name                 Math     English  Computer Average\n");
	for (i=0; i<N; i++)
	{
		printf("%-5d %-20s %-8d %-8d %-8d %-.2f\n", (pStu+i)->num, (pStu+i)->name,
			(pStu+i)->math, (pStu+i)->english, (pStu+i)->computer, (pStu+i)->average);
	}

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，行数不限) */
void caculate(STUDENT* myclass)
{
	int i, j;
	STUDENT temp;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			if (myclass[j].average < myclass[j + 1].average)
			{
				temp = myclass[j];
				myclass[j] = myclass[j + 1];
				myclass[j + 1] = temp;
			}
		}
	}
}
//2001 wanghai    78 83 90
//2003 zhangzhong 82 80 98
//2005 liumei     95 81 90
//2006 sunqian    70 77 90
//2009 jiansansa  63 87 90


