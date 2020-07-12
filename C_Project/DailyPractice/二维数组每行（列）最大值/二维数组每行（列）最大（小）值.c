#include <stdio.h>
#define ROW 3
#define COL 4
int main(void)
{
	int a[ROW][COL], i, j, k = 0, rmin[ROW], cmin[COL], max, min, rmax[ROW], cmax[COL];

	printf("请输入整数：");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	
	printf("数组内容：\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	k = 0;
	for (i = 0; i < ROW; i++)
	{
		min = a[i][0];
		for (j = 0; j < COL; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
			}
		}
		rmin[k++] = min;
	}

	printf("每行最小值：");
	for (i = 0; i < k; i++)
	{
		printf("%3d", rmin[i]);
	}
	printf("\n");

	k = 0;
	for (i = 0; i < ROW; i++)
	{
		max = a[i][0];
		for (j = 0; j < COL; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
		rmax[k++] = max;
	}

	printf("每行最大值：");
	for (i = 0; i < k; i++)
	{
		printf("%3d", rmax[i]);
	}
	printf("\n");

	k = 0;
	for (i = 0; i < COL; i++)
	{
		min = a[0][i];
		for (j = 0; j < ROW; j++)
		{
			if (a[j][i] < min)
			{
				min = a[j][i];
			}
		}
		cmin[k++] = min;
	}

	printf("每列最小值：");
	for (i = 0; i < k; i++)
	{
		printf("%3d", cmin[i]);
	}
	printf("\n");

	k = 0;
	for (i = 0; i < COL; i++)
	{
		max = a[0][i];
		for (j = 0; j < ROW; j++)
		{
			if (a[j][i] > max)
			{
				max = a[j][i];
			}
		}
		cmax[k++] = max;
	}

	printf("每列最大值：");
	for (i = 0; i < k; i++)
	{
		printf("%3d", cmax[i]);
	}
	printf("\n");

	return 0;
}