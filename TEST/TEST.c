#include <stdio.h>
#include <string.h>
int main()
{
	char a[128];
	int i, j;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
	printf("Please input string:");
	gets(a);
	j = strlen(a)-1;
	for (i = 0; i < j; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			count1++;
		}
		else if (a[i] >= 'a' && a[i] <= 'z')
		{
			count2++;
		}
		else if (a[i] >= 'A' && a[i] <= 'Z')
		{
			count2++;
		}
		else if (a[i] == ' ')
		{
			count3++;
		}
		else
		{
			count4++;
		}
	}
	printf("\nzimu=%d,shuzi=%d,kongge=%d,qita=%d\n", count2, count1, count3, count4);
	return 0;
}
