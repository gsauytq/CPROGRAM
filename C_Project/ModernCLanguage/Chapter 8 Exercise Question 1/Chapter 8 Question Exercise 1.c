#include <stdio.h>

int main(void)
{
	int num[10] = { 0 };
	int number, digit, i;

	printf("Enter a number:");
	scanf_s("%d", &number);

	while (number > 0)
	{
		digit = number % 10;
		num[digit]++;
		number /= 10;
	}

	printf("Repeated digit(s):");
	for (i = 0; i < 10; i++)
	{
		if (num[i] > 1)
			printf("%2d", i);
	}

	return 0;
}