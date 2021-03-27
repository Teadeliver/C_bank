#include <stdio.h>
#define ROW 2
#define COL 3
void TransMatrix(int(*iSMatrix)[COL], int(*iTMatrix)[ROW]);
void DisplayTarget(int(*iMatrix)[ROW]);
int main(void)
{
    int iArray[ROW][COL] = { {1,2,3},{4,5,6 } };
    int iRevArray[COL][ROW];
    //������Ӵ���ʵ�ֶ�����iArray��������,������֤
    TransMatrix(iArray, iRevArray);//���ú���TransMatrix()���ת��
    printf("After Trans:\n");
    DisplayTarget(iRevArray);//���ú���DisplayTarget()���ת�ú�ľ������
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
        printf("��%d�У�", i);
        for (j = 0; j <ROW; j++)
            printf("%d\t", *(*(iMatrix + i) + j));
        printf("\n");//���ÿ�к���
    }

}