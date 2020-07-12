#include <stdio.h>

int main(void)
{
	int t, s=0;
	long x;

	printf("Please enter a integer:");
	scanf_s("%d", &x);

	while (x != 0)
	{
		t = x % 10;
		s += t;
		x /= 10;
	}

	printf("Sum of each number:%d", s);

	return 0;
}