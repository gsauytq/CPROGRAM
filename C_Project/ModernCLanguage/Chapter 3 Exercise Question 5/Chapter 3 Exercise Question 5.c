#include <stdio.h>

int main(void)
{
	int num[4][4], i, j, sum1, sum2, sum3, sum4;

	printf("Enter the numbers from 1 to 16 in any order:\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf_s("%d", &num[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", num[i][j]);
		}
		printf("\n");
	}

	printf("Row sums:");
	for (i = 0; i < 4; i++) {
		sum1 = 0;
		for (j = 0; j < 4; j++) {
			sum1 += num[i][j];
		}
		printf("%d ", sum1);
	}
	
	printf("Collumn sums:");
	for (i = 0; i < 4; i++) {
		sum2 = 0;
		for (j = 0; j < 4; j++) {
			sum2 += num[j][i];
		}
		printf("%d ", sum2);
	}

	sum3 = 0;
	printf("Diagonal sums:");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == j) {
				sum3 += num[i][j];
			}
		}		
	}
	printf("%d ", sum3);

	sum3 = 0;
	for (i =3 ; i >=0 ; i--) {
		for (j =3 ; j >= 0; j--) {
			if (i == j) {
				sum3 += num[i][j];
			}
		}
	}
	printf("%d ", sum3);

	return 0;
}