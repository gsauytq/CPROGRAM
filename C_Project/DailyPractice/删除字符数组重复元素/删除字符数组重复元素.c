#include <stdio.h>
#define N 10
int main(void)
{
	int i, j=1;
	char a[N];

	printf("Please enter character:\n");
	for (i = 0; i < N-1; i++)
	{
		scanf_s("%c", &a[i]);
	}

	for (i = 0; i < N - 2; i++)
	{
		if (a[i] != a[i + 1])
			a[j++] = a[i + 1];
	}

	printf("After Array:\n");
	for (i = 0; i < j; i++)
	{
		printf("%-3c", a[i]);
	}

	return 0;
}