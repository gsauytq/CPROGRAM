#include <stdio.h>
#define N 5

int main(void)
{
	int a[N][N] = {0}, i, j, k;

	i = 0;
	j = N / 2;
	a[i][j] = 1;

	for (k = 2; k <= N * N; k++)
	{
		i = i - 1;
		j = j + 1;
		if (i < 0 && j == N)
		{
			i = i + 2;
			j = j - 1;
		}
		else
		{
			if (i < 0)
				i = N - 1;
			if (j == N)
				j = 0;
		}

		if (a[i][j] == 0)
			a[i][j] = k;
		else
		{
			i = i + 2;
			j = j - 1;
			a[i][j] = k;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}