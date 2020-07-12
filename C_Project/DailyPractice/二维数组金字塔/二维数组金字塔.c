#include <stdio.h>
#define N 10

void array(int(*a)[N]);
int main(void)
{
	int i, a[N][N];

	array(a);
	for (i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void array(int(*a)[N])
{
	int i, j, k, m;

	if (N % 2 == 0)
		m = N / 2;
	else
		m = N / 2 + 1;

	for (i = 0; i < m; i++)
	{
		for (j = i; j < N - i; j++)
		{
			a[i][j] = a[N - i - 1][j] = i + 1;
		}
		for (k = i + 1; k < N - i; k++)
		{
			a[k][i] = a[k][N - i - 1] = i + 1;
		}
	}
}