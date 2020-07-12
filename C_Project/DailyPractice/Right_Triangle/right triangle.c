#include <stdio.h>
#define N 10
int main(void)
{
	int i, j;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}