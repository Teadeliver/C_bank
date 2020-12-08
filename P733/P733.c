#include<stdio.h>

int main()
{
	char ch;
	printf("Input a character: ");
	scanf("%c", &ch);
	printf("\nAscii('%c') = 0x%x\n", ch, ch);

	return 0;
}