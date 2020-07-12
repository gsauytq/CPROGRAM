#include <stdio.h>
#define N 8

int main(void)
{
	int i, j, a[N], max, t;

	printf("old_array:");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < N; i++)
	{
		max = i;
		for (j = i + 1; j < N; j++)
		{
			if (a[max] < a[j])
			{
				max = j;
			}
		}
		t = a[i];
		a[i] = a[max];
		a[max] = t;
	}

	printf("new_array:");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}