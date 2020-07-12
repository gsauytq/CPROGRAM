#include <stdio.h>

int main(void)
{
	int a[3][3] = { 3,4,5,6,7,8,9,10,11 }, b[3], i, j;

	for (i = 0; i < 3; i++) {
		b[i] = a[i][i];
		for (j = i + 1; j < 3; j++) {
			if (b[i] < a[j][i])
				b[i] = a[j][i];
		}
	}

	for (i = 0; i < 3; i++) {
		printf("%d", b[i]);
	}

	return 0;
}