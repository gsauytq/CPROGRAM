#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
	int m, n, r;

	printf("Enter m and n:");
	scanf_s("%d%d", &m, &n);

	r = gcd(m, n);

	printf("lcm:%d", (m * n) / r);

	return 0;
}

int gcd(int m, int n)
{
	int t;

	while (n > 0)
	{
		t = m % n;
		m = n;
		n = t;
	}

	return m;
}