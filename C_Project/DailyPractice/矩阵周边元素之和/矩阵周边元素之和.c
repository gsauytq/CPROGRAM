#include <stdio.h>
#define M 4
int main(void)
{
	int a[M][M], i, j, sum = 0;

	printf("������������");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("�������ݣ�\n");
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
	printf("�����ܱ�Ԫ��֮�ͣ�%d",sum);

	return 0;
}