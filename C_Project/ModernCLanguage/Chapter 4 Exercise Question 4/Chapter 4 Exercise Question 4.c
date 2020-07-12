#include <stdio.h>

int main(void)
{
	int x, y;

	printf("Enter a number between 0 and 32767:");
	scanf_s("%d", &x);

	printf("In octal, your number is:0%o", x);

	return 0;
}