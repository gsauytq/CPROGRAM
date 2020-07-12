#include <stdio.h>

int main(void)
{
	int i, j;

	printf("Please enter a integer:");
	scanf("%d", &i);

	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			break;
	}

	if (i == j)
		printf("%d is prime.", i);
	else
		printf("%d is not prime.", i);

	return 0;
}