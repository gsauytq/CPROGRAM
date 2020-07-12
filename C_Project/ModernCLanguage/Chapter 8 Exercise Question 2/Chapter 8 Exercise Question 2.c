#include <stdio.h>

int main(void)
{
	int number[10] = { 0 }, i, num, digit = 0;

	printf("Enter a number:");
	scanf_s("%d", &num);

	while (num > 0)
	{
		digit = num % 10;
		number[digit]++;
		num /= 10;
	}

	printf("Digit:        ");
	for (i = 0; i < 10; i++)
		printf("%3d", i);
	printf("\n");
	
	printf("Occurrences:  ");
	for (i = 0; i < 10; i++)
		printf("%3d", number[i]);
	printf("\n");

	return 0;
}