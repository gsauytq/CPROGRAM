#include <stdio.h>
#define N 10

int main(void)
{
	int a[10], i, j, t;

	printf("array:");
	for (i = 0; i < N; i++) {
		scanf_s("%d", a + i);
	}

	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (a[j] > a[j + 1])
				continue;
			else {
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}

	printf("array1:");
	for (i = 0; i < 10; i++) {
		printf("%d  ", a[i]);
	}

	return 0;
}