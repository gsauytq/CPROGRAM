#include <stdio.h>
#define N 3
int main(void)
{
	int a[N][N], b[N][N], i, j;

	printf("Please enter integer:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("array:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			b[j][i] = a[i][j];
		}
	}

	printf("After Transposition:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}

	return 0;
}