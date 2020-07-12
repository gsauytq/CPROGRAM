#include <stdio.h>

int main(void)
{
	int x;

	scanf_s("%d", &x);
	printf("%d", ((((3 * x - 2) * x - 5) * x - 1) * x + 7) * x - 6);

	return 0;
}