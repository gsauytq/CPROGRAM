#include <stdio.h>

int main(void)
{
	int array[5][5], i, j, sum = 0, k=1;

	for (i = 0; i < 5,k <= 5; i++) {
		printf("Enter row %d:", k++);
		for (j = 0; j < 5; j++) {
			scanf_s("%d", &array[i][j]);
		}
	}

	printf("Row totals:");
	for (i = 0; i < 5; i++) {
		sum = 0;
		for (j = 0; j < 5; j++) {
			sum += array[i][j];
		}
		printf("%4d", sum);
	}
	printf("\n");

	printf("Column totals:");
	for (i = 0; i < 5; i++) {
		sum = 0;
		for (j = 0; j < 5; j++) {
			sum += array[j][i];
		}
		printf("%4d", sum);
	}
	printf("\n");

	return 0;
}