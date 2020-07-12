#include <stdio.h>

int sum(int n);

int main(void)
{
	int x;

	printf("Please enter a integer:");
	scanf("%d", &x);

	printf("%d is sum:%d", x, sum(x));

	return 0;
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
}