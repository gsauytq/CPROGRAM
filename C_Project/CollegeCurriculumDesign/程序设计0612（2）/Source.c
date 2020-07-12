#include <stdio.h>

int count_n(int number);
void print_z(int number_one, int count);
void print_f(int number_new);

int main(void)
{
	int number, number_one, number_new, count;

	printf("Please enter a number:");
	scanf("%d", &number);
	number_one = number_new = number;

	count = count_n(number);
	if (count > 5)
	{
		printf("Data Error.");
		return 0;
	}
	printf("count:%d\n", count);

	print_z(number_one, count);
	print_f(number_new);

	return 0;
}

int count_n(int number)
{
	int count = 0;
	do {
		number /= 10;
		count++;
	} while (number > 0);

	return count;
}

void print_z(int number_one, int count)
{
	int count_r = 1;
	for (int i = 2; i <= count; i++)
	{
		count_r *= 10;
	}

	do {
		printf("%d", number_one / count_r);
		number_one %= count_r;
		count_r /= 10;
	} while (number_one > 0);

	printf("\n");
}

void print_f(int number_new)
{
	int result = 0;

	printf("Reverse order:");
	while (number_new > 0)
	{
		result = result * 10 + number_new % 10;
		number_new /= 10;
	}
	printf("%d\n", result);
}