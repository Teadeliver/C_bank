#include<stdio.h>
#include<stdlib.h>

#define N 20

/* User Code Begin(Limit: lines<=5, lineLen<=60, �������ڱ��к���Ӵ��롢��5�С��г�<=60�ַ��������ǽڵ�����Link����) */
struct Link
{
	int data;
	struct Link* next;
};
/* User Code End(������Ӵ������) */

void dispLink(struct Link *Head);  /* ���ݸ���������Head����ʾ���������е����ݣ�ͬʱ�������ʹ�õ������Ƿ�պ÷��� */
/* User Code Begin(Limit: lines<=2, lineLen<=60, �������ڱ��к���Ӵ��롢��2�С��г�<=60�ַ����������û��Զ��庯����ԭ������) */
struct Link* creatLink();
struct Link* reverseLink(struct Link*);
/* User Code End(������Ӵ������) */

int main(void)
{
	struct Link *Head;

	Head = creatLink();  /* ���������� */
	printf("\nbefore:");
	dispLink(Head);

	Head = reverseLink(Head);  /* ��ת���� */
	printf("\nafter:");
	dispLink(Head);

	return 0;
}

void dispLink(struct Link *Head)
{
	static struct Link *oLink[2][N];
	static int callNumber = -1;
	int i = 0;

	callNumber++;
	if (callNumber > 1)
	{
		printf("Error, call invalid!\n");
		return ;
	}
		
	while (Head != NULL)
	{
		oLink[callNumber][i] = Head;
		i++;
		printf("%d ", Head->data);
		Head = Head->next;
	}
	printf("\n");

	if (1 == callNumber)
	{
		for (i=0; i<N; i++)
		{
			if (oLink[0][i] != oLink[1][N-1-i])
			{
				printf("Error, Link not reverse!\n");
				return ;
			}
		}
	}
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */
struct Link* creatLink()
{
	struct Link* head,* p1, *p2;
	int i = 0;
	head = (struct Link*)malloc(sizeof(struct Link*));
	p1 = p2 = head;
	head->data = i++;
	while (i < N)
	{
		p1 = (struct Link*)malloc(sizeof(struct Link*));
		p1->data = i++;
		p1->next = NULL;
		p2->next = p1;
		p2 = p1;
	}
	return head;
}
struct Link* reverseLink(struct Link* head)
{
	int i = 1;
	struct Link* r_head, * p1;//ͷ�巨ʵ�ֵ���
	r_head = (struct Link*)malloc(sizeof(struct Link*));//�µ�����
	r_head->data = head->data;
	head = head->next;
	while (i < N)
	{
		p1 = (struct Link*)malloc(sizeof(struct Link*));
		p1->data = head->data;
		p1->next = r_head;
		head = head->next;
		r_head = p1;
		i++;
	}
	return r_head;
}
