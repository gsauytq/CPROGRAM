#include <stdio.h>

int main(void)
{
	int x, y;

	printf("Please enter X:");
	scanf_s("%d", &x);

	if (x < 1)
	{
		printf("y=%d", x);
	}
	else if (x < 10)
	{
		printf("y=%d", 2 * x - 1);
	}
	else if (x >= 10)
	{
		printf("y=%d", 3 * x - 11);
	}

	return 0;
}