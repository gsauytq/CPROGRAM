#include <stdio.h>

int main(void)
{
	char* numberten[] = {
		"eleven",
		"twelve",
		"thirteen",
		"fourteen",
		"fifteen",
		"sixteen",
		"seventeen",
		"eighteen",
		"nineteen"
	}, * numberty[] = {
			"twenty",
			"thirty",
			"forty",
			"fifty",
			"sixty",
			"seventy",
			"eighty",
			"ninety"
	}, * number[] = {
			"one",
			"two",
			"three",
			"four",
			"five",
			"six",
			"seven",
			"eight",
			"nine",
			"ten"
	};

	int number_n;

	printf("Enter a two-digit number:");
	scanf("%d", &number_n);

	if (number_n % 10 == 0)
	{
		printf("You entered the number %s", numberty[number_n / 10 - 2]);
	}

	if (number_n >= 11 && number_n <= 19)
	{
		printf("You entered the number %s", numberten[number_n % 10 - 1]);
	}

	printf("You entered the number %s-%s", numberty[number_n / 10 - 2], number[number_n % 10 - 1]);
	return 0;
}