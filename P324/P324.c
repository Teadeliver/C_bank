#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	FILE* fp_num1,* fp_num2,* fp_symbol;
	int num1, num2;
	char symbol;
	int line = 0;
	fp_num1 = fopen("Comp.txt", "r");
	fp_symbol = fopen("CompA.txt", "r");
	fp_num2 = fopen("CompB.txt", "r");
	
	while ((!feof(fp_num1)) && (!feof(fp_symbol)) && (!feof(fp_num2)))
	{
		line++;
		fscanf(fp_num1, "%d ", &num1);
		fscanf(fp_num2, "%d ", &num2);
		fscanf(fp_symbol, "%c ", &symbol);
		if (symbol == '+')
		{
			printf("Line %03d:  %5d %c %-5d = %-6d\n", line, num1, symbol, num2, num1 + num2);
		}
		if(symbol == '-')
		{
			printf("Line %03d:  %5d %c %-5d = %-6d\n", line, num1, symbol, num2, num1 - num2);
		}
	}
}