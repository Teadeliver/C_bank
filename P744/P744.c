#include <stdio.h>

int main(void)
{
	float score; //����score������Űٷ��Ƴɼ�
	char grade; //����grade������ųɼ��ȼ�

	/* �Ӽ�������һ��һ�ٷ��Ƴɼ����������0��100��Χ�ڣ�
	��Ҫ�������������ݣ�ֱ�������������0��100��Χ�� */
	do
	{
		printf("please input the score(0-100):");
		scanf("%f", &score);
	} while ((score < 0) || (score > 100));

	/* ���ٷ��Ƴɼ�ת���ɵȼ� */
	switch ((int)score / 10)
	{
	case 10:
	case 9:
		grade = 'A'; //90��������A
		break;
	case 8:
		grade = 'B'; //80 ~ 89����B
		break;
	case 7:
		grade = 'C'; //70 ~ 79����C
		break;
	case 6:
		grade = 'D'; //60 ~ 69��D
		break;
	default:
		grade = 'E'; //��������E
	}

	printf("score=%.1f,grade=%c\n", score, grade); //������

	return 0;
}