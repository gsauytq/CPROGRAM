#include <stdio.h>
#include <math.h>

int prime(int n);

int main(void)
{
	int n, i, p[2] = { 2,3 };

	printf("Please enter the range of prime numbers:");
	scanf_s("%d", &n);

	for (i = 4; i <= n; i++)
	{
		if (prime(i))
		{
			p[0] = p[1];
			p[1] = i;
			if (p[1] - p[0] == 2)
			{
				printf("%d\t%d\n", p[0], p[1]);
			}
		}
	}

	return 0;
}

int prime(int n)
{
	int i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			break;
	}

	if (i > sqrt(n))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}