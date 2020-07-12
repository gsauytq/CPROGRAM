#include <stdio.h>
#define N 10
int main(void)
{
	int a[N], i, j=1;

	printf("Please enter integer:\n");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < N-1; i++)
	{
		if (a[i] != a[i + 1])
			a[j++] = a[i + 1];
	}

	printf("After Array:\n");
	for (i = 0; i < j; i++)
	{
		printf("%3d", a[i]);
	}

	return 0;
}