#include <stdio.h>

int main(void)
{
	int i, j, k, n;

	printf("请输入三角形边长：");
	scanf_s("%d", &n);

	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n - k - 1; i++)
		{
			printf(" ");
		}
		for (j = 0; j <= 2 * k; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}