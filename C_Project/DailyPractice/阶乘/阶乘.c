#include <stdio.h>

int main(void)
{
	long i, j, result = 1;

	printf("请输入一个整数：");
	scanf_s("%ld", &j);
	for (i = 1; i <= j; i++) {
		result *= i;
	}

	printf("%ld!=%ld", j, result);

	return 0;
}