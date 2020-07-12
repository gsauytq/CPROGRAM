#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(void)
{
	int a[N][N], i, j, k, t0 = 0, t1 = 0, t2 = 0;

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
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	printf("°°µã:");
	for (i = 0; i < N; i++)
	{
		t0 = a[i][0];
		for (j = 0; j < N; j++)
		{
			if (t0 < a[i][j])
			{
				t0 = a[i][j];
				t1 = i;
				t2 = j;
			}
		}
		for (k = 1; k < N; k++)
		{
			if (a[t1][t2] > a[k][t2])
			{
				break;
			}
		}
		if (k == N)
		{
			printf("a[%d][%d]:%3d\n", t1, t2, a[t1][t2]);
		}
	}



	return 0;
}