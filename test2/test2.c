#include <stdio.h>
int main()
{
	int data1, data2;
	char op;
	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &data1, &op, &data2);
	switch (op)
	{
	case'+':
		printf("\n%d+%d=%.0lf", data1, data2, ((double)data1 + data2)); break;
	case'-':
		printf("\n%d+%d=%.01f", data1, data2, ((double)data1 - data2)); break;
	case'*':
		printf("\n%d*%d=%.01f", data1, data2, ((double)data1 * data2)); break;
	case'/':
		if (data2 == 0)
		{
			printf("\nError! chu shu wei 0.\n");
			break;
		}
		else
		{
			printf("\n%d/%d=%lf", data1, data2, (data1 / (double)data2));
			break;
		}
	case'%':
		if (data2 == 0)
		{
			printf("\nError! chu shu wei 0.\n");
			break;
		}
		else
		{
			printf("\n%d%%%d=%ld", data1, data2, data1 % data2);
			break;
		}
	default:
		printf("\nError!");
		break;
	}
	return 0;
}
