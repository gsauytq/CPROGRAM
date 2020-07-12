#include <stdio.h>
#define N 8

int main(void)
{
	int a[N], i, j, t;

	printf("old_array:");
	for (i = 0; i < N; i++) {
		scanf_s("%d", a + i);
	}

	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	printf("new_array:");
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}