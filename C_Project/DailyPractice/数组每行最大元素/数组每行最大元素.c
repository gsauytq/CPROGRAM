#include <stdio.h>

int main(void)
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 }, b[3], i, j;

	for (i = 0; i < 3; i++) {
		b[i] = a[i][i];
		for (j = 1; j < 3; j++) {
			if (a[i][j] > b[i])
				b[i] = a[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		printf("%d", b[i]);
	}

	return 0;
}