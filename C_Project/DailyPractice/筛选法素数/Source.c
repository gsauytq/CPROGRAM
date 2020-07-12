#include <stdio.h>

void prime(int x);

int main(void)
{
	int x;
	
	printf("Please enter a number:");
	scanf_s("%d", &x);

	prime(x);
	return 0;
}

void prime(int x)
{
	int a[100], i, j;

	for (i = 2; i <= x; i++)
	{
		a[i] = i;
	}

	i = 2;
	while (i < x)
	{
		for (j = a[i] * 2; j <= x; j += a[i])
		{
			a[j] = 0;
		}

		i++;
		while (a[i] == 0)
		{
			i++;
		}
	}

	printf("prime:");
	for (i = 2; i <= x; i++)
	{
		if (a[i] != 0)
		{
			printf("%3d", a[i]);
		}
	}
}