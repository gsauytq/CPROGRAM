#include <stdio.h>

int main(void)
{
	int m, n, i;

	printf("Please enter two integers:");
	scanf_s("%d%d", &m, &n);

	if (m < n)
	{
		int t;
		t = m;
		m = n;
		n = t;
	}

	i = m;
	while (m)
	{
		if (i % m == 0 && i % n == 0)
		{
			printf("LCM:%d", i);
			break;
		}
		else
			i++;
	}

	return 0;
}