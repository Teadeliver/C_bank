#include<stdio.h>
#include<malloc.h>

/* User Code Begin(考生可在本行后添加代码，定义程序中使用的结构体类型、声明自定义函数的原型，行数不限) */
struct student
{
	int num, score;
	struct student* next;
};
struct student* creat();
struct student* merge(struct student*, struct student*);
/* User Code End(考生添加代码结束) */

/* print以规定的格式完成遍历显示指定的链表 */
void print(char *Info, struct student *Head);

int main(void)
{	
	struct student *ah, *bh;
	
	printf("创建链表A，请输入学号及成绩(均输入为0时表示停止)：\n");
	ah = creat();
	printf("\n创建链表B，请输入学号及成绩(均输入为0时表示停止)：\n");
	bh = creat();

	print("\n链表A：", ah);
	print("\n链表B：", bh);
	
	ah = merge(ah, bh);
	print("\n链表A、B合并后：", ah);
	
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

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
struct student* creat()
{
	int i = 1;
	struct student* head = NULL, * p1 = NULL, * p2 = NULL;
	/*下面一部分的思路就是先创建一个节点，然后输入第一个学生的信息*/
	head = (struct student*)malloc(sizeof(struct student));//创建一个节点
	p1 = p2 = head;//使几个指针变量都指向第一个节点，也就是头结点
	printf("学生 %d: ", i++);
	scanf("%d %d", &head->num, &head->score);//输入第一个学生的信息
	/*这道题规定的判断输入结束的条件就是学号和分数均为0的时候
	所以这里进行一次判断，看看第一次输入的信息是不是有效数据*/
	if ((head->num == 0) && (head->score == 0))
	{
		/*如果第一次输入的就是两个0，也就是说第一个链表是空链表*/
		head->next = NULL;
		head = NULL;
	}
	else//如果第一次输入的是有效数据，就开始后面的输入
	{
		while (1)//无限循环的简单写法
		{
			p1 = (struct student*)malloc(sizeof(struct student));//创建新的节点
			printf("学生 %d: ", i++);
			scanf("%d %d", &p1->num, &p1->score);//向新的节点里输入数据
			if ((p1->num == 0) && (p1->score == 0))//判断本次输入的数据是否有效
			{
				p2->next = NULL;
				break;
			}
			else
			{
				/*这里就是一个尾插法，把新的节点插到上一个节点之后*/
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