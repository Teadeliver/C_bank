#include<stdio.h>
#include<string.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void find(char* in, int count);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	find(str, strlen(str));  /* userCode(<50�ַ�): ���ú������ַ���str������ */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void find(char* in, int lenth)
{
	int left, right, tmp;

	for (left = 0, right = lenth - 1; left < right; left++, right--)
	{
		tmp = in[left];
		in[left] = in[right];
		in[right] = tmp;
	}
}
