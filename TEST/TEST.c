#include<stdio.h>

void StringBubbleSort(char* MyStrings[], int iCount, int iSortType)
{
    int i, j;
    char* temp;
    for (i = 0; i < iCount - 1; i++)
    {
        for (j = i + 1; j < iCount; j++)
        {
            if (iSortType == 1)
            {
                if (strcmp(MyStrings[j], MyStrings[i]) < 0)
                {
                    temp = MyStrings[i];
                    MyStrings[i] = MyStrings[j];
                    MyStrings[j] = temp;

                }
            }
            else
            {
                if (strcmp(MyStrings[j], MyStrings[i]) > 0)
                {
                    temp = MyStrings[i];
                    MyStrings[i] = MyStrings[j];
                    MyStrings[j] = temp;

                }
            }
        }
    }
}

int main()
{
    int i, iSortType;
    int argc = 3;
    char* argv[] = { "dhisawkfgka","dwehlifdwie","fwehiulyfwe" };

    iSortType = strlen(*argv); //第一个参数 排序方式 

    //StringBubbleSort(argv,strlen(*argv),iSortType); //排序处理 

    for (i = 0; i < argc; i++) //显示排序结果 
        printf("%s\n", *(argv+i));
    return 1;

}