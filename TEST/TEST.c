#include<stdio.h>
#include <math.h>
struct point
{
    double x;
    double y;
};
struct LINE
{
    struct point pt1;
    struct point pt2;
};
int main(void)
{
    struct LINE myline;
    printf("������ֱ�ߵĵ�һ��������(pt1):x,y:");
    scanf("%lf,%lf", &myline.pt1.x, &myline.pt1.y);
    printf("������ֱ�ߵĵڶ���������(pt2):x,y:");
    scanf("%lf,%lf", &myline.pt2.x, &myline.pt2.y);
    printf("����֮��ľ���Ϊ:%.4f\n", sqrt(pow(myline.pt1.x - myline.pt2.x, 2) + pow(myline.pt1.y - myline.pt2.y, 2)));
    return 0;
}