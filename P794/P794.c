#include<stdio.h>
#include<malloc.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬���������ʹ�õĽṹ�����͡������Զ��庯����ԭ�ͣ���������) */
struct student
{
	int num, score;
	struct student* next;
};
struct student* creat();
struct student* merge(struct student*, struct student*);
/* User Code End(������Ӵ������) */

/* print�Թ涨�ĸ�ʽ��ɱ�����ʾָ�������� */
void print(char *Info, struct student *Head);

int main(void)
{	
	struct student *ah, *bh;
	
	printf("��������A��������ѧ�ż��ɼ�(������Ϊ0ʱ��ʾֹͣ)��\n");
	ah = creat();
	printf("\n��������B��������ѧ�ż��ɼ�(������Ϊ0ʱ��ʾֹͣ)��\n");
	bh = creat();

	print("\n����A��", ah);
	print("\n����B��", bh);
	
	ah = merge(ah, bh);
	print("\n����A��B�ϲ���", ah);
	
	return 0;
}

void print(char *Info, struct student *Head)
{
	printf("%s", Info);
	while (Head != NULL)
	{
		printf("%d,%d  ", Head->num, Head->score);
		Head = Head->next;
	}
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
struct student* creat()
{
	int i = 1;
	struct student* head = NULL, * p1 = NULL, * p2 = NULL;
	/*����һ���ֵ�˼·�����ȴ���һ���ڵ㣬Ȼ�������һ��ѧ������Ϣ*/
	head = (struct student*)malloc(sizeof(struct student));//����һ���ڵ�
	p1 = p2 = head;//ʹ����ָ�������ָ���һ���ڵ㣬Ҳ����ͷ���
	printf("ѧ�� %d: ", i++);
	scanf("%d %d", &head->num, &head->score);//�����һ��ѧ������Ϣ
	/*�����涨���ж������������������ѧ�źͷ�����Ϊ0��ʱ��
	�����������һ���жϣ�������һ���������Ϣ�ǲ�����Ч����*/
	if ((head->num == 0) && (head->score == 0))
	{
		/*�����һ������ľ�������0��Ҳ����˵��һ�������ǿ�����*/
		head->next = NULL;
		head = NULL;
	}
	else//�����һ�����������Ч���ݣ��Ϳ�ʼ���������
	{
		while (1)//����ѭ���ļ�д��
		{
			p1 = (struct student*)malloc(sizeof(struct student));//�����µĽڵ�
			printf("ѧ�� %d: ", i++);
			scanf("%d %d", &p1->num, &p1->score);//���µĽڵ�����������
			if ((p1->num == 0) && (p1->score == 0))//�жϱ�������������Ƿ���Ч
			{
				p2->next = NULL;
				break;
			}
			else
			{
				/*�������һ��β�巨�����µĽڵ�嵽��һ���ڵ�֮��*/
				p2->next = p1;
				p2 = p1;
				p1 = NULL;
			}
		}
	}
	return head;
}

struct student* merge(struct student* a, struct student* b)
{
	struct student* result;
	if (a == NULL)
	{
		return b;
	}
	result = a;
	while (a->next != NULL)
	{
		a = a->next;
	}
	a->next = b;
	return result;
}