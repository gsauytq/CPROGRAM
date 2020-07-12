#include <stdio.h>
#define M 4
int main(void)
{
	int a[M][M], i, j, sum = 0;

	printf("请输入整数：");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("数组内容：\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (i == 0 || i == M - 1 || j == 0 || j == M - 1)
			{
				sum += a[i][j];
			}
		}
	}
	printf("矩阵周边元素之和：%d",sum);

	return 0;
}