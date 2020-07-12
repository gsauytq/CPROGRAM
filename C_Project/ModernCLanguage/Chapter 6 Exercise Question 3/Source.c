#include <stdio.h>

int main(void)
{
	int m, m1, n, n1, t;

	printf("Enter a fraction:");
	scanf_s("%d/%d", &m, &n);
	
	m1 = m; n1 = n;

	if (n == 0 || m == 0)
	{
		printf("Error");
		return 0;
	}

	while (n > 0)
	{
		t = m % n;
		m = n;
		n = t;
	}

	printf("In lowest terms:%d/%d", m1 / m, n1 / m);
	return 0;
}