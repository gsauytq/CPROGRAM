#include <stdio.h>

int main(void)
{
	long sum = 0, n = 1, i;

	for (i = 1; i <= 20; i++) {
		n *= i;
		sum += n;
	}

	printf("1+2!+3!+...+20!=%ld", sum);

	return 0;
}