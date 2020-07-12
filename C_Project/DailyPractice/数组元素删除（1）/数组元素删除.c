#include <stdio.h>
#define N 10

int main(void)
{
	int i, j = 0, n, a[N] = { 23,523,213,52,34,52,463,745,234,74 };

	printf("修改之前的数组：");
	for (i = 0; i < N; i++)
	{
		printf("%5d", a[i]);
	}

	printf("\n输入要删除的值：");
	scanf_s("%d", &n);

	for (i = 0;i < N; i++)
	{
		if (a[i] != n)
			a[j++] = a[i];
	}
	a[N - 1] = 0;

	printf("修改后的数组：");
	for (i = 0; i < N; i++)
	{
		printf("%5d", a[i]);
	}

	return 0;
}