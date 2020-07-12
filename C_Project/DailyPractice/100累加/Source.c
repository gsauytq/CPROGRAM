#include <stdio.h>

int main(void)
{
	int n;

	printf("Please enter a integer:");
	scanf_s("%d", &n);

	printf("%d accumulation:%d", n, (1 + n) * (n / 2));

	return 0;
}