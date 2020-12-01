#include<stdio.h>

int main()
{
	char put[127];
	int i;
	int n = 0;
	int count_num = 0, count_letter = 0, count_Symbol = 0, count_min_letter = 0;
	char num[127];
	char letter[127];
	char min_letter[127];
	char Symbol[127];
	printf("Please intput the string: ");
	for (i = 0; i < 127; i++)
	{
		scanf("%c", &put[i]);
		if (put[i] == '\n')
		{
			break;
		}
		else
		{
			n++;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (put[i] >= 48 && put[i] <= 57)
		{
			num[count_num] = put[i];
			count_num++;
		}
		else
		{
			if (put[i] >= 65 && put[i] <= 90)
			{
				letter[count_letter] = put[i];
				count_letter++;
			}
			else
			{
				if (put[i] >= 97 && put[i] <= 122)
				{
					min_letter[count_min_letter] = put[i];
					count_min_letter++;
				}
				else
				{
					Symbol[count_Symbol] = put[i];
					count_Symbol++;
				}
			}
		}
	}
	printf("\nDigistal string length = %d, Digitals: ", count_num);
	for (i = 0; i < count_num; i++)
	{
		printf("%c", num[i]);
	}
	printf("\n");

	printf("azLetter string length = %d, azLetter: ", count_min_letter);
	for (i = 0; i < count_min_letter; i++)
	{
		printf("%c", min_letter[i]);
	}
	printf("\n");

	printf("AZLetter string length = %d, AZLetters: ", count_letter);
	for (i = 0; i < count_letter; i++)
	{
		printf("%c", letter[i]);
	}
	printf("\n");

	printf("Symbol string length = %d, Symbols: ", count_Symbol);
	for (i = 0; i < count_Symbol; i++)
	{
		printf("%c", Symbol[i]);
	}
	printf("\n");
	return 0;
}