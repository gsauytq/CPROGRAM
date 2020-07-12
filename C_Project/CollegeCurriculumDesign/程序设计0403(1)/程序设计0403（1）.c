#include <stdio.h>
#include <math.h>

int prime(int n);

int main(void)
{
	int n, p[2] = { 2,3 };

	for (n = 4; n <= 1000; n++) {
		if (prime(n))
		{
			p[0] = p[1];
			p[1] = n;
			if (p[1] - p[0] == 2)
				printf("%5d%5d\n", p[0], p[1]);
		}
	}

	return 0;
}

int prime(int n)
{
	int i, flag = 0;
	int k = sqrt(n);

	for (i = 2; i <= k; i++)
		if (n % i == 0)
			break;

	if (i == k + 1)
		flag = 1;

	return flag;
}