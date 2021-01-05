#include<stdio.h>

int main(void)
{
    char ch[3] = { 'a','b','c' };
    char str;
    int i;
    char* p = &str;
    for (i = 0; i < 3; i++)
    {
        *p = ch[i];
    }
    printf("%s", str);
    return 0;
}