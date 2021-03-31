#include <stdio.h>
//int main()
//{
//	struct student
//	{
//		int    num;
//		char   name[20];
//		char   gender[3];
//		int    age;
//		float  score;
//		char   addr[30];
//	};
//	struct student stu;
//	scanf("%d,%s,%s,%d,%f,%s", &stu.num, stu.name, stu.gender, &stu.age, &stu.score, stu.addr);
//	printf("No: %d\n", stu.num);
//	printf("Name: %s\n", stu.name);
//	printf("Gender: %s\n", stu.gender);
//	printf("Age:%d\n", stu.age);
//	printf("Score:%f\n", stu.score);
//	printf("Addr:%s\n", stu.addr);
//	return 0;
//}

//1 Áîºü³å ÄÐ 18 90 chengdu
//1,Áîºü³å,ÄÐ,18,90,chengdu¡¢
int main()
{
	struct days
	{
		int year;
		int mouth;
		int day;
	};
	struct dec
	{
		int x;
		int y;
	};
	struct days today[2] = { {2021,3,30 },{2021,3,31} };
	printf("Today is %d/%d/%d", today[0].year, today->mouth, today[0].day);
	printf("Tomorow is %d/%d/%d", today[1].year, (today+1)->mouth, (today+1)->day);

}