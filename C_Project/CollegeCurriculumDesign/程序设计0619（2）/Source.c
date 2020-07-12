#include <stdio.h>

int main(void)
{
	long long int result = 1, sum = 0;

	for (int i = 1; i <= 20; i++)
	{
		result *= i;
		sum += result;
	}

	printf("1!+2!+...+20!=%lld", sum);

	return 0;
}