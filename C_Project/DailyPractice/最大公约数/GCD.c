#include <stdio.h>

int main(void)
{
	int m, n, t;

	printf("Please enter two integer:");
	scanf_s("%d %d", &m, &n);

	while (n > 0)
	{
		t = m % n;
		m = n;
		n = t;
	}

	printf("GCD:%d", m);

	return 0;
}