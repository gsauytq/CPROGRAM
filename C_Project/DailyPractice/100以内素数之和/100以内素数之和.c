#include <stdio.h>
#define N 100

int main(void)
{
	int i, j, k = 0;

	for (i = 2; i <= N; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}
		if (i == j)
			k += i;
	}

	printf("100以内素数之和：%d",k);

	return 0;
}