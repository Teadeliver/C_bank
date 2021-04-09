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
    printf("请输入直线的第一个点坐标(pt1):x,y:");
    scanf("%lf,%lf", &myline.pt1.x, &myline.pt1.y);
    printf("请输入直线的第二个点坐标(pt2):x,y:");
    scanf("%lf,%lf", &myline.pt2.x, &myline.pt2.y);
    printf("两点之间的距离为:%.4f\n", sqrt(pow(myline.pt1.x - myline.pt2.x, 2) + pow(myline.pt1.y - myline.pt2.y, 2)));
    return 0;
}