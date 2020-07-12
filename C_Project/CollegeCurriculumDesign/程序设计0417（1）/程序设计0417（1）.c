#include <stdio.h>

long long fact(int n);

int main(void)
{
	int n;

	printf("Please enter a integer:");
	scanf("%d", &n);

	printf("%d!=%lld", n, fact(n));
	return 0;
}

long long fact(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}