#include <stdio.h>

int main(void)
{
	int m, n, t;

	printf("Enter two integers:");
	scanf_s("%d %d", &m, &n);

	if (n == 0)
	{
		printf("Greatest common divisor:%d", m);
		return 0;
	}

	while (n > 0)
	{
		t = m % n;
		m = n;
		n = t;
	}

	printf("Greatest common divisor:%d", m);
	return 0;
}