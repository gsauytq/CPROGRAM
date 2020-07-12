#include <stdio.h>

int palindromic_number(int x);

int main(void)
{
	int x;

	printf("Please enter a number:");
	scanf_s("%d", &x);
	
	if (palindromic_number(x))
		printf("%d is palindromic number.", x);
	else
		printf("%d is not palindromic number.", x);

	return 0;
}

int palindromic_number(int x)
{
	int number_new = 0;

	if (x < 0 || (x % 10 == 0 && x != 0))
	{
		return 0;
	}

	while (number_new < x)
	{
		number_new = number_new * 10 + x % 10;
		x /= 10;
	}

	return x == number_new || x == number_new / 10;
}