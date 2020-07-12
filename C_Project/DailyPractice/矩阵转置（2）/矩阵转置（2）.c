#include <stdio.h>
#define N 3

int main(void)
{
	int a[N][N], i, j, t;

	printf("Please enter integer:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == j)
				continue;
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
	}

	printf("After Transposition:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}