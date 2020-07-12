#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime(int n);

int main(void)
{
	int n;

	printf("Please enter a integer:");
	scanf_s("%d", &n);

	if (prime(n))
	{
		printf("%d is prime.", n);
	}
	else
	{
		printf("%d is not prime.", n);
	}

	return 0;
}

bool prime(int n)
{
	int i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			break;
	}
	
	if (i > sqrt(n))
	{
		return true;
	}
	else
	{
		return false;
	}
}