#include <stdio.h>
#define N 4

int main(void)
{
	int a[N][N], b[N * N], i, j, k = 0;

	printf("������������");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("�������ݣ�\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	k = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			b[k++] = a[i][j];
		}
	}

	printf("���д洢��\n");
	for (i = 0; i < k; i++)
	{
		printf("%3d", b[i]);
	}
	printf("\n");

	k = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			b[k++] = a[j][i];
		}
	}

	printf("���д洢��\n");
	for (i = 0; i < k; i++)
	{
		printf("%3d", b[i]);
	}
	printf("\n");

	return 0;
}