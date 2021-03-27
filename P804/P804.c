#include<stdio.h>

#define NOT_FIND -1
#define TOTAL_STU 8

/* ����aver�Ĺ���Ϊ����ѧ��ΪstuNo��ѧ����6�ſογ�֮ƽ���ɼ�����ͨ������ֵ����
		��δ�ҵ�ѧ��stuNo���򷵻�NOT_FIND */
float aver(int(*pStu)[7], int stuNo);

int main(void)
{
	int student[TOTAL_STU][7]; /* the first column save student's number */
	float averScore;
	int i, j, stuNumber;

	printf("Input the %d student's number and score: \n", TOTAL_STU);
	/* �����ִ��빦�ܽ��飺�Ӽ��̶����8��ѧ����6�ſγɼ�����ڶ�ά����student�� */
	/* User Code Begin(Limit: lines<=6, lineLen<=50, �������ڱ��к����Ӵ��롢���6�С��г�<=50�ַ�) */
	for (i = 0; i < TOTAL_STU; i++)
	{
		printf("%d:", i);
		for (j = 0; j < 7; j++)
		{
			scanf("%d", &student[i][j]);
		}
	}
	/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	printf("\nInput a student's number to compute: ");
	scanf("%d", &stuNumber);

	/* �����ִ��빦�ܽ��飺���ú���aver()��ƽ��ֵ */
	/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
	averScore = aver(student, stuNumber);
	/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */
	if (NOT_FIND == averScore)
	{
		printf("\nstudent of No.%d not Find!\n", stuNumber);
	}
	else
	{
		printf("\nThe No.%d student's average is %.2f\n", stuNumber, averScore);
	}

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯��aver����������) */
float aver(int(*pStu)[7], int stuNo)
{
	int i, j;
	int flag = 0;
	float sum = 0;
	for (i = 0; i < TOTAL_STU; i++)
	{
		if (pStu[i][0] == stuNo)
		{
			flag = 1;
			break;
		}
		return -1;
	}
	if (flag == 1)
	{
		for (j = 1; j < 7; j++)
		{
			sum += pStu[i][j];
		}
		return sum / 6.0;
	}
}