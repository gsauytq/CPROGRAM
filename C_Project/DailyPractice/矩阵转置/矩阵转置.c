#include <stdio.h>

int main(void)
{
	int a[3][3], b[3][3], i, j;

	printf("Please enter integer:");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			b[j][i] = a[i][j];
		}
	}

	printf("After Transposition:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

	return 0;
}