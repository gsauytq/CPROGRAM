#include <stdio.h>
#define N 9

int main(void)
{
	int a[N][N] = { 0 }, i, j;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%*d", 30 - i * 2, a[i][0]);
		for (j = 1; j <= i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}