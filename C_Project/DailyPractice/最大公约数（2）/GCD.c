#include <stdio.h>

int main(void)
{
	int m, n, i;

	printf("Please enter two integer:");
	scanf_s("%d %d", &m, &n);

	i = n;
	while (i > 0)
	{
		if ((m % i == 0) && (n % i == 0))
		{
			printf("GCD:%d", i);
			break;
		}
		else
			i--;
	}

	return 0;
}