#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	for (i = 1; i <= 100; i += 2)
	{
		sum += i;
	}

	printf("100以内奇数之和：%d", sum);

	return 0;
}