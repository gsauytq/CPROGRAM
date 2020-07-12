#include <stdio.h>

int main(void)
{
	int i, j, n, a[10] = { 34,25,334,234,602,23,24,325,634,254 };

	printf("修改前的数组：");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}

	printf("\n请输入删除的数：");
	scanf_s("%d", &n);

	for (i = 0; i < 10; i++)
	{
		if (a[i] == n)
			break;
	}

	for (j = i; j < 10 - 1; j++)
	{
		a[j] = a[j + 1];
	}
	a[10 - 1] = 0;

	printf("修改后的数组：");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");

	return 0;
}