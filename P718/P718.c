#include<stdio.h>

int main()
{
	int n;
	int num[4] = { 0,1,2 };

	printf("Input n (13>=n>=2): ");
	scanf("&d", &n);

	return 0;
}
//f(0)=0,f(1)=1,f(2)=2,  f(n+1)=2f(n)+f(n-1)f(n-2)