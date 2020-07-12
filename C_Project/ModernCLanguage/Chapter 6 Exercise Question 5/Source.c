#include <stdio.h>

int main(void)
{
	int m;

	printf("Enter a number:");
	scanf_s("%d", &m);

	printf("The reversal is:");
	do {
		printf("%d", m % 10);
		m /= 10;
	} while (m > 0);

	return 0;
}