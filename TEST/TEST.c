#include <stdio.h>
#define ROW 2
#define COL 3
void TransMatrix(int(*iSMatrix)[COL], int(*iTMatrix)[ROW]);
void DisplayTarget(int(*iMatrix)[ROW]);
int main(void)
{
    int iArray[ROW][COL] = { {1,2,3},{4,5,6 } };
    int iRevArray[COL][ROW];
    //自行添加代码实现对数组iArray进行输入,便于验证
    TransMatrix(iArray, iRevArray);//调用函数TransMatrix()完成转置
    printf("After Trans:\n");
    DisplayTarget(iRevArray);//调用函数DisplayTarget()完成转置后的矩阵输出
    return 0;
}
void TransMatrix(int(*iSMatrix)[COL], int(*iTMatrix)[ROW])
{
    int i, j;
    for (i = 0; i <ROW; i++)
        for (j = 0; j <COL; j++)
            *(*(iTMatrix +j)+i) = *(*(iSMatrix + i) + j);
}
void DisplayTarget(int(*iMatrix)[ROW])
{
    int i, j;
    for (i = 0; i <COL; i++)
    {
        printf("第%d行：", i);
        for (j = 0; j <ROW; j++)
            printf("%d\t", *(*(iMatrix + i) + j));
        printf("\n");//输出每行后换行
    }

}