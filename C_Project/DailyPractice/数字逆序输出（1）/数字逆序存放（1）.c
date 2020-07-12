#include <stdio.h>

int main(void)
{
	int n, a;

	scanf_s("%d", &n);
	while (n != 0) {
		a = n % 10;
		printf("%d", a);
		n /= 10;
	}

	return 0;
}