#include <stdio.h>

int main(void)
{
	int x, y = 0, t;

	printf("Please enter a integer:");
	scanf_s("%d", &x);
	int s = x;

	while(x > 0)
	{
		t = x % 10;
		y = y * 10 + t;
		x /= 10;
	}

	if (s == y)
	{
		printf("%d is palindrome number", s);
	}
	else
	{
		printf("%d is not palindrome number", s);
	}

	return 0;
}