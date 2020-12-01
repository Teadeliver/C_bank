#include<stdio.h>

int main()
{
	char l_letter, h_letter;
	printf("Input a lowercase letter: ");
	scanf("%c", &l_letter);
	printf("\n%c(%d)", l_letter, l_letter);
	h_letter = l_letter - 32;
	printf("\n%c(%d)", h_letter, h_letter);
	return 0;
}