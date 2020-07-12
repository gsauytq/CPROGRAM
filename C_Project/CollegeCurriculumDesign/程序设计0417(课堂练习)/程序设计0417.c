#include <stdio.h>

int lcm(int m, int n);

int main(void)
{
	int x, y;

	printf("Please enter integers:");
	scanf("%d%d", &x, &y);

	printf("LCM:%d", lcm(x, y));
	return 0;
}

int lcm(int m, int n)
{
	int i;

	if (m > n)
		i = m;
	else
		i = n;

	while (i % m != 0 || i % n != 0)
	{
		i++;
	}

	return i;
}