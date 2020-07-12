#include <stdio.h>

int main(void)
{
	int i, j, n, result = 1, sum = 0;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		result = 1;
		for (j = 1; j <= i; j++)
		{
			result *= j;
		}
		sum += result;
	}

	printf("%d", sum);
	return 0;
}