#include <stdio.h>

int main(void)
{
	int i, j, k, t;

	printf("Enter a three-digit number:");
	scanf_s("%d", &t);

	i = t % 10;
	j = t / 10 % 10;
	k = t / 100;

	printf("The reversal is:%d%d%d", i, j, k);

	return 0;
}