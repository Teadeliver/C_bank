#include <stdio.h>

int test(int a[])
{
	printf("%p", a);
	printf("\n");

	printf("%p", a + 1);
	printf("\n");

	printf("%p", &a);
	printf("\n");

	printf("%p", &a + 1);
	printf("\n");
}
int main()
{
	int num[5] = { 1,2,3,4,5 };

	test(num);
	printf("%p", num);
	printf("\n");

	printf("%p", num + 1);
	printf("\n");

	printf("%p", &num);
	printf("\n");

	printf("%p", &num + 1);
	printf("\n");

	return 0;
}
