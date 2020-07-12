#include <stdio.h>

int main(void) {
	int a, b, c, i, n;
	printf("please enter a:");
	scanf_s("%d", &a);
	printf("please enter n:");
	scanf_s("%d", &n);
	b = a;						
	c = a;
	for (i = 1; i < n; i++) {
		a = a * c;
		b = b + a;
	}
	printf("%d\n", b);
	return 0;
}