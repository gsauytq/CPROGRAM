#include <stdio.h>

int main(void)
{
	int result = 0, sum = 0, n, a = 2;

	printf("Please enter n:");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		result = result * 10 + a;
		sum += result;
	}

	printf("sum:%d", sum);
	return 0;
}