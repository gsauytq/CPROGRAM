#include <stdio.h>
#define N 10

int main(void)
{
	int i, j, k;

	for (k = 0; k < N; k++)
	{
		for (i = 0; i < N - k - 1; i++)
		{
			printf(" ");
		}
		for (j = 0; j <= k; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}