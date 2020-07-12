#include <stdio.h>

int gcd(int n1, int n2, int n3);
int mult(int n1, int n2, int n3);
int min(int n1, int n2, int n3);

int main(void)
{
	int x1, x2, x3;

	printf("Please enter integers:");
	scanf("%d%d%d", &x1, &x2, &x3);

	//printf("%d,%d,%d is lcm:%d", x1, x2, x3, (mult(x1, x2, x3) / gcd(x1, x2, x3)));
	printf("%d\n", gcd(x1, x2, x3));
	printf("%d\n", min(x1, x2, x3));
	printf("%d\n", mult(x1, x2, x3));
	return 0;
}

int min(int n1, int n2, int n3)
{
	int min;
	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;

	return min;
}

int gcd(int n1, int n2, int n3)
{
	int i;
	i = min(n1, n2, n3);

	while ((n1 % i != 0) || (n2 % i != 0) || (n3 % i != 0))
		i--;

	return i;
}

int mult(int n1, int n2, int n3)
{
	return n1 * n2 * n3;
}