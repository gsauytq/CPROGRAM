#include <stdio.h>
#define N 4

int main(void)
{
	int a[N][N] = { {3,4,5,6},{6,7,8,9},{11,22,33,44},{60,70,80,90} }, i, j, k;

	printf("数组内容：\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	int n, t;
	printf("请输入移动行的步数(1<n<4)：");
	scanf_s("%d", &n);

	for (k = 0; k < n; k++)
	{
		for (i = 0; i < N; i++)
		{
			t = a[0][i];
			for (j = 0; j < N - 1; j++)
			{
				a[j][i] = a[j + 1][i];
			}
			a[N - 1][i] = t;
		}
	}

	printf("移动后的结果：\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	n = 0; t = 0;
	printf("请输入移动列的步数(1<n<4)：");
	scanf_s("%d", &n);

	for (k = 0; k < n; k++)
	{
		for (i = 0; i < N; i++)
		{
			t = a[i][0];
			for (j = 0; j < N-1; j++)
			{
				a[i][j] = a[i][j + 1];
			}
			a[i][N-1] = t;
		}
	}

	printf("移动后的结果：\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}