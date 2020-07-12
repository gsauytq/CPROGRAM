#include <stdio.h>
#include <math.h>

int prime(int n);

int main(void)
{
	int i, s = 0, n = 0;

	for (i = 100; i <= 300; i++)
	{
		if (prime(i))
		{
			s += i;
			n++;
		}
	}

	printf("100-300之间素数的个数：%d，它们的和：%d", n, s);
	return 0;
}

int prime(int n)
{
	int i, flag = 0;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
			break;
	}

	if (i > sqrt(n))
		flag = 1;

	return flag;
}
