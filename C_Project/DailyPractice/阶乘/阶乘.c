#include <stdio.h>

int main(void)
{
	long i, j, result = 1;

	printf("������һ��������");
	scanf_s("%ld", &j);
	for (i = 1; i <= j; i++) {
		result *= i;
	}

	printf("%ld!=%ld", j, result);

	return 0;
}