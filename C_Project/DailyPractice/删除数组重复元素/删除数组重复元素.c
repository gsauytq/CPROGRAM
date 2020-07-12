#include <stdio.h>

int main(void)
{
	int i, j=0, a[10] = { 34,34,34,34,34,35,75,75,93,93 };

	printf("修改前的数组：");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}

	for (i = 1; i < 10; i++)
	{
		if (a[i] != a[j])
			a[++j] = a[i];
	}

	printf("\n修改后的数组：");
	for (i = 0; i <= j; i++)
	{
		printf("%5d", a[i]);
	}

	return 0;
}