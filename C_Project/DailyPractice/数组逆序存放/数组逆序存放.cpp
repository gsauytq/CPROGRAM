#include <stdio.h>

int main(void) {
	int a[9] = { 1,2,3,4,5,6,7,8,9 }, i, temp;

	printf("before array:\n");
	for (i = 0; i < 9; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	printf("after array:\n");
	for (i = 0; i < 4; i++) {
		temp = a[i];
		a[i] = a[8 - i];
		a[8 - i] = temp;
	}
	for (i = 0; i < 9; i++) {
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}