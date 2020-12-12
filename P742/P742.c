#include<stdio.h>
int main(void)
{
	int A[5] = { 0 };
	int B[5] = { 0 };
	int C[5] = { 5 };
	int i, sum = 0;

	printf("Input A: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
	}
	printf("Input B: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &B[i]);
	}
	for (i = 0; i < 5; i++)
	{
		C[i] = (A[i] * B[4-i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum += C[i];
	}
	printf("\nsum=%d\n", sum);

	return 0;
}