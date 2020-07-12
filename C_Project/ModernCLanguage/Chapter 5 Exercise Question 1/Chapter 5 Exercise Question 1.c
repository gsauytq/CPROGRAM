#include <stdio.h>

int main(void)
{
	int x, y;

	printf("Enter a number:");
	scanf_s("%d", &x);

	if (x >= 0 && x <= 9)
		y = 1;
	if (x >= 10 && x <= 99)
		y = 2;
	if (x >= 100 && x <= 999)
		y = 3;

	printf("The number %d has %d digits", x, y);

	return 0;
}