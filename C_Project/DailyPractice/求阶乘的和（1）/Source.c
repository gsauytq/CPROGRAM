#include <stdio.h>

int main(void)
{
	int i, n, result = 1, sum = 0;

	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result *= i;
		sum += result;
	}
	printf("%d", sum);

	return 0;
}