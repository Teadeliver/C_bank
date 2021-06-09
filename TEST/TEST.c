#include<stdio.h>
typedef struct student
{
    int num;
    struct student* next;
}STU;
int main()
{
    int i;
    STU test, test1, test2;
    STU* head1 = NULL, * head2 = NULL, * temp = NULL;
    test.num = 0;
    test.next = &test1;

    test1.num = 1;
    test1.next = &test2;

    test2.num = 2;
    test2.next = NULL;

    head1 = &test;
    temp = head1;
    for (i = 0; i < 3; i++)
    {
        printf("%d ", temp->num);
        temp = temp->next;
    }
    printf("\n");

    head2 = head_reverse(head1);
    temp = head2;
    for (i = 0; i < 3; i++)
    {
        printf("%d ", temp->num);
        temp = temp->next;
    }
    return 0;
}
STU* head_reverse(STU* head)
{
    STU* new_head = NULL;
    STU* temp = NULL;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (head != NULL)
    {
        temp = head;
        //将 temp 从 head 中摘除
        head = head->next;
        //将 temp 插入到 new_head 的头部
        temp->next = new_head;
        new_head = temp;
    }
    return new_head;
}