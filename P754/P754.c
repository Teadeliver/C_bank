#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int score;
	char grade;

	printf("please input the score: ");
	scanf("%d", &score);


	if (score > 100)
	{
		grade = 'X';
	}
	else
	{
		if (score >= 90)
		{
			grade = 'A';
		}
		else
		{
			if (score >= 80)
			{
				grade = 'B';
			}
			else
			{
				if (score >= 70)
				{
					grade = 'C';
				}
				else
				{
					if (score >= 60)
					{
						grade = 'D';
					}
					else
					{
						if (score >= 50)
						{
							grade = 'E';
						}
						else
						{
							if (score >= 40)
							{
								grade = 'F';
							}
							else
							{
								if (score >= 30)
								{
									grade = 'G';
								}
								else
								{
									if (score >= 20)
									{
										grade = 'H';
									}
									else
									{
										if (score >= 10)
										{
											grade = 'I';
										}
										else
										{
											if (score >= 0)
											{
												grade = 'J';
											}
											else
											{
												grade = 'X';
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("\nscore=%d, grade=%c\n", score, grade);
	return 0;
}