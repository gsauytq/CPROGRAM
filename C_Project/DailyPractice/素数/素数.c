#include <stdio.h>

int main(void)
{
	int i, n;

	printf("Please enter a integer:");
	scanf_s("%d", &n);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			break;
	}

	if (i == n)
	{
		printf("%d is prime.", n);
	}
	else
	{
		printf("%d is not prime.", n);
	}

	return 0;
}