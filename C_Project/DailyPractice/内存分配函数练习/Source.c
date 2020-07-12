#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* a;

	a = calloc(5, sizeof(int));

	for (int i = 0; i < 5; i++)
	{
		printf("%4d", a[i]);
	}

	a = realloc(a, 7 * sizeof(int));

	for (int i = 0; i < 7; i++)
	{
		a[i] = i;
	}

	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%3d", a[i]);
	}

	return 0;
}