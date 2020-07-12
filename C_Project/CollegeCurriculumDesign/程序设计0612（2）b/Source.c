#include <stdio.h>

int main(void)
{
	int number, number_new, count = 0, result = 0;

	printf("Please enter a number:");
	scanf("%d", &number);
	number_new = number;

	do {
		number /= 10;
		count++;
	} while (number > 0);

	if (count > 5)
	{
		printf("Data Error");
		return 0;
	}
	printf("count:%d\n", count);

	while (number_new > 0)
	{
		result = result * 10 + number_new % 10;
		number_new /= 10;
	}
	printf("Reverse order:%d", result);

	return 0;
}