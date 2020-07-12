#include <stdio.h>

int print(int n);

int main(void)
{
	int n;
	printf("Please enter a number:");
	scanf_s("%d", &n);

	print(n);
	return 0;
}

int print(int n)
{
	if (n > 1)
	{
		print(n - 1);
	}
	printf("%d,%p\n", n, &n);
}