#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#define N 1
struct date
{
	int year;
	int month;
	int day;
};
struct student
{
	int	studentID;
	char studentName[10];
	char studentGender[3];
	struct date timeOfEnter;
	int scoreComputer;
};
int main()
{
	int i, j;
	struct student STU;
	struct student* pstu;
	pstu = &STU;
	scanf("%d", &pstu->studentID);
	scanf("%s", pstu->studentName);
	scanf("%s", pstu->studentGender);
	scanf("%d", pstu->timeOfEnter.year);
	scanf("%d", pstu->timeOfEnter.month);
	scanf("%d", pstu->timeOfEnter.year);
	scanf("%d", pstu->scoreComputer);

}

