#include <stdio.h>

int max(int m, int n);

int main(void)
{
	int x, y;

	printf("Please enter integers:");
	scanf("%d%d", &x, &y);

	printf("max:%d", max(x, y));
	return 0;
}

int max(int m, int n)
{
	return (m > n) ? m: n;
}