#include <stdio.h>

int result(int m, int n);

int main(void)
{
	int a, b, s;

	printf("Please enter integers:");
	scanf("%d %d", &a, &b);

	s = result(a, b);

	printf("result:%d", s);

	return 0;
}

int result(int m, int n)
{
	return m * n;
}