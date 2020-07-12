#include <stdio.h>

int main(void)
{
	int i, j, k;

	printf("Enter a three-digit number:");
	scanf_s("%1d%1d%1d", &i, &j, &k);

	printf("The reversal is:%d%d%d", k, j, i);

	return 0;
}